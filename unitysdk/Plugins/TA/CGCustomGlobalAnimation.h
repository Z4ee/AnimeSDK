#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Plugins/TA/CGCustomGlobalAnimation_AnimationType.h"
#include "unitysdk/Plugins/TA/CGCustomGlobalAnimation_CustomDataType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C22E810)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETTIME_OFFSET UNITYSDK_OFFSET(0x1C22E7E0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C22E9E0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C22E9F0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C22F2E0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_PLAYWITHTIME_OFFSET UNITYSDK_OFFSET(0x1C22EA80)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C22E9C0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_START_OFFSET UNITYSDK_OFFSET(0x1C22E9D0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x1C22E9B0)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C22EA00)
#define PLUGINS_TA_CGCUSTOMGLOBALANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C22F2F0)

namespace Plugins::TA
{
	inline static constexpr unsigned int CGCustomGlobalAnimation_TypeDefinitionIndex = 36449;

	class CGCustomGlobalAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single animationTime; // 0x18
		::Plugins::TA::CGCustomGlobalAnimation_AnimationType presetDataType; // 0x1C
		::Plugins::TA::CGCustomGlobalAnimation_CustomDataType customDataType; // 0x20
		::System::String* customValueName; // 0x28
		::UnityEngine::AnimationCurve* curve; // 0x30
		::System::Single normalizedTime; // 0x38
		::System::Boolean useInitData; // 0x3C
		::UnityEngine::Color initColorData; // 0x40
		::System::Single initFloatData; // 0x50
		::System::Boolean autoBind; // 0x54
		::UnityEngine::Renderer* render; // 0x58
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* ve; // 0x60
		::System::Int32 materialIndex; // 0x68
		::UnityEngine::Material* targetMaterial; // 0x70
		::UnityEngine::Light* light; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETTIME_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_GETMATERIAL_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_STOP_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_REFRESH_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void PlayWithTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLUGINS_TA_CGCUSTOMGLOBALANIMATION_PLAYWITHTIME_OFFSET))(this, time);
		}
	};
}

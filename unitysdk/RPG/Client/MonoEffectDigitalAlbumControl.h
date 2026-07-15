#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_96563D36EE253EE2_OFFSET UNITYSDK_OFFSET(0x10CE3100)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0x10CE3AD0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10CE37A0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x10CE3B20)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_F70DC5473DF715AD_OFFSET UNITYSDK_OFFSET(0x10CE31E0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CE30B0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10CE3020)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x10CE3190)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_START_OFFSET UNITYSDK_OFFSET(0x10CE2E90)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x10CE38D0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE3E90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectDigitalAlbumControl_TypeDefinitionIndex = 67574;

	class MonoEffectDigitalAlbumControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::System::Single switchSpeed; // 0x18
		::UnityEngine::AnimationCurve* swithProgress; // 0x20
		::Il2CppArray<::UnityEngine::Texture2D*>* AlbumTexture2Ds; // 0x28
		::UnityEngine::Renderer* albumRenderer1; // 0x30
		::UnityEngine::Renderer* albumRenderer2; // 0x38
		::UnityEngine::Renderer* albumRenderer3; // 0x40
		::UnityEngine::MaterialPropertyBlock* Field_5_7; // 0x48
		::UnityEngine::Vector2 Field_5_8; // 0x50
		::UnityEngine::Vector3 Field_5_9; // 0x58
		::UnityEngine::Vector3 Field_5_10; // 0x64
		::System::Boolean _IsInit; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_9A4DCB2B4ADEB8A9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_9A4DCB2B4ADEB8A9_OFFSET))(this);
		}

		::System::Void Method_5_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_ED65AE7582736594_OFFSET))(this);
		}

		::System::Void Method_5_96563D36EE253EE2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_96563D36EE253EE2_OFFSET))(this);
		}

		::System::Void Method_5_F70DC5473DF715AD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_METHOD_5_F70DC5473DF715AD_OFFSET))(this);
		}
	};
}

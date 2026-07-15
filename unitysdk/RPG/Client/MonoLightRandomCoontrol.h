#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_91130F3B3A18FE6F;
namespace RPG::Client { class EmsMatCustomDictionay; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C57FB0)
#define RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C58100)
#define RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C58050)
#define RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C580B0)
#define RPG_CLIENT_MONOLIGHTRANDOMCOONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C58190)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLightRandomCoontrol_TypeDefinitionIndex = 67582;

	class MonoLightRandomCoontrol : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* currentLight; // 0x18
		::UnityEngine::Renderer* emissionRenderer; // 0x20
		::UnityEngine::GameObject* emissionObject; // 0x28
		::UnityEngine::AnimationCurve* randomPattern; // 0x30
		::System::Single emissionMaximumIntensity; // 0x38
		::System::Single emissionMaximumIntensityNight; // 0x3C
		::System::Single flashPhase; // 0x40
		::System::Boolean editorSaving; // 0x44
		::RPG::Client::EmsMatCustomDictionay* EmissionMaterialDic; // 0x48
		::Class_2_91130F3B3A18FE6F* _Behavior; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTRANDOMCOONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTRANDOMCOONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}

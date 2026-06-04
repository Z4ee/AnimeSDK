#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLEPASSFAKELIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB402DF0)
#define RPG_CLIENT_BATTLEPASSFAKELIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0xB402ED0)
#define RPG_CLIENT_BATTLEPASSFAKELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xB4030D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassFakeLight_TypeDefinitionIndex = 68146;

	class BattlePassFakeLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* LightConeSelect; // 0x18
		::System::Single FakeLightOn; // 0x20
		::System::Single FakelightStrength; // 0x24
		::System::Single Range; // 0x28
		::Il2CppArray<::UnityEngine::MeshRenderer*>* Field_5_4; // 0x30
		::UnityEngine::MaterialPropertyBlock* Field_5_5; // 0x38
		::UnityEngine::Vector4 Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFAKELIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFAKELIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSFAKELIGHT_UPDATE_OFFSET))(this);
		}
	};
}

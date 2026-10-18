#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD632980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD632730)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD632610)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_SWITCHTODIY_OFFSET UNITYSDK_OFFSET(0xD632880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_SWITCHTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xD632900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0xD632A80)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftEntranceCameraUpdater_TypeDefinitionIndex = 79951;

	class MechCraftEntranceCameraUpdater : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x18
		::UnityEngine::Transform* _AudioListener; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SwitchToDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_SWITCHTODIY_OFFSET))(this);
		}

		::System::Void SwitchToEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_SWITCHTOENTRANCE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCECAMERAUPDATER_LATEUPDATE_OFFSET))(this);
		}
	};
}

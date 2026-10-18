#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_SUBMAPICON__CTOR_OFFSET UNITYSDK_OFFSET(0xE37A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_SubMapIcon_TypeDefinitionIndex = 69064;

	class UIAdventureMinimap_SubMapIcon : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NodeMissionIcon; // 0x10
		::UnityEngine::GameObject* NodeBgTransportType; // 0x18
		::UnityEngine::UI::Image* MissionIcon; // 0x20
		::UnityEngine::GameObject* NodePlayerIcon; // 0x28
		::UnityEngine::UI::Image* ChestIcon; // 0x30
		::UnityEngine::UI::Image* MappingInfoIcon; // 0x38
		::UnityEngine::GameObject* NodeNormalType; // 0x40
		::UnityEngine::UI::Image* EntryIcon; // 0x48
		::UnityEngine::GameObject* NodeTransportIcon; // 0x50
		::UnityEngine::GameObject* NodeTransportType; // 0x58
		::UnityEngine::GameObject* NodeNaviIcons; // 0x60
		::UnityEngine::GameObject* NodeChestIcon; // 0x68
		::UnityEngine::UI::Image* TransportIcon; // 0x70
		::UnityEngine::GameObject* NodeRoot; // 0x78
		::UnityEngine::GameObject* NodeBgNormalType; // 0x80
		::UnityEngine::GameObject* NodeMappingInfoIcon; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_SUBMAPICON__CTOR_OFFSET))(this);
		}
	};
}

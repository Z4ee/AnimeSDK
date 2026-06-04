#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_SUBMAPICON__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2A250)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_SubMapIcon_TypeDefinitionIndex = 64589;

	class UIAdventureMinimap_SubMapIcon : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NodeTransportIcon; // 0x10
		::UnityEngine::GameObject* NodeMissionIcon; // 0x18
		::UnityEngine::GameObject* NodeBgTransportType; // 0x20
		::UnityEngine::GameObject* NodeNormalType; // 0x28
		::UnityEngine::UI::Image* MissionIcon; // 0x30
		::UnityEngine::GameObject* NodeMappingInfoIcon; // 0x38
		::UnityEngine::GameObject* NodeTransportType; // 0x40
		::UnityEngine::UI::Image* EntryIcon; // 0x48
		::UnityEngine::GameObject* NodeNaviIcons; // 0x50
		::UnityEngine::GameObject* NodeBgNormalType; // 0x58
		::UnityEngine::UI::Image* TransportIcon; // 0x60
		::UnityEngine::GameObject* NodeRoot; // 0x68
		::UnityEngine::GameObject* NodePlayerIcon; // 0x70
		::UnityEngine::UI::Image* MappingInfoIcon; // 0x78
		::UnityEngine::UI::Image* ChestIcon; // 0x80
		::UnityEngine::GameObject* NodeChestIcon; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_SUBMAPICON__CTOR_OFFSET))(this);
		}
	};
}

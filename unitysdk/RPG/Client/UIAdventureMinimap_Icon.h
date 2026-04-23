#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIAdventureMinimap_IconLayerInfo; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_ICON__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C9660)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_Icon_TypeDefinitionIndex = 63667;

	class UIAdventureMinimap_Icon : public ::System::Object
	{
	public:
		::UnityEngine::Animation* MissionEffectAnimation; // 0x10
		::UnityEngine::Animation* MappingInfoEffectAnimation; // 0x18
		::UnityEngine::UI::Image* Image; // 0x20
		::RPG::Client::UIAdventureMinimap_IconLayerInfo* IconLayer; // 0x28
		::System::UInt32 IconImageID; // 0x30
		::RPG::GameCore::MiniMapIconOrientationType OrientationType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICON__CTOR_OFFSET))(this);
		}
	};
}

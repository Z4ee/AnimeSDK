#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIAdventureMinimap_IconLayerInfo; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_ICON__CTOR_OFFSET UNITYSDK_OFFSET(0xCB29F60)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_Icon_TypeDefinitionIndex = 64588;

	class UIAdventureMinimap_Icon : public ::System::Object
	{
	public:
		::RPG::Client::UIAdventureMinimap_IconLayerInfo* IconLayer; // 0x10
		::UnityEngine::UI::Image* Image; // 0x18
		::UnityEngine::Animation* MissionEffectAnimation; // 0x20
		::UnityEngine::Animation* MappingInfoEffectAnimation; // 0x28
		::RPG::GameCore::MiniMapIconOrientationType OrientationType; // 0x30
		::System::UInt32 IconImageID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICON__CTOR_OFFSET))(this);
		}
	};
}

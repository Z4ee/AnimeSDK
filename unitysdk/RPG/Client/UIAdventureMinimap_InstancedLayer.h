#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MiniMapLayer; }
namespace RPG::Client { class UIAdventureMinimap_InstancedZone; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB265A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_InstancedLayer_TypeDefinitionIndex = 64586;

	class UIAdventureMinimap_InstancedLayer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_InstancedZone*>* InstancedZones; // 0x10
		::RPG::Client::MiniMapLayer* Layer; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* InstancedZoneIDs; // 0x20
		::UnityEngine::RectTransform* LayerTransform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDLAYER__CTOR_OFFSET))(this);
		}
	};
}

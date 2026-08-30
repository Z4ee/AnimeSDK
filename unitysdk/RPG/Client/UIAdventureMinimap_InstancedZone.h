#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MiniMapClipper;
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF5210)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_InstancedZone_TypeDefinitionIndex = 69024;

	class UIAdventureMinimap_InstancedZone : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ZoneTransform; // 0x10
		::MiniMapClipper* Clipper; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDZONE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MiniMapClipper;
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x170079A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_InstancedZone_TypeDefinitionIndex = 65985;

	class UIAdventureMinimap_InstancedZone : public ::System::Object
	{
	public:
		::MiniMapClipper* Clipper; // 0x10
		::UnityEngine::RectTransform* ZoneTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDZONE__CTOR_OFFSET))(this);
		}
	};
}

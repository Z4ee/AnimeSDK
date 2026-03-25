#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MiniMapZone; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_SECTIONHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x852E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_SectionHandle_TypeDefinitionIndex = 56428;

	struct alignas(8) UIAdventureMinimap_SectionHandle
	{
		::RPG::Client::MiniMapZone* Zone; // 0x10
		::System::Int32 SectionIdx; // 0x18

		::System::Void _ctor(::RPG::Client::MiniMapZone* zone, ::System::Int32 sectionIdx)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_SECTIONHANDLE__CTOR_OFFSET))(this, zone, sectionIdx);
		}
	};
}

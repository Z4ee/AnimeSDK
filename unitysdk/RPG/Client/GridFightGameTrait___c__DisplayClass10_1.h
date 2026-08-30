#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightNPC; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD1E8640)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS10_1__ONMEMBERSCHANGEDEVENTHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0xD1EC710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass10_1_TypeDefinitionIndex = 65472;

	class GridFightGameTrait___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameTrait* __4__this; // 0x10
		::RPG::Client::GridFightNPC* npc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnMembersChangedEventHandler_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS10_1__ONMEMBERSCHANGEDEVENTHANDLER_B__1_OFFSET))(this);
		}
	};
}

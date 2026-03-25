#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98D5160)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__1_OFFSET UNITYSDK_OFFSET(0x98D5170)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__2_OFFSET UNITYSDK_OFFSET(0x98D51A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_1_TypeDefinitionIndex = 53164;

	class GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__1(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__1_OFFSET))(this, role);
		}

		::System::Boolean __GetIsActive_b__2(::RPG::Client::GridFightNPC* npc)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__2_OFFSET))(this, npc);
		}
	};
}

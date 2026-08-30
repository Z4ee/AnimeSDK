#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD367620)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__3_OFFSET UNITYSDK_OFFSET(0xD367630)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__4_OFFSET UNITYSDK_OFFSET(0xD367660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_1_TypeDefinitionIndex = 65549;

	class GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__3(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__3_OFFSET))(this, a1);
		}

		::System::Boolean __GetIsActive_b__4(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_1___GETISACTIVE_B__4_OFFSET))(this, a1);
		}
	};
}

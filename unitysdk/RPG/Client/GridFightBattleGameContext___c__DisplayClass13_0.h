#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D5990)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS13_0__GETEQUIPSBYID_B__0_OFFSET UNITYSDK_OFFSET(0x97D87D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass13_0_TypeDefinitionIndex = 52300;

	class GridFightBattleGameContext___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsByID_b__0(::RPG::Client::GridFightEquipItemData* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS13_0__GETEQUIPSBYID_B__0_OFFSET))(this, equip);
		}
	};
}

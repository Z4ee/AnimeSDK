#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD173F90)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS5_0__GETROLEEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0xD177FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass5_0_TypeDefinitionIndex = 65027;

	class GridFightEquipInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleEquips_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS5_0__GETROLEEQUIPS_B__0_OFFSET))(this, a1);
		}
	};
}

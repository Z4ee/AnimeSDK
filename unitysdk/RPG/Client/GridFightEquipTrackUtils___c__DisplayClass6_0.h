#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD18AC70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__ISROLEEQUIPPEDWITH_B__0_OFFSET UNITYSDK_OFFSET(0xD18BE00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__ISROLEEQUIPPEDWITH_B__1_OFFSET UNITYSDK_OFFSET(0xD18BE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass6_0_TypeDefinitionIndex = 65409;

	class GridFightEquipTrackUtils___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipItemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleEquippedWith_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__ISROLEEQUIPPEDWITH_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _IsRoleEquippedWith_b__1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS6_0__ISROLEEQUIPPEDWITH_B__1_OFFSET))(this, a1);
		}
	};
}

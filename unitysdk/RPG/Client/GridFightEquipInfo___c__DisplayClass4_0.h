#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9800910)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS4_0__GETROLEEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x9804220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass4_0_TypeDefinitionIndex = 52754;

	class GridFightEquipInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleEquips_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS4_0__GETROLEEQUIPS_B__0_OFFSET))(this, x);
		}
	};
}

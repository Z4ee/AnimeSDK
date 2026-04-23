#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipInfo; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA484F50)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_0__GETEQUIPRECOMMENDROLEIDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xA485240)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass33_0_TypeDefinitionIndex = 59813;

	class GridFightEquipInfo___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* __4__this; // 0x10
		::Struct_2_0814C3CA012BD292 comparerContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEquipRecommendRoleIDList_b__0(::System::UInt32 roleIDA, ::System::UInt32 roleIDB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_0__GETEQUIPRECOMMENDROLEIDLIST_B__0_OFFSET))(this, roleIDA, roleIDB);
		}
	};
}

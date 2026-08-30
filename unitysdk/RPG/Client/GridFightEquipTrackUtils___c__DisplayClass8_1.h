#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrackUtils___c__DisplayClass8_0; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3B970)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__ISALLEQUIPGOT_B__0_OFFSET UNITYSDK_OFFSET(0x1BD3C0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass8_1_TypeDefinitionIndex = 65412;

	class GridFightEquipTrackUtils___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackUtils___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::System::UInt32 equipItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllEquipGot_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__ISALLEQUIPGOT_B__0_OFFSET))(this, a1);
		}
	};
}

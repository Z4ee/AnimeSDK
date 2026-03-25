#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrackUtils___c__DisplayClass7_0; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98119E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_1__ISALLEQUIPGOT_B__0_OFFSET UNITYSDK_OFFSET(0x9811E10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass7_1_TypeDefinitionIndex = 53076;

	class GridFightEquipTrackUtils___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackUtils___c__DisplayClass7_0* CS___8__locals1; // 0x10
		::System::UInt32 equipItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllEquipGot_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS7_1__ISALLEQUIPGOT_B__0_OFFSET))(this, x);
		}
	};
}

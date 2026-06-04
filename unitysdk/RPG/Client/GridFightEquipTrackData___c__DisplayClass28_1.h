#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2FC30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS28_1__ONBEFOREUSECONSUMABLEITEM_B__1_OFFSET UNITYSDK_OFFSET(0xBB32D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass28_1_TypeDefinitionIndex = 61089;

	class GridFightEquipTrackData___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* equipItemData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnBeforeUseConsumableItem_b__1(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS28_1__ONBEFOREUSECONSUMABLEITEM_B__1_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA329E70)
#define RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS15_0__FINDHAVINGUNITBYUNITID_B__0_OFFSET UNITYSDK_OFFSET(0xA32AF60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterDataItem___c__DisplayClass15_0_TypeDefinitionIndex = 54938;

	class RogueMagicScepterDataItem___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 unitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindHavingUnitByUnitID_b__0(::RPG::Client::RogueMagicUnitDataItem* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERDATAITEM___C__DISPLAYCLASS15_0__FINDHAVINGUNITBYUNITID_B__0_OFFSET))(this, data);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipInventoryDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDFA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS2_0__WEARSTRONGESTEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x9BE03F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipInventoryDisplayData___c__DisplayClass2_0_TypeDefinitionIndex = 69497;

	class SpEquipInventoryDisplayData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* strongestEquipList; // 0x10
		::RPG::Client::ActivityIdleLive::SpEquipInventoryDisplayData* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _WearStrongestEquips_b__0(::System::UInt16 msgId, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS2_0__WEARSTRONGESTEQUIPS_B__0_OFFSET))(this, msgId, rspObject);
		}
	};
}

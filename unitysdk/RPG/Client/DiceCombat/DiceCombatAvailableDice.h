#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_CREATEAVAILABLEDICELIST_OFFSET UNITYSDK_OFFSET(0x19306730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_AVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x12370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_DICEID_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_DICERARITY_OFFSET UNITYSDK_OFFSET(0x784260)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatAvailableDice_TypeDefinitionIndex = 75588;

	struct alignas(4) DiceCombatAvailableDice
	{
		::System::UInt32 _DiceID_k__BackingField; // 0x10
		::System::UInt32 _DiceRarity_k__BackingField; // 0x14
		::System::UInt32 _AvailableCount_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>* CreateAvailableDiceList(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_CREATEAVAILABLEDICELIST_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_DiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_DICEID_OFFSET))(this);
		}

		::System::UInt32 get_DiceRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_DICERARITY_OFFSET))(this);
		}

		::System::UInt32 get_AvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVAILABLEDICE_GET_AVAILABLECOUNT_OFFSET))(this);
		}
	};
}

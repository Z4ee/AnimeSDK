#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_GET_UID_OFFSET UNITYSDK_OFFSET(0xA139470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_GET_USEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xA139490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_SET_UID_OFFSET UNITYSDK_OFFSET(0xA139480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_SET_USEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xA1394A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA139460)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUseTacticsEventParam_TypeDefinitionIndex = 69922;

	class DiceCombatUseTacticsEventParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UsedCardIDs_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 uid, ::System::Collections::Generic::List_1<::System::UInt32>* usedCardIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM__CTOR_OFFSET))(this, uid, usedCardIDs);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_SET_UID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UsedCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_GET_USEDCARDIDS_OFFSET))(this);
		}

		::System::Void set_UsedCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUSETACTICSEVENTPARAM_SET_USEDCARDIDS_OFFSET))(this, value);
		}
	};
}

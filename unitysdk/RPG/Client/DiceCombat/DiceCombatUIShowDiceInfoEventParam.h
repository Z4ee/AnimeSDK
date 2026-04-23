#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_INFOS_OFFSET UNITYSDK_OFFSET(0xA139420)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_ISHOLD_OFFSET UNITYSDK_OFFSET(0xA139400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_INFOS_OFFSET UNITYSDK_OFFSET(0xA139430)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_ISHOLD_OFFSET UNITYSDK_OFFSET(0xA139410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA1393F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIShowDiceInfoEventParam_TypeDefinitionIndex = 69924;

	class DiceCombatUIShowDiceInfoEventParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* _Infos_k__BackingField; // 0x10
		::System::Boolean _IsHold_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* infos, ::System::Boolean isHold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM__CTOR_OFFSET))(this, infos, isHold);
		}

		::System::Boolean get_IsHold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_ISHOLD_OFFSET))(this);
		}

		::System::Void set_IsHold(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_ISHOLD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* get_Infos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_INFOS_OFFSET))(this);
		}

		::System::Void set_Infos(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_INFOS_OFFSET))(this, value);
		}
	};
}

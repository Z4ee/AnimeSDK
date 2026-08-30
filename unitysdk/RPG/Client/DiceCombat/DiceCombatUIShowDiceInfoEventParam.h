#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_INFOS_OFFSET UNITYSDK_OFFSET(0x1C41DA30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_ISHOLD_OFFSET UNITYSDK_OFFSET(0x1C41DA10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_INFOS_OFFSET UNITYSDK_OFFSET(0x1C41DA40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_ISHOLD_OFFSET UNITYSDK_OFFSET(0x1C41DA20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41DA00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIShowDiceInfoEventParam_TypeDefinitionIndex = 75685;

	class DiceCombatUIShowDiceInfoEventParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* _Infos_k__BackingField; // 0x10
		::System::Boolean _IsHold_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsHold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_ISHOLD_OFFSET))(this);
		}

		::System::Void set_IsHold(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_ISHOLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* get_Infos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_GET_INFOS_OFFSET))(this);
		}

		::System::Void set_Infos(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUISHOWDICEINFOEVENTPARAM_SET_INFOS_OFFSET))(this, a1);
		}
	};
}

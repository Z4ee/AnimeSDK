#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1267;
class Class_0_16E4307DCC419505_311;
class Class_1_90698D4D8381BDC2;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1B491B70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4919F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__PAUSE_OFFSET UNITYSDK_OFFSET(0x1B491B00)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattlePauseButtonViewModel_TypeDefinitionIndex = 75990;

	class FateRinBattlePauseButtonViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_90698D4D8381BDC2* _BattleService; // 0x20
		::Class_0_16E4307DCC419505_311* _Pause_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_1267* _TutorialService; // 0x30

		::System::Void _ctor(::Class_1_90698D4D8381BDC2* a1, ::Class_0_16E4307DCC419505_1267* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90698D4D8381BDC2*, ::Class_0_16E4307DCC419505_1267*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__PAUSE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_Pause()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_GET_PAUSE_OFFSET))(this);
		}
	};
}

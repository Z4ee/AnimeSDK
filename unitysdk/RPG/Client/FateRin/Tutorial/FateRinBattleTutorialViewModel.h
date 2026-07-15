#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1267;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B26E06FC40F846CD;
class Class_1_F9FBCC956DFCF137_41;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_ADD_ONTUTORIALSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A398610)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3984E0)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1A398400)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1A398470)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A398390)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_REMOVE_ONTUTORIALSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A398670)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A398200)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__ONRULECHANGED_OFFSET UNITYSDK_OFFSET(0x1A3986D0)

namespace RPG::Client::FateRin::Tutorial
{
	inline static constexpr unsigned int FateRinBattleTutorialViewModel_TypeDefinitionIndex = 75763;

	class FateRinBattleTutorialViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* _HitTestService; // 0x20
		::Class_1_B26E06FC40F846CD* _BattleGameState; // 0x28
		::RPG::Client::FateRin::ViewModelEventHandler* OnTutorialStateChanged; // 0x30
		::Class_0_16E4307DCC419505_1267* _TutorialService; // 0x38

		::System::Void _ctor(::Class_0_16E4307DCC419505_1267* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_1_B26E06FC40F846CD* a3, ::Class_1_5F4D64A4B97E38F9* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1267*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_1_B26E06FC40F846CD*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Int32 get_EnemyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ENEMYINDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEnemyWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GETENEMYWORLDPOSITION_OFFSET))(this);
		}

		::System::Void add_OnTutorialStateChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_ADD_ONTUTORIALSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTutorialStateChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_REMOVE_ONTUTORIALSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnRuleChanged(::Class_1_F9FBCC956DFCF137_41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__ONRULECHANGED_OFFSET))(this, a1);
		}
	};
}

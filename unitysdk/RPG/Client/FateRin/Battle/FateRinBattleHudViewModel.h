#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1547;
class Class_0_16E4307DCC419505_1551;
class Class_0_16E4307DCC419505_1552;
class Class_0_16E4307DCC419505_1569;
class Class_0_16E4307DCC419505_1572;
class Class_0_16E4307DCC419505_1573;
class Class_0_16E4307DCC419505_1574;
class Class_0_16E4307DCC419505_1575;
class Class_0_16E4307DCC419505_397;
class Class_1_05C260DCF29BD133;
class Class_1_37D504FE763BE4ED;
class Class_1_3D46C5D064952E16_7;
class Class_1_43BD383C98B4C0C5_238;
class Class_1_43BD383C98B4C0C5_239;
class Class_1_43BD383C98B4C0C5_240;
class Class_1_5986F534F0638CE0_2;
class Class_1_75C3EB54EC08BE44_1;
class Class_1_85357ED0932DEBF1;
class Class_1_85357ED0932DEBF1_1;
class Class_1_90698D4D8381BDC2;
class Class_1_90889A2023AB884E_13;
class Class_1_B26E06FC40F846CD_1;
class Class_1_D501FC103C8A2714;
class Class_1_E79EE3670D2EC49A;
class Class_1_F248B058F5A06B98;
class Class_1_F9FBCC956DFCF137_45;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin { template <typename T> class ViewModelEventHandler_1; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudBossViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudActiveSkillButtonViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTurnDamageViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleFunctionAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudDeckTipViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudEndActionButtonViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudFriendAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudUltraTipViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleWaveInfoViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }
namespace RPG::Client::FateRin::Tutorial { class IFateRinBattleTutorialViewModel; }
namespace System { class Object; }
template <typename T> class Class_0_16E4307DCC419505_399;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xCED9310)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONISSHOWALLUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED90B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCED8F10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYSILENTEXIT_OFFSET UNITYSDK_OFFSET(0xCED8FD0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED9190)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCED9250)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED7C00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ACTIVESKILLBUTTONAREA_OFFSET UNITYSDK_OFFSET(0xCED8E30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_BOSSAREA_OFFSET UNITYSDK_OFFSET(0xCED8E10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_CARDAREA_OFFSET UNITYSDK_OFFSET(0xCED8DF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_DECKTIPAREA_OFFSET UNITYSDK_OFFSET(0xCED8EA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENDACTIONBUTTON_OFFSET UNITYSDK_OFFSET(0xCED8E50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENEMYAREA_OFFSET UNITYSDK_OFFSET(0xCED8E00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0xCED8DE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FUNCTIONAREA_OFFSET UNITYSDK_OFFSET(0xCED8E60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED8EB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0xCED8ED0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED8EF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TARGETAREA_OFFSET UNITYSDK_OFFSET(0xCED8E40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TOGGLEISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED8F00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TURNDAMAGEAREA_OFFSET UNITYSDK_OFFSET(0xCED8E20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TUTORIALAREA_OFFSET UNITYSDK_OFFSET(0xCED8E90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ULTRATIPAREA_OFFSET UNITYSDK_OFFSET(0xCED8E80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_WAVEINFOAREA_OFFSET UNITYSDK_OFFSET(0xCED8E70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xCED9370)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONISSHOWALLUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED9120)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCED8F70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYSILENTEXIT_OFFSET UNITYSDK_OFFSET(0xCED9040)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED91F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCED92B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED8EC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0xCED8EE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED7310)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED8C30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEANYKEYDOWNMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8BC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEAVATARULTRATRIGGERBTNSTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8B40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLECARDGAMESTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8570)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEENEMYISHUDSHOWALLUICHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED86D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEEXITHUDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED85F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEGAMESTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8500)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEHUDTASKSETVISIBLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8890)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEINITIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED89B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEPLAYERACTIONSTARTMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8A70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLESILENTEXITHUDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED8660)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONTOGGLEISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED8D00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__SETISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED87F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudViewModel_TypeDefinitionIndex = 80944;

	class FateRinBattleHudViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel* _TargetArea_k__BackingField; // 0x20
		::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* _TutorialArea_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_397* _NavigateToTeamDetail_k__BackingField; // 0x30
		::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel* _FriendArea_k__BackingField; // 0x38
		::RPG::Client::FateRin::ViewModelEventHandler* OnUltraTriggerPressStateChange; // 0x40
		::Class_1_B26E06FC40F846CD_1* _Model; // 0x48
		::RPG::Client::FateRin::ViewModelEventHandler* OnAnyKeyDown; // 0x50
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel* _BossArea_k__BackingField; // 0x58
		::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* OnShowAllExceptBossBarUIChange; // 0x60
		::Class_1_D501FC103C8A2714* _Messenger; // 0x68
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0x70
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* _CardArea_k__BackingField; // 0x78
		::Class_0_16E4307DCC419505_399<::System::Boolean>* _ToggleIsShowAllUI_k__BackingField; // 0x80
		::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel* _ActiveSkillButtonArea_k__BackingField; // 0x88
		::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel* _EndActionButton_k__BackingField; // 0x90
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x98
		::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel* _DeckTipArea_k__BackingField; // 0xA0
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel* _EnemyArea_k__BackingField; // 0xA8
		::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel* _WaveInfoArea_k__BackingField; // 0xB0
		::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel* _TurnDamageArea_k__BackingField; // 0xB8
		::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel* _FunctionArea_k__BackingField; // 0xC0
		::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* OnIsShowAllUIChange; // 0xC8
		::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel* _UltraTipArea_k__BackingField; // 0xD0
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifySilentExit; // 0xD8
		::System::Boolean _IsHudHiddenByTask; // 0xE0
		::System::Boolean _IsShowAllUI_k__BackingField; // 0xE1
		::System::Boolean _IsDisposed; // 0xE2
		::System::Boolean _IsUltraTriggerPressed_k__BackingField; // 0xE3
		::System::Boolean _HasPlayerActionStarted; // 0xE4
		::System::Boolean _IsBattleTimelinePlaying; // 0xE5

		::System::Void _ctor(::Class_1_B26E06FC40F846CD_1* a1, ::Class_0_16E4307DCC419505_1573* a2, ::Class_1_90698D4D8381BDC2* a3, ::Class_1_85357ED0932DEBF1* a4, ::Class_1_5986F534F0638CE0_2* a5, ::Class_1_F248B058F5A06B98* a6, ::Class_1_E79EE3670D2EC49A* a7, ::Class_0_16E4307DCC419505_1572* a8, ::Class_1_D501FC103C8A2714* a9, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a10, ::Class_0_16E4307DCC419505_1574* a11, ::Class_1_85357ED0932DEBF1_1* a12, ::Class_0_16E4307DCC419505_1569* a13, ::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* a14, ::Class_0_16E4307DCC419505_1551* a15, ::Class_0_16E4307DCC419505_1547* a16, ::Class_0_16E4307DCC419505_1575* a17, ::Class_0_16E4307DCC419505_1552* a18)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD_1*, ::Class_0_16E4307DCC419505_1573*, ::Class_1_90698D4D8381BDC2*, ::Class_1_85357ED0932DEBF1*, ::Class_1_5986F534F0638CE0_2*, ::Class_1_F248B058F5A06B98*, ::Class_1_E79EE3670D2EC49A*, ::Class_0_16E4307DCC419505_1572*, ::Class_1_D501FC103C8A2714*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1574*, ::Class_1_85357ED0932DEBF1_1*, ::Class_0_16E4307DCC419505_1569*, ::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel*, ::Class_0_16E4307DCC419505_1551*, ::Class_0_16E4307DCC419505_1547*, ::Class_0_16E4307DCC419505_1575*, ::Class_0_16E4307DCC419505_1552*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleGameStateModelChangeMessage(::Class_1_F9FBCC956DFCF137_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEGAMESTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCardGameStateModelChangeMessage(::Class_1_05C260DCF29BD133* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_05C260DCF29BD133*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLECARDGAMESTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleExitHudMessage(::Class_1_43BD383C98B4C0C5_239* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_239*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEEXITHUDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleSilentExitHudMessage(::Class_1_43BD383C98B4C0C5_240* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_240*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLESILENTEXITHUDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEnemyIsHudShowAllUIChangeMessage(::Class_1_75C3EB54EC08BE44_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_75C3EB54EC08BE44_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEENEMYISHUDSHOWALLUICHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleHudTaskSetVisibleMessage(::Class_1_37D504FE763BE4ED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_37D504FE763BE4ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEHUDTASKSETVISIBLEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleInitializeMessage(::Class_1_3D46C5D064952E16_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3D46C5D064952E16_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEINITIALIZEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattlePlayerActionStartMessage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEPLAYERACTIONSTARTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleAvatarUltraTriggerBtnStateChangeMessage(::Class_1_90889A2023AB884E_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEAVATARULTRATRIGGERBTNSTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleAnyKeyDownMessage(::Class_1_43BD383C98B4C0C5_238* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_238*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEANYKEYDOWNMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SetIsShowAllUI(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__SETISSHOWALLUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _NavigateToTeamDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Void _OnToggleIsShowAllUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONTOGGLEISSHOWALLUI_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel* get_FriendArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FRIENDAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* get_CardArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_CARDAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel* get_EnemyArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENEMYAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel* get_BossArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_BOSSAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel* get_TurnDamageArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TURNDAMAGEAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel* get_ActiveSkillButtonArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ACTIVESKILLBUTTONAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel* get_TargetArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TARGETAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel* get_EndActionButton()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENDACTIONBUTTON_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel* get_FunctionArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FUNCTIONAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel* get_WaveInfoArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_WAVEINFOAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel* get_UltraTipArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ULTRATIPAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* get_TutorialArea()
		{
			return ((::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TUTORIALAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel* get_DeckTipArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_DECKTIPAREA_OFFSET))(this);
		}

		::System::Boolean get_IsShowAllUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISSHOWALLUI_OFFSET))(this);
		}

		::System::Void set_IsShowAllUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISSHOWALLUI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUltraTriggerPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISULTRATRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_IsUltraTriggerPressed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISULTRATRIGGERPRESSED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_397* get_NavigateToTeamDetail()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_399<::System::Boolean>* get_ToggleIsShowAllUI()
		{
			return ((::Class_0_16E4307DCC419505_399<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TOGGLEISSHOWALLUI_OFFSET))(this);
		}

		::System::Void add_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnNotifySilentExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYSILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifySilentExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYSILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnIsShowAllUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONISSHOWALLUICHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsShowAllUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONISSHOWALLUICHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnShowAllExceptBossBarUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowAllExceptBossBarUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnUltraTriggerPressStateChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnUltraTriggerPressStateChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnAnyKeyDown(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONANYKEYDOWN_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnyKeyDown(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONANYKEYDOWN_OFFSET))(this, a1);
		}
	};
}

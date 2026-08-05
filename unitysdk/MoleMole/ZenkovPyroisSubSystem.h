#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_348AABC0BC1B0E56.h"
#include "unitysdk/Enum_3_92D8D5F818B7334A_2.h"
#include "unitysdk/Enum_3_B83779F1BD3BEA5B.h"
#include "unitysdk/Enum_3_DB5064629A34D2C9.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ZenkovPyroisSubSystem_OverrideSwitchOutExQTEData.h"
#include "unitysdk/MoleMole/ZenkovPyroisSubSystem_OverrideSwitchOutQTEData.h"

class Class_1_BBDCDD7F93208E26;
class Class_3_816015CAFD8353F7;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_CHECKINSTANTSWITCHOUTTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0x1410DD90)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_CLEARFORCETOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x14107A20)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_DOSETBLINKHOLDMODE_OFFSET UNITYSDK_OFFSET(0x141109E0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ENTERBLINKHOLDMODECAMERAV2_OFFSET UNITYSDK_OFFSET(0x14107380)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_EXITBLINKHOLDMODECAMERAV2_OFFSET UNITYSDK_OFFSET(0x14107780)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_FIRETELEPORTSELECTIONEVENT_OFFSET UNITYSDK_OFFSET(0x14110820)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_FIREZENKOVPYROISEVT_OFFSET UNITYSDK_OFFSET(0x1410B2D0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETCURUSELIMIT_OFFSET UNITYSDK_OFFSET(0x1410C760)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPERFECTBLINKAIDTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1410C630)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPYROISAVATAR_OFFSET UNITYSDK_OFFSET(0x1410C6C0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPYROISITEMRARITY_OFFSET UNITYSDK_OFFSET(0x1410C720)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET_ISINBLINKHOLDMODE_OFFSET UNITYSDK_OFFSET(0x14108370)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x14108300)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x14108290)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_HASAIMMODELOCKEDTARGET_OFFSET UNITYSDK_OFFSET(0x141081B0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_INITUSELIMIT_OFFSET UNITYSDK_OFFSET(0x14108B70)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISBLINKMODECONTAINVALIDTARGET_OFFSET UNITYSDK_OFFSET(0x14110630)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINBLINKHOLDENTERPROTECTION_OFFSET UNITYSDK_OFFSET(0x1410A620)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0x1410B270)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINPYROISBLINKAIDMODE_OFFSET UNITYSDK_OFFSET(0x1410B4E0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISSHOWBLINKAIDQTEHINT_OFFSET UNITYSDK_OFFSET(0x141104E0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISSHOWEXECUTEQTEHINT_OFFSET UNITYSDK_OFFSET(0x14110350)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISUSELIMITENOUGH_OFFSET UNITYSDK_OFFSET(0x1410C7A0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1410AC90)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1410C880)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISINSTAGE_OFFSET UNITYSDK_OFFSET(0x1410C670)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_MODIFYCURUSELIMIT_OFFSET UNITYSDK_OFFSET(0x1410C810)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14108380)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONBIGSCENEDUNGEONZENKOVUPDATE_OFFSET UNITYSDK_OFFSET(0x14110110)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14108D70)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1410A2F0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET UNITYSDK_OFFSET(0x1410FB10)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1410A880)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1410A550)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONUPBYPLAYER_OFFSET UNITYSDK_OFFSET(0x1410A590)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1410A830)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14109C70)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONZENKOVPYROISBLINKHOLDINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x141102C0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONZENKOVPYROISSKILLUPDATE_OFFSET UNITYSDK_OFFSET(0x14110160)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0x1410F930)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISSWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x1410F6C0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISSWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x1410F430)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0x1410F830)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISSWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x1410F5A0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISSWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x1410F310)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHBLINKHOLDMODECONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x1410A1C0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHPERFECTBLINKAIDTARGET_OFFSET UNITYSDK_OFFSET(0x1410B6B0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHTOTALUSELIMIT_OFFSET UNITYSDK_OFFSET(0x1410FC20)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETBLINKAIDQTESHOW_OFFSET UNITYSDK_OFFSET(0x14109A20)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETBLINKHOLDMODE_OFFSET UNITYSDK_OFFSET(0x14109BA0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETCURUSELIMIT_OFFSET UNITYSDK_OFFSET(0x1410C960)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETEXECUTEQTESHOW_OFFSET UNITYSDK_OFFSET(0x141098A0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x141093A0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SHOWCOMMONSKILLBUTTONHIGHPRIORITY_OFFSET UNITYSDK_OFFSET(0x1410E290)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x14108BC0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHINZENKOVPYROISBYSWITCHBTN_OFFSET UNITYSDK_OFFSET(0x1410CB40)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHINZENKOVPYROIS_OFFSET UNITYSDK_OFFSET(0x1410D140)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHOUTZENKOVPYROIS_OFFSET UNITYSDK_OFFSET(0x1410E420)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SYNCAIMTARGETTOTELEPORTSELECTION_OFFSET UNITYSDK_OFFSET(0x14107D30)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKBLINKAIDQTESHOW_OFFSET UNITYSDK_OFFSET(0x1410A4F0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKBLINKHOLDMODETIMERS_OFFSET UNITYSDK_OFFSET(0x1410A120)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKEXECUTEQTESHOW_OFFSET UNITYSDK_OFFSET(0x1410A480)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYGETPYROISAVATAR_OFFSET UNITYSDK_OFFSET(0x14108860)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYSYNCPYROISPOSROTTOLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x14109D60)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYTRIGGERBLINK_OFFSET UNITYSDK_OFFSET(0x1410A680)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14111070)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14111250)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x141112E0)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14111370)
#define MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14111410)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovPyroisSubSystem_TypeDefinitionIndex = 77300;

	class ZenkovPyroisSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZenkovPyroisSubSystem*>
	{
	public:
		// static const ::System::String* STATISTIC_BLINK_HOLD_TAG; // 0x0
		// static const ::System::String* STATISTIC_BLINK_TRIGGER_TAG; // 0x0
		// static const ::System::String* STATISTIC_PERFECT_BLINK_AID_TAG; // 0x0
		// static const ::System::String* STATISTIC_EXECUTE_DIRECT_TAG; // 0x0
		// static const ::System::String* STATISTIC_EXECUTE_FROM_BLINK_QTE_01_TAG; // 0x0
		// static const ::System::String* STATISTIC_EXECUTE_FROM_BLINK_QTE_02_TAG; // 0x0
		// static const ::System::String* STATISTIC_EXECUTE_FROM_PARRY_QTE_01_TAG; // 0x0
		// static const ::System::String* STATISTIC_ULTRA_PERFECT_PARRY_TAG; // 0x0
		// static const ::System::String* STATISTIC_ULTRA_PERFECT_EVADE_TAG; // 0x0
		// static const ::System::String* STATISTIC_ULTRA_PERFECT_ASSAULT_TAG; // 0x0
		// static const ::System::String* CUR_USE_LIMIT_KEY; // 0x0
		// static const ::System::Int32 PYROIS_COMMON_SKILL_PRIORITY = 0x50; // 0x0
		// static const ::System::Int32 PYROIS_COMMON_SKILL_PRIORITY_HIGH = 0x1869F; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _perfectBlinkAidTargetList; // 0x10
		::MoleMole::EntityHandle _pyroisEntity; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _executeModeTags; // 0x28
		::MoleMole::EntityHandle _blinkHoldCameraTriggerEntity; // 0x30
		::MoleMole::EntityHandle _lastBlinkAimForceTopEntity; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::ZenkovPyroisSubSystem_OverrideSwitchOutExQTEData>* _overrideSwitchOutExQTEDatas; // 0x50
		::MoleMole::EntityHandle _lastLocalAvatar; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::ZenkovPyroisSubSystem_OverrideSwitchOutQTEData>* _overrideSwitchOutQTEDatas; // 0x68
		::System::Int32 _curUseLimit; // 0x70
		::System::Int32 _pyroisItemRarity; // 0x74
		::System::Boolean _pendingTryTriggerBlink; // 0x78
		::System::Boolean _isInBlinkHoldMode; // 0x79
		::System::Boolean _pendingBlinkHoldExit; // 0x7A
		::System::Boolean _isLastBlinkAidQTEShow; // 0x7B
		::System::Int32 _pyroisItemID; // 0x7C
		::System::Int32 _maxUseLimit; // 0x80
		::Enum_3_92D8D5F818B7334A_2 _curState; // 0x84
		::System::Boolean _isLastExecuteQTEShow; // 0x88
		::System::Boolean _isShowCommonSkillButton; // 0x89
		::System::Single _blinkHoldModeEnterProtectionTimer; // 0x8C
		::System::Single _blinkHoldModeEnterCDTimer; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void EnterBlinkHoldModeCameraV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ENTERBLINKHOLDMODECAMERAV2_OFFSET))(this);
		}

		::System::Void ExitBlinkHoldModeCameraV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_EXITBLINKHOLDMODECAMERAV2_OFFSET))(this);
		}

		::System::Void SyncAimTargetToTeleportSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SYNCAIMTARGETTOTELEPORTSELECTION_OFFSET))(this);
		}

		::System::Void ClearForceTopPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_CLEARFORCETOPPRIORITY_OFFSET))(this);
		}

		::System::Boolean HasAimModeLockedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_HASAIMMODELOCKEDTARGET_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET))(this);
		}

		::System::Boolean get_IsInBlinkHoldMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GET_ISINBLINKHOLDMODE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnSkillButtonDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET))(this);
		}

		::System::Void OnSkillButtonUpByPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONUPBYPLAYER_OFFSET))(this);
		}

		::System::Void OnSkillButtonUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONUP_OFFSET))(this);
		}

		::System::Void OnSkillButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetPerfectBlinkAidTargetList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPERFECTBLINKAIDTARGETLIST_OFFSET))(this);
		}

		::System::Boolean IsZenkovPyroisInStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISINSTAGE_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetPyroisAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPYROISAVATAR_OFFSET))(this);
		}

		::System::Int32 GetPyroisItemRarity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETPYROISITEMRARITY_OFFSET))(this);
		}

		::System::Int32 GetCurUseLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_GETCURUSELIMIT_OFFSET))(this);
		}

		::System::Boolean IsUseLimitEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISUSELIMITENOUGH_OFFSET))(this);
		}

		::System::Void ModifyCurUseLimit(::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_MODIFYCURUSELIMIT_OFFSET))(this, amount);
		}

		::System::Boolean IsZenkovPyroisEntityReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISENTITYREADY_OFFSET))(this);
		}

		::System::Boolean IsZenkovPyroisAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISZENKOVPYROISAVAILABLE_OFFSET))(this);
		}

		::System::Void SwitchInZenkovPyroisBySwitchBtn(::Class_3_816015CAFD8353F7* switchAvatarComponent, ::Class_1_BBDCDD7F93208E26* curAidAttackConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7*, ::Class_1_BBDCDD7F93208E26*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHINZENKOVPYROISBYSWITCHBTN_OFFSET))(this, switchAvatarComponent, curAidAttackConfig);
		}

		::System::Void SwitchInZenkovPyrois(::System::Int32 switchInIndex, ::System::Boolean isInstantSwitchOut, ::System::Int32 switchOutIndex, ::System::Boolean isSwitchInKeepPosRot, ::MoleMole::Config::ConfigPosRot* switchInPosRot, ::System::String* lockTargetID, ::Enum_3_B83779F1BD3BEA5B switchInType, ::System::Single overrideFadeInTime, ::System::Single overrideFadeOutTime, ::System::Boolean forceUseLineSelectSwitchInPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::Enum_3_B83779F1BD3BEA5B, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHINZENKOVPYROIS_OFFSET))(this, switchInIndex, isInstantSwitchOut, switchOutIndex, isSwitchInKeepPosRot, switchInPosRot, lockTargetID, switchInType, overrideFadeInTime, overrideFadeOutTime, forceUseLineSelectSwitchInPos);
		}

		::System::Void SwitchOutZenkovPyrois(::System::Boolean isAttackSwitchIn, ::System::Boolean isInstantSwitchOut, ::System::Boolean isSwitchInKeepPosRot, ::System::Int32 customSwitchInIndex, ::MoleMole::Config::ConfigPosRot* customSwitchInPosRot, ::System::String* customLockTargetID, ::System::Single overrideFadeInTime, ::System::Single overrideFadeOutTime, ::System::String* checkSwitchInPosValidCustomTargetKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SWITCHOUTZENKOVPYROIS_OFFSET))(this, isAttackSwitchIn, isInstantSwitchOut, isSwitchInKeepPosRot, customSwitchInIndex, customSwitchInPosRot, customLockTargetID, overrideFadeInTime, overrideFadeOutTime, checkSwitchInPosValidCustomTargetKey);
		}

		::System::Void PushZenkovPyroisSwitchOutQTE(::System::String* tag, ::System::Boolean isQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISSWITCHOUTQTE_OFFSET))(this, tag, isQTE);
		}

		::System::Void PopZenkovPyroisSwitchOutQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISSWITCHOUTQTE_OFFSET))(this, tag);
		}

		::System::Void PushZenkovPyroisSwitchOutExQTE(::System::String* tag, ::System::Boolean isExQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISSWITCHOUTEXQTE_OFFSET))(this, tag, isExQTE);
		}

		::System::Void PopZenkovPyroisSwitchOutExQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISSWITCHOUTEXQTE_OFFSET))(this, tag);
		}

		::System::Boolean IsInExecuteMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINEXECUTEMODE_OFFSET))(this);
		}

		::System::Boolean IsInPyroisBlinkAidMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINPYROISBLINKAIDMODE_OFFSET))(this);
		}

		::System::Void PushZenkovPyroisExecuteMode(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_PUSHZENKOVPYROISEXECUTEMODE_OFFSET))(this, tag);
		}

		::System::Void PopZenkovPyroisExecuteMode(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_POPZENKOVPYROISEXECUTEMODE_OFFSET))(this, tag);
		}

		::System::Void CheckInstantSwitchOutTeamAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_CHECKINSTANTSWITCHOUTTEAMAVATARS_OFFSET))(this);
		}

		::System::Void OnPreBigSceneTeleportByReload(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET))(this, args);
		}

		::System::Void ShowCommonSkillButton(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET))(this, isShow);
		}

		::System::Void ShowCommonSkillButtonHighPriority(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SHOWCOMMONSKILLBUTTONHIGHPRIORITY_OFFSET))(this, isShow);
		}

		::System::Void TryGetPyroisAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYGETPYROISAVATAR_OFFSET))(this);
		}

		::System::Void InitUseLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_INITUSELIMIT_OFFSET))(this);
		}

		::System::Void OnBigSceneDungeonZenkovUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONBIGSCENEDUNGEONZENKOVUPDATE_OFFSET))(this, args);
		}

		::System::Void RefreshTotalUseLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHTOTALUSELIMIT_OFFSET))(this);
		}

		::System::Boolean SetCurUseLimit(::System::Int32 curUseLimit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETCURUSELIMIT_OFFSET))(this, curUseLimit);
		}

		::System::Void OnZenkovPyroisSkillUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONZENKOVPYROISSKILLUPDATE_OFFSET))(this, args);
		}

		::System::Void OnZenkovPyroisBlinkHoldInputTypeChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ONZENKOVPYROISBLINKHOLDINPUTTYPECHANGED_OFFSET))(this, args);
		}

		::System::Void SetInputEnableState(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETINPUTENABLESTATE_OFFSET))(this, isEnable);
		}

		::System::Void FireZenkovPyroisEvt(::Enum_3_348AABC0BC1B0E56 notifyType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_348AABC0BC1B0E56))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_FIREZENKOVPYROISEVT_OFFSET))(this, notifyType);
		}

		::System::Void TrySyncPyroisPosRotToLocalAvatar(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYSYNCPYROISPOSROTTOLOCALAVATAR_OFFSET))(this, force);
		}

		::System::Boolean IsShowExecuteQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISSHOWEXECUTEQTEHINT_OFFSET))(this);
		}

		::System::Void TickExecuteQTEShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKEXECUTEQTESHOW_OFFSET))(this);
		}

		::System::Void SetExecuteQTEShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETEXECUTEQTESHOW_OFFSET))(this, isShow);
		}

		::System::Boolean IsShowBlinkAidQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISSHOWBLINKAIDQTEHINT_OFFSET))(this);
		}

		::System::Void TickBlinkAidQTEShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKBLINKAIDQTESHOW_OFFSET))(this);
		}

		::System::Void SetBlinkAidQTEShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETBLINKAIDQTESHOW_OFFSET))(this, isShow);
		}

		::System::Boolean TryTriggerBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TRYTRIGGERBLINK_OFFSET))(this);
		}

		::System::Void TickBlinkHoldModeTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_TICKBLINKHOLDMODETIMERS_OFFSET))(this);
		}

		::System::Boolean IsInBlinkHoldEnterProtection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISINBLINKHOLDENTERPROTECTION_OFFSET))(this);
		}

		::System::Void SetBlinkHoldMode(::System::Boolean isHold, ::System::Boolean forceIgnoreCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_SETBLINKHOLDMODE_OFFSET))(this, isHold, forceIgnoreCD);
		}

		::System::Void DoSetBlinkHoldMode(::System::Boolean isHold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_DOSETBLINKHOLDMODE_OFFSET))(this, isHold);
		}

		::System::Void RefreshBlinkHoldModeControlState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHBLINKHOLDMODECONTROLSTATE_OFFSET))(this);
		}

		::System::Boolean IsBlinkModeContainValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_ISBLINKMODECONTAINVALIDTARGET_OFFSET))(this);
		}

		::System::Void FireTeleportSelectionEvent(::Enum_3_DB5064629A34D2C9 triggerType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB5064629A34D2C9))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_FIRETELEPORTSELECTIONEVENT_OFFSET))(this, triggerType);
		}

		::MoleMole::Battle::Entity* RefreshPerfectBlinkAidTarget(::Class_3_816015CAFD8353F7* switchAvatarComponent)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Class_3_816015CAFD8353F7*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM_REFRESHPERFECTBLINKAIDTARGET_OFFSET))(this, switchAvatarComponent);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4AE0715386866DD6.h"
#include "unitysdk/Enum_3_59737315FF4FFC59.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_C2ED712377151494.h"

class Class_0_16E4307DCC419505_29;
class Class_3_416D54600666EBB5;
class Class_3_816015CAFD8353F7;
class Class_3_9F2FCC0519F3E06F_58;
class Class_3_FDF004B094F6A736_2;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET UNITYSDK_OFFSET(0x1162C040)
#define MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x1162A990)
#define MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x1162A840)
#define MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x11628EC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x11627390)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET UNITYSDK_OFFSET(0x1162A1C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET UNITYSDK_OFFSET(0x1162A420)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET UNITYSDK_OFFSET(0x1162A460)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x1162A230)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET UNITYSDK_OFFSET(0x1162A130)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET UNITYSDK_OFFSET(0x1162A0A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x11629F30)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET UNITYSDK_OFFSET(0x11628650)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET UNITYSDK_OFFSET(0x116284C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET UNITYSDK_OFFSET(0x116286E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET UNITYSDK_OFFSET(0x116298F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x116278D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET UNITYSDK_OFFSET(0x1162AC60)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET UNITYSDK_OFFSET(0x1162A9F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x11627200)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET UNITYSDK_OFFSET(0x11626EE0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET UNITYSDK_OFFSET(0x1162ABD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x11626E90)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x11626E60)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET UNITYSDK_OFFSET(0x11626EC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x11626ED0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x11626EA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET UNITYSDK_OFFSET(0x11626E70)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET UNITYSDK_OFFSET(0x11626E80)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET UNITYSDK_OFFSET(0x11626EB0)
#define MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x11628BD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET UNITYSDK_OFFSET(0x11626D70)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET UNITYSDK_OFFSET(0x1162BE50)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET UNITYSDK_OFFSET(0x1162BDF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11626900)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11626290)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x11629100)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x11626170)
#define MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET UNITYSDK_OFFSET(0x116289B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x11627E60)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1162B320)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1162B2D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET UNITYSDK_OFFSET(0x1162C090)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1162B860)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x11627CE0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x11627270)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x11629490)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET UNITYSDK_OFFSET(0x1162AF30)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1162BEB0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1162BF50)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1162BFE0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1162BBF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET UNITYSDK_OFFSET(0x11627680)
#define MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x11629D00)
#define MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET UNITYSDK_OFFSET(0x11628B80)
#define MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x1162B6C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x11628140)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x11629CA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1162BCA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET UNITYSDK_OFFSET(0x1162BD50)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET UNITYSDK_OFFSET(0x116267C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x11629250)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x116265E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET UNITYSDK_OFFSET(0x11629430)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET UNITYSDK_OFFSET(0x11626DC0)
#define MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1162C0F0)
#define MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET UNITYSDK_OFFSET(0x1162C110)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1162C220)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1162C2B0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1162C340)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem_TypeDefinitionIndex = 46792;

	class LinkZoneSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LinkZoneSubSystem*>
	{
	public:
		::Class_3_816015CAFD8353F7* _switchAvatarComponent; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _linkZonePerformedPeerIDList; // 0x18
		::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* _teamExQTEShowInfoList; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _cachedTeamExQTEPerformedPeerIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _texturePathDict; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x38
		::Class_3_416D54600666EBB5* MessageLinkZone; // 0x40
		::System::Boolean _isForceDisableLinkZoneUlt; // 0x48
		::System::Boolean _lastShowRelayAttackQTEHint; // 0x49
		::System::Boolean _lastShowLinkZoneUltQTEHint; // 0x4A
		::System::Boolean _isCoopSettlementEnd; // 0x4B
		::System::Int32 _curLinkZoneEnergy; // 0x4C
		::System::Single _longPressTimer; // 0x50
		::Enum_3_4AE0715386866DD6 _cachedTeamExQTEType; // 0x54
		::System::Int32 _cachedTeamExQTEPosIndex; // 0x58
		::System::Int32 _cachedTeamExQTELastPerformPeerID; // 0x5C
		::System::UInt32 _curStateStartTime; // 0x60
		::System::Boolean _isLinkZoneInfoAreaUIShow; // 0x64
		::System::Boolean _isLocalStartLinkZoneAvatarUlt; // 0x65
		::System::Boolean _isShowCommonSkillButton; // 0x66
		::System::Boolean _isCountDownTimerBarUIShow; // 0x67
		::System::Int32 _cachedTeamExQTECasterPeerID; // 0x68
		::System::UInt32 _linkZoneEnergyDecayTime; // 0x6C
		::System::Int32 _maxLinkZoneEnergy; // 0x70
		::Enum_3_A35B38E5F9115A76_1 _curLinkZoneState; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowRelayAttackQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowRelayAttackQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsRelayAttackAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerRelayAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76_1 get_CurLinkZoneState()
		{
			return ((::Enum_3_A35B38E5F9115A76_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET))(this);
		}

		::System::Int32 get_TeamExQTELastPerformPeerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_TeamExQTEPerformedPeerIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET))(this);
		}

		::System::Int32 get_CurLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET))(this);
		}

		::System::Int32 get_MaxLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* get_TeamExQTEShowInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET))(this);
		}

		::System::Boolean get_IsCountDownTimerBarUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET))(this);
		}

		::System::Boolean get_IsLinkZoneInfoAreaUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Boolean GetLinkZoneStateDecayTime(::System::UInt32& remainingTime, ::System::UInt32& totalTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET))(this, remainingTime, totalTime);
		}

		::System::Single GetLinkZoneEnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET))(this);
		}

		::System::Void OnMpLinkZoneStateEnergyScNotify(::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void OnMpLinkZonePerformedPlayerScNotify(::Class_3_9F2FCC0519F3E06F_58* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_58*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void ModifyLinkZoneEnergy(::MoleMole::Battle::Entity* entity, ::System::Int32 deltaEnergy, ::System::Int32 operateType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET))(this, entity, deltaEnergy, operateType);
		}

		::System::Void StartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void FinishLinkZoneAvatarUltPerform(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneAvatarUltAttack(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneComboUlt(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET))(this, entity);
		}

		::UnityEngine::Texture2D* LoadTeamExQTEAvatarTexture(::System::String* texturePath)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET))(this, texturePath);
		}

		::System::Void SetForceDisableLinkZoneUlt(::System::Boolean isForceDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET))(this, isForceDisable);
		}

		::System::Void InitLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Void DestroyLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Boolean IsShowLinkZoneUltQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowLinkZoneUltQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsInLinkZonePerformState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneUltAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerLinkZoneUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET))(this);
		}

		::System::Void OnRealStartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void TickLinkZoneState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET))(this, deltaTime);
		}

		::System::Void EnterLinkZoneState(::Enum_3_A35B38E5F9115A76_1 linkZoneState, ::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_1, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET))(this, linkZoneState, notify);
		}

		::System::Void EnterStateOutZoneNotEnoughEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET))(this);
		}

		::System::Void EnterStateOutZoneEnergyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET))(this);
		}

		::System::Void ParseChangeEnergyParam(::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET))(this, notify);
		}

		::System::Void EnterStateInZonePerform(::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET))(this, notify);
		}

		::System::Void CreateMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void CloseMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void EnterStateInZoneWaiting(::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET))(this, notify);
		}

		::System::Void ExitStateInZoneWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUltPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUlt(::Class_3_FDF004B094F6A736_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FDF004B094F6A736_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET))(this, notify);
		}

		static ::System::UInt32 GetTeamIndexByPeerID(::System::Int32 peerID)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET))(peerID);
		}

		static ::MoleMole::Battle::Entity* GetAvatarEntityByPeerID(::System::Int32 peerID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET))(peerID);
		}

		::Struct_2_C2ED712377151494 GetAvatarShowInfoByPeerID(::System::Int32 peerID)
		{
			return ((::Struct_2_C2ED712377151494(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET))(this, peerID);
		}

		::System::Void FireLinkZoneStateChangedEvent(::Enum_3_A35B38E5F9115A76_1 state, ::Enum_3_4AE0715386866DD6 teamExQTEType, ::System::Int32 casterPeerID, ::Enum_3_59737315FF4FFC59 subState, ::System::Int32 teamExQTEPosIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_1, ::Enum_3_4AE0715386866DD6, ::System::Int32, ::Enum_3_59737315FF4FFC59, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET))(this, state, teamExQTEType, casterPeerID, subState, teamExQTEPosIndex);
		}

		::System::Void FireLinkZoneAvatarUltEvent(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET))(this, isStart);
		}

		::System::Void OnSingleCharacterExitUltPerform(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET))(this, obj);
		}

		::System::Void OnCoopRegionPlayChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshInfoAreaUIShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneSkillButtonValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneShowQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET))(this);
		}

		::System::Void OnSkillButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnSkillButtonDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET))(this);
		}

		::System::Void OnSkillButtonUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET))(this);
		}

		::System::Void TryCacheSwitchAvatarComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET))(this);
		}

		::System::Void ShowCommonSkillButton(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET))(this, isShow);
		}

		::System::Void ClearLongPressData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET))(this);
		}

		::System::Void TickLongPress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET))(this, deltaTime);
		}

		::System::Void TickQTEShow(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET))(this, deltaTime);
		}

		::System::Void OnCoopSettlementEnd(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET))(this, obj);
		}

		::System::Void _StartLinkZoneAvatarUlt_b__45_0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET))(this, msg);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}

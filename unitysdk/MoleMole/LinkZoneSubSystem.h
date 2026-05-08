#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4AE0715386866DD6.h"
#include "unitysdk/Enum_3_59737315FF4FFC59.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_C2ED712377151494.h"

class Class_0_16E4307DCC419505_11;
class Class_3_416D54600666EBB5;
class Class_3_816015CAFD8353F7;
class Class_3_9F2FCC0519F3E06F_88;
class Class_3_DD674CE55FAF6EFC;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET UNITYSDK_OFFSET(0x142993E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x14297D20)
#define MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x14297BD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x14296240)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x14294710)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET UNITYSDK_OFFSET(0x14297540)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET UNITYSDK_OFFSET(0x142977A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET UNITYSDK_OFFSET(0x142977E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x142975B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET UNITYSDK_OFFSET(0x142974B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET UNITYSDK_OFFSET(0x14297420)
#define MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x142972B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET UNITYSDK_OFFSET(0x142959D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET UNITYSDK_OFFSET(0x14295840)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET UNITYSDK_OFFSET(0x14295A60)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET UNITYSDK_OFFSET(0x14296C70)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x14294C50)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET UNITYSDK_OFFSET(0x14297FF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET UNITYSDK_OFFSET(0x14297D80)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x14294580)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET UNITYSDK_OFFSET(0x14294270)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET UNITYSDK_OFFSET(0x14297F60)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x14294220)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x142941F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET UNITYSDK_OFFSET(0x14294250)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x14294260)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x14294230)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET UNITYSDK_OFFSET(0x14294200)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET UNITYSDK_OFFSET(0x14294210)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET UNITYSDK_OFFSET(0x14294240)
#define MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x14295F50)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET UNITYSDK_OFFSET(0x14294100)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET UNITYSDK_OFFSET(0x142991F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET UNITYSDK_OFFSET(0x14299190)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x14293C80)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x14293610)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x14296480)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x142934F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET UNITYSDK_OFFSET(0x14295D30)
#define MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x142951E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x142986C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x14298670)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET UNITYSDK_OFFSET(0x14299430)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14298C00)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x14295060)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x142945F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x14296810)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET UNITYSDK_OFFSET(0x142982C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x14299250)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x142992F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET UNITYSDK_OFFSET(0x14299380)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14298F90)
#define MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET UNITYSDK_OFFSET(0x14294A00)
#define MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x14297080)
#define MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET UNITYSDK_OFFSET(0x14295F00)
#define MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x14298A60)
#define MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x142954C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x14297020)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET UNITYSDK_OFFSET(0x14299040)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET UNITYSDK_OFFSET(0x142990F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14293B40)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x142965D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x14293960)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET UNITYSDK_OFFSET(0x142967B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET UNITYSDK_OFFSET(0x14294150)
#define MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14299490)
#define MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET UNITYSDK_OFFSET(0x142994C0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x142995E0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14299670)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14299700)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem_TypeDefinitionIndex = 79819;

	class LinkZoneSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LinkZoneSubSystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* _teamExQTEShowInfoList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _texturePathDict; // 0x18
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _cachedTeamExQTEPerformedPeerIDList; // 0x28
		::Class_3_416D54600666EBB5* MessageLinkZone; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _linkZonePerformedPeerIDList; // 0x38
		::Class_3_816015CAFD8353F7* _switchAvatarComponent; // 0x40
		::System::UInt32 _curStateStartTime; // 0x48
		::Enum_3_4AE0715386866DD6 _cachedTeamExQTEType; // 0x4C
		::System::Int32 _maxLinkZoneEnergy; // 0x50
		::System::Single _longPressTimer; // 0x54
		::System::Boolean _lastShowRelayAttackQTEHint; // 0x58
		::System::Boolean _isLinkZoneInfoAreaUIShow; // 0x59
		::System::Boolean _isShowCommonSkillButton; // 0x5A
		::System::Boolean _lastShowLinkZoneUltQTEHint; // 0x5B
		::System::Int32 _cachedTeamExQTECasterPeerID; // 0x5C
		::System::UInt32 _linkZoneEnergyDecayTime; // 0x60
		::System::Int32 _curLinkZoneEnergy; // 0x64
		::System::Boolean _isLocalStartLinkZoneAvatarUlt; // 0x68
		::System::Boolean _isForceDisableLinkZoneUlt; // 0x69
		::System::Boolean _isCoopSettlementEnd; // 0x6A
		::System::Boolean _isCountDownTimerBarUIShow; // 0x6B
		::System::Int32 _cachedTeamExQTELastPerformPeerID; // 0x6C
		::Enum_3_A35B38E5F9115A76_1 _curLinkZoneState; // 0x70
		::System::Int32 _cachedTeamExQTEPosIndex; // 0x74

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

		::System::Void OnMpLinkZoneStateEnergyScNotify(::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void OnMpLinkZonePerformedPlayerScNotify(::Class_3_9F2FCC0519F3E06F_88* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_88*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET))(this, notify);
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

		::System::Void EnterLinkZoneState(::Enum_3_A35B38E5F9115A76_1 linkZoneState, ::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_1, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET))(this, linkZoneState, notify);
		}

		::System::Void EnterStateOutZoneNotEnoughEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET))(this);
		}

		::System::Void EnterStateOutZoneEnergyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET))(this);
		}

		::System::Void ParseChangeEnergyParam(::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET))(this, notify);
		}

		::System::Void EnterStateInZonePerform(::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET))(this, notify);
		}

		::System::Void CreateMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void CloseMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void EnterStateInZoneWaiting(::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET))(this, notify);
		}

		::System::Void ExitStateInZoneWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUltPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUlt(::Class_3_DD674CE55FAF6EFC* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET))(this, notify);
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

		::System::Void _StartLinkZoneAvatarUlt_b__45_0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET))(this, msg);
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

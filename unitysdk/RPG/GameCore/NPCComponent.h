#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AlertMode.h"
#include "unitysdk/RPG/GameCore/ForbidAdvCableReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/PauseAlertValueDecreaseReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_17122106D616A42B;
class Class_1_B65F0DC23C3D5837;
class Class_2_469A56953483CA0D;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_NPCCOMPONENT_APPLYMODELPRESET_OFFSET UNITYSDK_OFFSET(0xCE64130)
#define RPG_GAMECORE_NPCCOMPONENT_CHANGEALERTVALUETOMAX_OFFSET UNITYSDK_OFFSET(0xCE67DA0)
#define RPG_GAMECORE_NPCCOMPONENT_DISABLEBYERAFLIP_OFFSET UNITYSDK_OFFSET(0xCE65640)
#define RPG_GAMECORE_NPCCOMPONENT_DISABLE_OFFSET UNITYSDK_OFFSET(0xCE655C0)
#define RPG_GAMECORE_NPCCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE650D0)
#define RPG_GAMECORE_NPCCOMPONENT_ENABLEBYERAFLIP_OFFSET UNITYSDK_OFFSET(0xCE65800)
#define RPG_GAMECORE_NPCCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xCE65570)
#define RPG_GAMECORE_NPCCOMPONENT_ENTERPHANTOMFROZENSTATE_OFFSET UNITYSDK_OFFSET(0xCE633E0)
#define RPG_GAMECORE_NPCCOMPONENT_EXITPHANTOMFROZENSTATE_OFFSET UNITYSDK_OFFSET(0xCE63C10)
#define RPG_GAMECORE_NPCCOMPONENT_FEATURECHANGEALERTVALUECLAMP_OFFSET UNITYSDK_OFFSET(0xCE66BD0)
#define RPG_GAMECORE_NPCCOMPONENT_GETAIPATH_OFFSET UNITYSDK_OFFSET(0xCE67940)
#define RPG_GAMECORE_NPCCOMPONENT_GETENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE67D50)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCID_OFFSET UNITYSDK_OFFSET(0xCE671B0)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0xCE66130)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERWARNINGPERCENTFLOAT_OFFSET UNITYSDK_OFFSET(0xCE67B00)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCNAME_OFFSET UNITYSDK_OFFSET(0xCE67220)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCTITLE_OFFSET UNITYSDK_OFFSET(0xCE675B0)
#define RPG_GAMECORE_NPCCOMPONENT_GETSTAGEID_OFFSET UNITYSDK_OFFSET(0xCE66E00)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTSYSTEMENABLE_OFFSET UNITYSDK_OFFSET(0xCE68700)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTUISHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE68960)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xCE68A40)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINESPEED_OFFSET UNITYSDK_OFFSET(0xCE68980)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xCE687E0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMINLIMIT_OFFSET UNITYSDK_OFFSET(0xCE688A0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xCE68600)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMINLIMIT_OFFSET UNITYSDK_OFFSET(0xCE68540)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUENORMALIZE_OFFSET UNITYSDK_OFFSET(0xCE68D10)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCE684F0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERT_OFFSET UNITYSDK_OFFSET(0xCE684E0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xCE684C0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ATTACKCDTIMER_OFFSET UNITYSDK_OFFSET(0xCE68EB0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_FORBIDADVCABLE_OFFSET UNITYSDK_OFFSET(0xCE681A0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0xCE69010)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ISDANGERMONSTER_OFFSET UNITYSDK_OFFSET(0xCE68F80)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ISMONSTER_OFFSET UNITYSDK_OFFSET(0xCE68E90)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMAXTIME_OFFSET UNITYSDK_OFFSET(0xCE6A1D0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMINTIME_OFFSET UNITYSDK_OFFSET(0xCE6A1F0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET UNITYSDK_OFFSET(0xCE6A1B0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xCE68DC0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_NPCCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCE68160)
#define RPG_GAMECORE_NPCCOMPONENT_GET_NPCMONSTERCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCE68180)
#define RPG_GAMECORE_NPCCOMPONENT_GET_SKIPEVENTID_OFFSET UNITYSDK_OFFSET(0xCE68DE0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCE68E70)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STATICNPC_OFFSET UNITYSDK_OFFSET(0xCE68EF0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xCE683A0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_USEMAZESKILLTIMER_OFFSET UNITYSDK_OFFSET(0xCE68ED0)
#define RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFMONSTER_OFFSET UNITYSDK_OFFSET(0xCE65B70)
#define RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFNPC_OFFSET UNITYSDK_OFFSET(0xCE65A90)
#define RPG_GAMECORE_NPCCOMPONENT_INITPHANTOMSTATUS_OFFSET UNITYSDK_OFFSET(0xCE631F0)
#define RPG_GAMECORE_NPCCOMPONENT_INTERNALINITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE65970)
#define RPG_GAMECORE_NPCCOMPONENT_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0xCE68460)
#define RPG_GAMECORE_NPCCOMPONENT_ISPHANTOMFROZEN_OFFSET UNITYSDK_OFFSET(0xCE63DD0)
#define RPG_GAMECORE_NPCCOMPONENT_ONBEHIT_OFFSET UNITYSDK_OFFSET(0xCE67E80)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCE66850)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCE66C30)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCE66320)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCE667B0)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDFOLLOWPLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xCE68220)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDGOBACKPOSITION_OFFSET UNITYSDK_OFFSET(0xCE681B0)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xCE682A0)
#define RPG_GAMECORE_NPCCOMPONENT_PAUSEALERTVALUEDECREASE_OFFSET UNITYSDK_OFFSET(0xCE67DF0)
#define RPG_GAMECORE_NPCCOMPONENT_PREINITCOMPONENTOFMONSTER_OFFSET UNITYSDK_OFFSET(0xCE65B10)
#define RPG_GAMECORE_NPCCOMPONENT_RESETALERTMODE_OFFSET UNITYSDK_OFFSET(0xCE69B70)
#define RPG_GAMECORE_NPCCOMPONENT_RESETALERTVALUEDECLINEPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0xCE6A160)
#define RPG_GAMECORE_NPCCOMPONENT_RESETENTITYPOSITION_OFFSET UNITYSDK_OFFSET(0xCE63640)
#define RPG_GAMECORE_NPCCOMPONENT_RESETMONSTERTOPOS_OFFSET UNITYSDK_OFFSET(0xCE64860)
#define RPG_GAMECORE_NPCCOMPONENT_RESETPHANTOMANIMATION_OFFSET UNITYSDK_OFFSET(0xCE63A20)
#define RPG_GAMECORE_NPCCOMPONENT_RESETSTATEONAIDISABLE_OFFSET UNITYSDK_OFFSET(0xCE68F90)
#define RPG_GAMECORE_NPCCOMPONENT_RESTOREMONSTERSTATES_OFFSET UNITYSDK_OFFSET(0xCE69F90)
#define RPG_GAMECORE_NPCCOMPONENT_SETALERTMODE_OFFSET UNITYSDK_OFFSET(0xCE69B20)
#define RPG_GAMECORE_NPCCOMPONENT_SETFORBIDADVENTURECABLE_OFFSET UNITYSDK_OFFSET(0xCE680F0)
#define RPG_GAMECORE_NPCCOMPONENT_SETMONSTERMINIMAPICONVISIBLE_OFFSET UNITYSDK_OFFSET(0xCE69D40)
#define RPG_GAMECORE_NPCCOMPONENT_SETSTAGEID_OFFSET UNITYSDK_OFFSET(0xCE67160)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTSYSTEMENABLE_OFFSET UNITYSDK_OFFSET(0xCE68780)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTUISHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE68970)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xCE68CA0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINESPEED_OFFSET UNITYSDK_OFFSET(0xCE689D0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xCE68830)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMINLIMIT_OFFSET UNITYSDK_OFFSET(0xCE688F0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xCE68690)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMINLIMIT_OFFSET UNITYSDK_OFFSET(0xCE68590)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVSIONSHOWINMINIMAPSTATE_OFFSET UNITYSDK_OFFSET(0xCE690B0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_AREANAME_OFFSET UNITYSDK_OFFSET(0xCE684D0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ATTACKCDTIMER_OFFSET UNITYSDK_OFFSET(0xCE68EC0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ISMONSTER_OFFSET UNITYSDK_OFFSET(0xCE68EA0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMAXTIME_OFFSET UNITYSDK_OFFSET(0xCE6A1E0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMINTIME_OFFSET UNITYSDK_OFFSET(0xCE6A200)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET UNITYSDK_OFFSET(0xCE6A1C0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xCE68DD0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_NPCCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCE68170)
#define RPG_GAMECORE_NPCCOMPONENT_SET_NPCMONSTERCONFIGREF_OFFSET UNITYSDK_OFFSET(0xCE68190)
#define RPG_GAMECORE_NPCCOMPONENT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCE68E80)
#define RPG_GAMECORE_NPCCOMPONENT_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xCE683B0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_USEMAZESKILLTIMER_OFFSET UNITYSDK_OFFSET(0xCE68EE0)
#define RPG_GAMECORE_NPCCOMPONENT_TICKALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCE69BC0)
#define RPG_GAMECORE_NPCCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCE66C70)
#define RPG_GAMECORE_NPCCOMPONENT__BEGINFADEIN_OFFSET UNITYSDK_OFFSET(0xCE669E0)
#define RPG_GAMECORE_NPCCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE6A210)
#define RPG_GAMECORE_NPCCOMPONENT__CLAMPALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCE693C0)
#define RPG_GAMECORE_NPCCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE65040)
#define RPG_GAMECORE_NPCCOMPONENT__DISPOSEMONSTERRESETCOROUTINE_OFFSET UNITYSDK_OFFSET(0xCE64FF0)
#define RPG_GAMECORE_NPCCOMPONENT__GETENTITYALERTINCCOEFF_OFFSET UNITYSDK_OFFSET(0xCE697F0)
#define RPG_GAMECORE_NPCCOMPONENT__INITFADEHIDDEN_OFFSET UNITYSDK_OFFSET(0xCE66930)
#define RPG_GAMECORE_NPCCOMPONENT__ONPAMCURRENTSKINCHANGE_OFFSET UNITYSDK_OFFSET(0xCE63F70)
#define RPG_GAMECORE_NPCCOMPONENT__ONSWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xCE696A0)
#define RPG_GAMECORE_NPCCOMPONENT__REGISTERSKINNOTIFIES_OFFSET UNITYSDK_OFFSET(0xCE63E20)
#define RPG_GAMECORE_NPCCOMPONENT__RESETMONSTERSTEP2_OFFSET UNITYSDK_OFFSET(0xCE64CD0)
#define RPG_GAMECORE_NPCCOMPONENT__SETUPCOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0xCE66480)
#define RPG_GAMECORE_NPCCOMPONENT__TICKRESETMONSTER_OFFSET UNITYSDK_OFFSET(0xCE64C40)
#define RPG_GAMECORE_NPCCOMPONENT__TRYREDUCEALERTVALUE_OFFSET UNITYSDK_OFFSET(0xCE69520)
#define RPG_GAMECORE_NPCCOMPONENT__UNREGISTERSKINNOTIFIES_OFFSET UNITYSDK_OFFSET(0xCE63ED0)
#define RPG_GAMECORE_NPCCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCE6A230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponent_TypeDefinitionIndex = 53338;

	class NPCComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::Single* StaticGet_HIT_BOX_UPDATE_INTERVAL()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCComponent_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::Single* StaticGet__MONSTER_WARNING_TICK_CD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCComponent_TypeDefinitionIndex)->GetStaticField(0x12514);
		}
		// static const ::System::String* _EffectScaleAttachPointName; // 0x0
		::RPG::GameCore::AdventureCharacterController* _AdvCharCtrlCmpt; // 0x18
		::RPG::Client::MapNpcDef* _MapNpcDef_k__BackingField; // 0x20
		::Class_1_17122106D616A42B* _AlertMod; // 0x28
		::RPG::GameCore::AdventureCharacterDataComponent* _AdvCharDataCmpt; // 0x30
		::Class_2_469A56953483CA0D* _NPCMemoryCmpt; // 0x38
		::System::String* _AreaName_k__BackingField; // 0x40
		::System::Action* _ResetMonsterFinishCallback; // 0x48
		::RPG::GameCore::NPCMonsterDataRow* _NPCMonsterConfigRef_k__BackingField; // 0x50
		::RPG::GameCore::AdventureAbilityComponent* _AbilityCmpt; // 0x58
		::RPG::GameCore::NPCDataRow* _NPCConfigRef_k__BackingField; // 0x60
		::System::Nullable_1<::System::UInt32> CustomWorldLevel; // 0x68
		::System::UInt32 _StageID_k__BackingField; // 0x70
		::System::Single _UseMazeSkillTimer_k__BackingField; // 0x74
		::RPG::GameCore::NPCStatus _Status; // 0x78
		::System::Single _AlertnessIncreaseRatio; // 0x7C
		::System::Boolean HideAlertUI; // 0x80
		::System::Boolean HasBeenFrozen; // 0x81
		::System::Boolean _AlertVsionShowInMinimapState; // 0x82
		::System::Single _MonsterWarningTickCD; // 0x84
		::RPG::GameCore::AlertMode _AlertMode; // 0x88
		::System::Single _HitBoxUpdateTimer; // 0x8C
		::UnityEngine::Vector3 _ResetMonsterPos; // 0x90
		::System::Single _AlertValueDeclineProtectTimer; // 0x9C
		::System::Boolean _IsMonster_k__BackingField; // 0xA0
		::System::Boolean _Enable; // 0xA1
		::System::Boolean _PhantomFrozenState; // 0xA2
		::System::Boolean _NeedTickDangerMonsterWarning; // 0xA3
		::System::UInt32 _ForbidAdvCableCount; // 0xA4
		::System::UInt64 _LastGuardMaxTime_k__BackingField; // 0xA8
		::System::UInt32 _AlertVsionNotShowIconID; // 0xB0
		::System::Single _MonsterCombatPower; // 0xB4
		::UnityEngine::Quaternion _ResetMonsterRot; // 0xB8
		::System::Single _LastTriggerTrackedSearchTime; // 0xC8
		::System::Single _AlertUIShowDistance; // 0xCC
		::System::Single _CurrentTeamCombatPower; // 0xD0
		::System::Single _AttackCDTimer_k__BackingField; // 0xD4
		::System::Single _ResetMonsterStep2Timer; // 0xD8
		::System::UInt64 _LastGuardMinTime_k__BackingField; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void InitPhantomStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITPHANTOMSTATUS_OFFSET))(this);
		}

		::System::Void ResetPhantomAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETPHANTOMANIMATION_OFFSET))(this);
		}

		::System::Void ResetEntityPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETENTITYPOSITION_OFFSET))(this);
		}

		::System::Void EnterPhantomFrozenState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENTERPHANTOMFROZENSTATE_OFFSET))(this, a1);
		}

		::System::Void ExitPhantomFrozenState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_EXITPHANTOMFROZENSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPhantomFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ISPHANTOMFROZEN_OFFSET))(this);
		}

		::System::Void _RegisterSkinNotifies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__REGISTERSKINNOTIFIES_OFFSET))(this);
		}

		::System::Void _UnregisterSkinNotifies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__UNREGISTERSKINNOTIFIES_OFFSET))(this);
		}

		::System::Void _OnPamCurrentSkinChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__ONPAMCURRENTSKINCHANGE_OFFSET))(this, a1);
		}

		::System::Void ApplyModelPreset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_APPLYMODELPRESET_OFFSET))(this);
		}

		::System::Void ResetMonsterToPos(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETMONSTERTOPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TickResetMonster(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__TICKRESETMONSTER_OFFSET))(this, a1);
		}

		::System::Void _ResetMonsterStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__RESETMONSTERSTEP2_OFFSET))(this);
		}

		::System::Void _DisposeMonsterResetCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__DISPOSEMONSTERRESETCOROUTINE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISABLE_OFFSET))(this);
		}

		::System::Void DisableByEraFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISABLEBYERAFLIP_OFFSET))(this);
		}

		::System::Void EnableByEraFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENABLEBYERAFLIP_OFFSET))(this);
		}

		::System::Void InternalInitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INTERNALINITCOMPONENT_OFFSET))(this);
		}

		::System::Void InitComponentOfNPC(::RPG::GameCore::NPCDataRow* a1, ::RPG::Client::MapNpcDef* a2, ::RPG::GameCore::AdventureCharacterController* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFNPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreInitComponentOfMonster(::RPG::GameCore::NPCMonsterDataRow* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_PREINITCOMPONENTOFMONSTER_OFFSET))(this, a1, a2);
		}

		::System::Void InitComponentOfMonster(::RPG::GameCore::NPCMonsterDataRow* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFMONSTER_OFFSET))(this, a1, a2);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void _SetupColliderTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__SETUPCOLLIDERTRIGGER_OFFSET))(this);
		}

		::System::Void _InitFadeHidden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__INITFADEHIDDEN_OFFSET))(this);
		}

		::System::Void _BeginFadein()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__BEGINFADEIN_OFFSET))(this);
		}

		::System::Void FeatureChangeAlertValueClamp(::RPG::GameCore::AdventureBehaviorClampAlertLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureBehaviorClampAlertLevel))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_FEATURECHANGEALERTVALUECLAMP_OFFSET))(this, a1);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 GetStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETSTAGEID_OFFSET))(this);
		}

		::System::Void SetStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCID_OFFSET))(this);
		}

		::RPG::Client::TextID GetNPCName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetNPCTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCTITLE_OFFSET))(this);
		}

		::System::String* GetAIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETAIPATH_OFFSET))(this);
		}

		::System::Single GetNPCMonsterWarningPercentFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERWARNINGPERCENTFLOAT_OFFSET))(this);
		}

		::System::Single GetNPCMonsterCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERCOMBATPOWER_OFFSET))(this);
		}

		::System::UInt32 GetEntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Void ChangeAlertValueToMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_CHANGEALERTVALUETOMAX_OFFSET))(this);
		}

		::System::Void PauseAlertValueDecrease(::System::Boolean a1, ::RPG::GameCore::PauseAlertValueDecreaseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::PauseAlertValueDecreaseReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_PAUSEALERTVALUEDECREASE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONBEHIT_OFFSET))(this, a1);
		}

		::System::Void SetForbidAdventureCable(::System::Boolean a1, ::RPG::GameCore::ForbidAdvCableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidAdvCableReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETFORBIDADVENTURECABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::NPCDataRow* get_NPCConfigRef()
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_NPCCONFIGREF_OFFSET))(this);
		}

		::System::Void set_NPCConfigRef(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_NPCCONFIGREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::NPCMonsterDataRow* get_NPCMonsterConfigRef()
		{
			return ((::RPG::GameCore::NPCMonsterDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_NPCMONSTERCONFIGREF_OFFSET))(this);
		}

		::System::Void set_NPCMonsterConfigRef(::RPG::GameCore::NPCMonsterDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_NPCMONSTERCONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean get_ForbidAdvCable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_FORBIDADVCABLE_OFFSET))(this);
		}

		::System::Void OnNpcStatusChangeRecordGobackPosition(::RPG::GameCore::NPCStatus a1, ::RPG::GameCore::NPCStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDGOBACKPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnNpcStatusChangeRecordFollowPlayerState(::RPG::GameCore::NPCStatus a1, ::RPG::GameCore::NPCStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDFOLLOWPLAYERSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnNpcStatusChange(::RPG::GameCore::NPCStatus a1, ::RPG::GameCore::NPCStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::NPCStatus get_Status()
		{
			return ((::RPG::GameCore::NPCStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::GameCore::NPCStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean IsPerceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ISPERCEIVED_OFFSET))(this);
		}

		::System::String* get_AreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_AREANAME_OFFSET))(this);
		}

		::System::Void set_AreaName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_AREANAME_OFFSET))(this, a1);
		}

		::Class_1_17122106D616A42B* get_Alert()
		{
			return ((::Class_1_17122106D616A42B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERT_OFFSET))(this);
		}

		::System::Single get_AlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUE_OFFSET))(this);
		}

		::System::Single get_AlertValueMinLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMINLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueMinLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMINLIMIT_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueMaxLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMAXLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueMaxLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMAXLIMIT_OFFSET))(this, a1);
		}

		::System::Boolean get_AlertSystemEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTSYSTEMENABLE_OFFSET))(this);
		}

		::System::Void set_AlertSystemEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTSYSTEMENABLE_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueGuardMaxLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMAXLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueGuardMaxLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMAXLIMIT_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueGuardMinLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMINLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueGuardMinLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMINLIMIT_OFFSET))(this, a1);
		}

		::System::Single get_AlertUIShowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTUISHOWDISTANCE_OFFSET))(this);
		}

		::System::Void set_AlertUIShowDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTUISHOWDISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueDeclineSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINESPEED_OFFSET))(this);
		}

		::System::Void set_AlertValueDeclineSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINESPEED_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueDeclineProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINEPROTECTTIME_OFFSET))(this);
		}

		::System::Void set_AlertValueDeclineProtectTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINEPROTECTTIME_OFFSET))(this, a1);
		}

		::System::Single get_AlertValueNormalize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUENORMALIZE_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Void set_MapNpcDef(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_MAPNPCDEF_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipEventID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_SKIPEVENTID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ISMONSTER_OFFSET))(this);
		}

		::System::Void set_IsMonster(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ISMONSTER_OFFSET))(this, a1);
		}

		::System::Single get_AttackCDTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ATTACKCDTIMER_OFFSET))(this);
		}

		::System::Void set_AttackCDTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ATTACKCDTIMER_OFFSET))(this, a1);
		}

		::System::Single get_UseMazeSkillTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_USEMAZESKILLTIMER_OFFSET))(this);
		}

		::System::Void set_UseMazeSkillTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_USEMAZESKILLTIMER_OFFSET))(this, a1);
		}

		::System::Boolean get_StaticNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STATICNPC_OFFSET))(this);
		}

		::System::Boolean get_IsDangerMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ISDANGERMONSTER_OFFSET))(this);
		}

		::System::Void ResetStateOnAIDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETSTATEONAIDISABLE_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_InteractIconType()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_INTERACTICONTYPE_OFFSET))(this);
		}

		::System::Void set_AlertVsionShowInMinimapState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVSIONSHOWINMINIMAPSTATE_OFFSET))(this, a1);
		}

		::System::Single _ClampAlertValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CLAMPALERTVALUE_OFFSET))(this, a1);
		}

		::System::Void _TryReduceAlertValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__TRYREDUCEALERTVALUE_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchCurrentTeam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__ONSWITCHCURRENTTEAM_OFFSET))(this, a1);
		}

		::System::Single _GetEntityAlertIncCoeff(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__GETENTITYALERTINCCOEFF_OFFSET))(this, a1);
		}

		::System::Void SetAlertMode(::RPG::GameCore::AlertMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AlertMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETALERTMODE_OFFSET))(this, a1);
		}

		::System::Void ResetAlertMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETALERTMODE_OFFSET))(this);
		}

		::System::Void TickAlertValue(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_B65F0DC23C3D5837* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::GameEntity*, ::Class_1_B65F0DC23C3D5837*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_TICKALERTVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMonsterMinimapIconVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETMONSTERMINIMAPICONVISIBLE_OFFSET))(this, a1);
		}

		::System::Void RestoreMonsterStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESTOREMONSTERSTATES_OFFSET))(this);
		}

		::System::Void ResetAlertValueDeclineProtectTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETALERTVALUEDECLINEPROTECTTIMER_OFFSET))(this);
		}

		::System::Single get_LastTriggerTrackedSearchTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET))(this);
		}

		::System::Void set_LastTriggerTrackedSearchTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_LastGuardMaxTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMAXTIME_OFFSET))(this);
		}

		::System::Void set_LastGuardMaxTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMAXTIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_LastGuardMinTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMINTIME_OFFSET))(this);
		}

		::System::Void set_LastGuardMinTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMINTIME_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}

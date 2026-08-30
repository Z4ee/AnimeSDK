#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_40503CAE2FA0ADB9.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtBattlePhase.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_CC68D5BDA05DE967.h"

class Class_0_16E4307DCC419505_539;
class Class_1_0E0403D2B5AD79E8;
class Class_1_0ED7108EB7D9E344;
class Class_1_2A73EE3831056054;
class Class_1_3E6E1020B071C118;
class Class_1_43B0AF86156D9901;
class Class_1_43BD383C98B4C0C5_125;
class Class_1_520D5FBF7CA3CFF9;
class Class_1_56A1684BE394769D;
class Class_1_6B9FBCAC09C5F877;
class Class_1_D64959CBBD533335_3;
class Class_1_DC4D24A0E7B2549D;
class Class_1_E03597A69ECA0B85;
class Class_1_E17105E653363FFF;
class Class_1_E7BD46EB43F1A06F;
class Class_2_A1F69E2229E56CFE;
class Class_2_A48F3719AA1CF200_7;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtBattleStageConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { template <typename T1, typename T2> class BaseFrameSynchor_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0x19028E40)
#define RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x19029030)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x19028150)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x1902A7D0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET UNITYSDK_OFFSET(0x190289F0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0x19027420)
#define RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0x190278B0)
#define RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x19025EC0)
#define RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1902DBD0)
#define RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET UNITYSDK_OFFSET(0x1198B590)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET UNITYSDK_OFFSET(0x19026E80)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x1902B2D0)
#define RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET UNITYSDK_OFFSET(0x190281C0)
#define RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET UNITYSDK_OFFSET(0x19026C10)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET UNITYSDK_OFFSET(0x19027CE0)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x19028050)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET UNITYSDK_OFFSET(0x19027BF0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x1198B800)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET UNITYSDK_OFFSET(0x1902E650)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET UNITYSDK_OFFSET(0x1902E660)
#define RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET UNITYSDK_OFFSET(0x1902C7D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET UNITYSDK_OFFSET(0x1198B7D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET UNITYSDK_OFFSET(0x1198B7F0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0x1198B7E0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0x1198B790)
#define RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0x1198B810)
#define RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x1198B830)
#define RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1902F060)
#define RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1902C7C0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET UNITYSDK_OFFSET(0x1198B7C0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x1902E7A0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1198B7B0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET UNITYSDK_OFFSET(0x1198B7A0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x1902E870)
#define RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x1902E230)
#define RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x19026300)
#define RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1198B710)
#define RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1198B450)
#define RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1902FF00)
#define RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET UNITYSDK_OFFSET(0x19030340)
#define RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET UNITYSDK_OFFSET(0x1198B500)
#define RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET UNITYSDK_OFFSET(0x1902F070)
#define RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET UNITYSDK_OFFSET(0x1198B490)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1198B3C0)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1198B410)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x190300C0)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0x19030390)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET UNITYSDK_OFFSET(0x1902DAF0)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET UNITYSDK_OFFSET(0x1902D920)
#define RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x19025F00)
#define RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x1902C5D0)
#define RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x19027750)
#define RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0x1198B820)
#define RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x1902E2A0)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET UNITYSDK_OFFSET(0x1902BA50)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0x1902BDE0)
#define RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET UNITYSDK_OFFSET(0x1198B600)
#define RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x19026AC0)
#define RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1902E7B0)
#define RPG_GAMECORE_RTBATTLEMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1198B920)
#define RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1902ACE0)
#define RPG_GAMECORE_RTBATTLEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1198B840)
#define RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1902E810)
#define RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0x19025990)
#define RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET UNITYSDK_OFFSET(0x19026670)
#define RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET UNITYSDK_OFFSET(0x19025940)
#define RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x1902AB50)
#define RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x1902FF90)
#define RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET UNITYSDK_OFFSET(0x190287A0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0x1902CE90)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET UNITYSDK_OFFSET(0x1902D0F0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET UNITYSDK_OFFSET(0x1902C8B0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1902CFC0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET UNITYSDK_OFFSET(0x1902D290)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET UNITYSDK_OFFSET(0x1902C7E0)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1902E880)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET UNITYSDK_OFFSET(0x1902D0A0)
#define RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET UNITYSDK_OFFSET(0x1902D420)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0x190282A0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET UNITYSDK_OFFSET(0x190286A0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0x190286F0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x19028750)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1902FCA0)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0x19026FA0)
#define RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1902D870)
#define RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET UNITYSDK_OFFSET(0x1902BD20)
#define RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x190302D0)
#define RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0x190271E0)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET UNITYSDK_OFFSET(0x1902B400)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET UNITYSDK_OFFSET(0x1902C410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode_TypeDefinitionIndex = 54483;

	class RtBattleMode : public ::Class_1_40503CAE2FA0ADB9
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__AvatarPromotionIDDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x114F0);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTag_SpecialEquipment()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x114F8);
		}
		static ::System::String** StaticGet_TargetAliasConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x11500);
		}
		static ::System::String** StaticGet_SpeicalEquipID_Key()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x11508);
		}
		static ::System::String** StaticGet_TargetOperationConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x11510);
		}
		// static const ::System::String* TeamEquipPropertyGroupName; // 0x0
		// static const ::System::String* AvatarSpecialEquipPropertyGroupName; // 0x0
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_6B9FBCAC09C5F877*>* _CharacterSpecialEquipDataDict; // 0x38
		::RPG::GameCore::GameWorld* _GameWorld; // 0x40
		::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>* _NormalEquipList; // 0x48
		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* _NormalEquipPropertyList; // 0x50
		::RPG::GameCore::GameEntity* _BossGrid; // 0x58
		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_7*>* _FrameSynchor; // 0x60
		::RPG::GameCore::ILBattleStageConfigRow* _StageRow; // 0x68
		::RPG::GameCore::RtBattleStageConfig* _StageConfig; // 0x70
		::Class_1_D64959CBBD533335_3* _LocalPlayer; // 0x78
		::Class_1_0ED7108EB7D9E344* _InitParam; // 0x80
		::Class_1_3E6E1020B071C118* _StatisticsData; // 0x88
		::Class_1_E7BD46EB43F1A06F* _RtTickContext; // 0x90
		::System::Collections::Generic::List_1<::Class_1_520D5FBF7CA3CFF9*>* _CharacterDieInfoList; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _GridByTagDict; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_3*>* _Players; // 0xA8
		::Class_1_43B0AF86156D9901* _BattleLogicRandom; // 0xB0
		::System::Int32 _SpawnedWaveCount; // 0xB8
		::System::Boolean _IsModePaused_k__BackingField; // 0xBC
		::RPG::GameCore::RtBattlePhase _BattlePhase; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__CCTOR_OFFSET))();
		}

		::System::Void _InitBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET))(this);
		}

		::System::Void _InitAmphoreusBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET))(this);
		}

		static ::System::Void EditorAutoReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET))();
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET))();
		}

		::System::Void InitGlobalConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET))(this);
		}

		::System::Void UninitGlobalConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET))(this);
		}

		static ::System::Void GetDamageRatioForTeamPower(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::RPG::GameCore::FixPoint& a4, ::RPG::GameCore::FixPoint& a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarPromotionIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET))(a1);
		}

		static ::System::Void _InitAvatarConfigDic()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET))();
		}

		::System::Void _SetupEntityListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET))(this);
		}

		::System::Void _UnsetupEntityListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateLevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::IVec2 GetTeamBornPoint(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTeamBornPointDirAngle(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTeamBornPointEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET))(this, a1);
		}

		::Class_1_2A73EE3831056054* CreateDyingInstance()
		{
			return ((::Class_1_2A73EE3831056054*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET))(this);
		}

		::System::Boolean GetCharacterDieInfo(::System::UInt32 a1, ::Class_1_520D5FBF7CA3CFF9*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_520D5FBF7CA3CFF9*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEntityBeforeDying(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnEntityDied(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEntityRevive(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_125* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_125*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnEntityWillDestroy(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLevelEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateGrid(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::IVec2 a2, ::Il2CppArray<::System::String*>* a3, ::System::Int32 a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityManager*, ::RPG::GameCore::IVec2, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::Class_0_16E4307DCC419505_539* BuildCharacterRowData(::Struct_2_CC68D5BDA05DE967 a1, ::RPG::GameCore::ILBattleStageConfigRow* a2, ::Class_1_0E0403D2B5AD79E8* a3)
		{
			return ((::Class_0_16E4307DCC419505_539*(*)(::Struct_2_CC68D5BDA05DE967, ::RPG::GameCore::ILBattleStageConfigRow*, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* CreateCharacter(::Struct_2_CC68D5BDA05DE967 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Struct_2_CC68D5BDA05DE967, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CreateEntity(::RPG::GameCore::EntityType a1, ::Class_1_E17105E653363FFF* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityType, ::Class_1_E17105E653363FFF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitEquipmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET))(this);
		}

		::System::Void SetupEquipData(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET))(this, a1);
		}

		::System::Void SyncNormalEquip(::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET))(this, a1);
		}

		::System::Void SyncSpecialEquip(::Il2CppArray<::Class_1_E03597A69ECA0B85*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_E03597A69ECA0B85*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET))(this, a1);
		}

		::Class_1_6B9FBCAC09C5F877* GetAvatarSpecialEquipData(::System::UInt32 a1)
		{
			return ((::Class_1_6B9FBCAC09C5F877*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET))(this, a1);
		}

		::System::Void SetAvatarSpecialEquipData(::System::UInt32 a1, ::Class_1_6B9FBCAC09C5F877* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6B9FBCAC09C5F877*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSpecialEquipForAvatar(::System::UInt32 a1, ::Class_1_6B9FBCAC09C5F877* a2, ::Class_1_6B9FBCAC09C5F877* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6B9FBCAC09C5F877*, ::Class_1_6B9FBCAC09C5F877*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateSpecialEquipForAvatar_1(::RPG::GameCore::GameEntity* a1, ::Class_1_6B9FBCAC09C5F877* a2, ::Class_1_6B9FBCAC09C5F877* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6B9FBCAC09C5F877*, ::Class_1_6B9FBCAC09C5F877*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SyncPropertyGroup(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ComputeNormalEquipPropertyList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* get_NormalEquipPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_6B9FBCAC09C5F877*>* get_CharacterSpecialEquipDataDict()
		{
			return ((::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_6B9FBCAC09C5F877*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET))(this);
		}

		::System::Void _InitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET))(this);
		}

		::System::Void _InitStageAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET))(this);
		}

		::System::Void _InitStageLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET))(this);
		}

		::System::Void _StartStageLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET))(this);
		}

		::System::Void _InitStageGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET))(this);
		}

		::System::Void _InitStageUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET))(this);
		}

		::System::Void _InitStageBackgroundUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET))(this);
		}

		::System::Void QueryGridByTag(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void QueryGridByTagHash(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* FindEmptyGridWithEvaluator(::RPG::GameCore::ValueEvaluatorConfig* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET))(this, a1);
		}

		::System::Boolean HasNextWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* SpawnNextWave()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_BossGrid()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_BossMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET))(this);
		}

		::System::Int32 get_SpawnedWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET))(this);
		}

		::System::Void _BeginStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET))(this);
		}

		::System::Void _EndStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET))(this);
		}

		::Class_1_3E6E1020B071C118* get_StatisticsData()
		{
			return ((::Class_1_3E6E1020B071C118*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET))(this);
		}

		::System::Void _InitTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET))(this);
		}

		::System::Void _InitTeamCharacters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET))(this);
		}

		::System::Void _InitTechTreeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET))(this);
		}

		::RPG::GameCore::BattleModeType get_ModeType()
		{
			return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET))(this);
		}

		::System::Void OnPreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET))(this);
		}

		::System::Void _SetupDamageConfig(::Class_1_56A1684BE394769D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56A1684BE394769D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET))(this);
		}

		::System::Void _InitGameWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET))(this);
		}

		::System::Void _UninitGameworld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET))(this);
		}

		::System::Void OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET))(this);
		}

		::System::Void OnUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET))(this);
		}

		::System::Void OnPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET))(this);
		}

		::System::Void OnPostStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean FinishCheckAndProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET))(this);
		}

		::Class_1_0ED7108EB7D9E344* get_InitParam()
		{
			return ((::Class_1_0ED7108EB7D9E344*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleStageConfigRow* get_StageRow()
		{
			return ((::RPG::GameCore::ILBattleStageConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleStageConfig* get_StageConfig()
		{
			return ((::RPG::GameCore::RtBattleStageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_3*>* get_Players()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET))(this);
		}

		::Class_1_DC4D24A0E7B2549D* get_FinishParam()
		{
			return ((::Class_1_DC4D24A0E7B2549D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_GameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET))(this);
		}

		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_7*>* get_FrameSynchor()
		{
			return ((::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET))(this);
		}

		::RPG::GameCore::RtBattlePhase get_BattlePhase()
		{
			return ((::RPG::GameCore::RtBattlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsModePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsModePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET))(this, a1);
		}

		::Class_1_D64959CBBD533335_3* get_LocalPlayer()
		{
			return ((::Class_1_D64959CBBD533335_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET))(this);
		}
	};
}

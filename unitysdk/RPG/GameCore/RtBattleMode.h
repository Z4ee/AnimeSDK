#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DA56B8CEAE4146EE.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtBattlePhase.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_CC68D5BDA05DE967.h"

class Class_0_16E4307DCC419505_461;
class Class_1_0E0403D2B5AD79E8;
class Class_1_2A73EE3831056054;
class Class_1_2E44A17C1AB85015;
class Class_1_43BD383C98B4C0C5_103;
class Class_1_520D5FBF7CA3CFF9;
class Class_1_56A1684BE394769D;
class Class_1_827373C1CEDFE355;
class Class_1_C1943EC6B1B061DE;
class Class_1_D64959CBBD533335_3;
class Class_1_DC4D24A0E7B2549D;
class Class_1_E17105E653363FFF;
class Class_1_E7BD46EB43F1A06F;
class Class_1_E825436C682190C1;
class Class_1_F9AE7AA9DD8A83B5;
class Class_2_A1F69E2229E56CFE;
class Class_2_A48F3719AA1CF200_9;
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

#define RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0xB720FA0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0xB721190)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xB720270)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0xB722580)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET UNITYSDK_OFFSET(0xB720B30)
#define RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0xB71F540)
#define RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0xB71F9D0)
#define RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xB71E0A0)
#define RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET UNITYSDK_OFFSET(0xB725C40)
#define RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET UNITYSDK_OFFSET(0xB7281B0)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xB71EFE0)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xB723300)
#define RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET UNITYSDK_OFFSET(0xB7202E0)
#define RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET UNITYSDK_OFFSET(0xB71EDB0)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET UNITYSDK_OFFSET(0xB71FE10)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xB720170)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET UNITYSDK_OFFSET(0xB71FD20)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xB7283C0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET UNITYSDK_OFFSET(0xB7264E0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET UNITYSDK_OFFSET(0xB7264F0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET UNITYSDK_OFFSET(0xB724640)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET UNITYSDK_OFFSET(0xB728390)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET UNITYSDK_OFFSET(0xB7283B0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0xB7283A0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0xB728350)
#define RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0xB7283D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xB7283F0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0xB726D90)
#define RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xB724630)
#define RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET UNITYSDK_OFFSET(0xB728380)
#define RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xB726620)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0xB728370)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET UNITYSDK_OFFSET(0xB728360)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0xB7266E0)
#define RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xB726160)
#define RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xB71E4E0)
#define RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB7282D0)
#define RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB728060)
#define RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET UNITYSDK_OFFSET(0xB727B70)
#define RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET UNITYSDK_OFFSET(0xB727F40)
#define RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET UNITYSDK_OFFSET(0xB728120)
#define RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xB726DA0)
#define RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET UNITYSDK_OFFSET(0xB7280A0)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB727FD0)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB728020)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB727D30)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xB727F90)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET UNITYSDK_OFFSET(0xB725B20)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET UNITYSDK_OFFSET(0xB725910)
#define RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xB71E0E0)
#define RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xB7244C0)
#define RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xB71F870)
#define RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0xB7283E0)
#define RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xB7261D0)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET UNITYSDK_OFFSET(0xB723990)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xB723D30)
#define RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET UNITYSDK_OFFSET(0xB728220)
#define RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xB71EC60)
#define RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB726630)
#define RPG_GAMECORE_RTBATTLEMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7284E0)
#define RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xB722BD0)
#define RPG_GAMECORE_RTBATTLEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB728400)
#define RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB726690)
#define RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0xB71DBC0)
#define RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET UNITYSDK_OFFSET(0xB71E850)
#define RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET UNITYSDK_OFFSET(0xB71DB70)
#define RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0xB722980)
#define RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xB727C00)
#define RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET UNITYSDK_OFFSET(0xB7208C0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xB724DE0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET UNITYSDK_OFFSET(0xB725060)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET UNITYSDK_OFFSET(0xB724720)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB724F20)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET UNITYSDK_OFFSET(0xB725240)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET UNITYSDK_OFFSET(0xB724650)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET UNITYSDK_OFFSET(0xB7266F0)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET UNITYSDK_OFFSET(0xB725010)
#define RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET UNITYSDK_OFFSET(0xB725420)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0xB7203B0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET UNITYSDK_OFFSET(0xB7207C0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xB720810)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xB720870)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET UNITYSDK_OFFSET(0xB727910)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0xB71F140)
#define RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xB725850)
#define RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET UNITYSDK_OFFSET(0xB723C70)
#define RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xB727ED0)
#define RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0xB71F340)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET UNITYSDK_OFFSET(0xB7233A0)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET UNITYSDK_OFFSET(0xB724310)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB728960)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB728890)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xB728650)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONLOAD_OFFSET UNITYSDK_OFFSET(0xB728710)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xB7285F0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xB7287D0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB728830)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB7286B0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xB728770)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB7288F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode_TypeDefinitionIndex = 50050;

	class RtBattleMode : public ::Class_1_DA56B8CEAE4146EE
	{
	public:
		static ::System::String** StaticGet_TargetAliasConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x5B4F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__AvatarPromotionIDDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x5B4F8);
		}
		static ::System::String** StaticGet_SpeicalEquipID_Key()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x5B500);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTag_SpecialEquipment()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x5B508);
		}
		static ::System::String** StaticGet_TargetOperationConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x5B510);
		}
		// static const ::System::String* TeamEquipPropertyGroupName; // 0x0
		// static const ::System::String* AvatarSpecialEquipPropertyGroupName; // 0x0
		::RPG::GameCore::ILBattleStageConfigRow* _StageRow; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _GridByTagDict; // 0x40
		::RPG::GameCore::GameEntity* _BossGrid; // 0x48
		::Class_1_C1943EC6B1B061DE* _StatisticsData; // 0x50
		::Class_1_E825436C682190C1* _InitParam; // 0x58
		::RPG::GameCore::RtBattleStageConfig* _StageConfig; // 0x60
		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_9*>* _FrameSynchor; // 0x68
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_F9AE7AA9DD8A83B5*>* _CharacterSpecialEquipDataDict; // 0x70
		::Class_1_D64959CBBD533335_3* _LocalPlayer; // 0x78
		::RPG::GameCore::GameWorld* _GameWorld; // 0x80
		::Class_1_E7BD46EB43F1A06F* _RtTickContext; // 0x88
		::Class_1_827373C1CEDFE355* _BattleLogicRandom; // 0x90
		::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* _NormalEquipList; // 0x98
		::System::Collections::Generic::List_1<::Class_1_520D5FBF7CA3CFF9*>* _CharacterDieInfoList; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_3*>* _Players; // 0xA8
		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* _NormalEquipPropertyList; // 0xB0
		::RPG::GameCore::RtBattlePhase _BattlePhase; // 0xB8
		::System::Int32 _SpawnedWaveCount; // 0xBC
		::System::Boolean _IsModePaused_k__BackingField; // 0xC0

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

		static ::System::Void GetDamageRatioForTeamPower(::System::UInt32 groupID, ::System::UInt64 lightTeamPower, ::System::UInt64 darkTeamPower, ::RPG::GameCore::FixPoint& damageRatio, ::RPG::GameCore::FixPoint& damageTakenRatio)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET))(groupID, lightTeamPower, darkTeamPower, damageRatio, damageTakenRatio);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarPromotionIDList(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET))(avatarID);
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

		::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::TeamType teamType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET))(this, teamType);
		}

		::RPG::GameCore::IVec2 GetTeamBornPoint(::RPG::GameCore::TeamType teamType)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET))(this, teamType);
		}

		::RPG::GameCore::FixPoint GetTeamBornPointDirAngle(::RPG::GameCore::TeamType teamType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET))(this, teamType);
		}

		::RPG::GameCore::GameEntity* GetTeamBornPointEntity(::RPG::GameCore::TeamType teamType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET))(this, teamType);
		}

		::Class_1_2A73EE3831056054* CreateDyingInstance()
		{
			return ((::Class_1_2A73EE3831056054*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET))(this);
		}

		::System::Boolean GetCharacterDieInfo(::System::UInt32 runtimeID, ::Class_1_520D5FBF7CA3CFF9*& dieInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_520D5FBF7CA3CFF9*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET))(this, runtimeID, dieInfo);
		}

		::System::Void _OnEntityBeforeDying(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::AliveState fromState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET))(this, pEntity, pAttacker, fromState);
		}

		::System::Void _OnEntityDied(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AliveState fromState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET))(this, pEntity, fromState);
		}

		::System::Void _OnEntityRevive(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AliveState fromState, ::Class_1_43BD383C98B4C0C5_103* reviveParamBase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_103*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET))(this, pEntity, fromState, reviveParamBase);
		}

		::System::Void _OnEntityWillDestroy(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AliveState fromState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET))(this, pEntity, fromState);
		}

		::System::Void _InitLevelEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateGrid(::RPG::GameCore::EntityManager* pManager, ::RPG::GameCore::IVec2 gridPos, ::Il2CppArray<::System::String*>* tags, ::System::Int32 order)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityManager*, ::RPG::GameCore::IVec2, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET))(this, pManager, gridPos, tags, order);
		}

		static ::Class_0_16E4307DCC419505_461* BuildCharacterRowData(::Struct_2_CC68D5BDA05DE967 createParam, ::RPG::GameCore::ILBattleStageConfigRow* stageRow, ::Class_1_0E0403D2B5AD79E8* crossBattleCharacterInheritData)
		{
			return ((::Class_0_16E4307DCC419505_461*(*)(::Struct_2_CC68D5BDA05DE967, ::RPG::GameCore::ILBattleStageConfigRow*, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET))(createParam, stageRow, crossBattleCharacterInheritData);
		}

		::RPG::GameCore::GameEntity* CreateCharacter(::Struct_2_CC68D5BDA05DE967 createParam, ::System::Int32 gridFindRange)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Struct_2_CC68D5BDA05DE967, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET))(this, createParam, gridFindRange);
		}

		::RPG::GameCore::GameEntity* CreateEntity(::RPG::GameCore::EntityType entityType, ::Class_1_E17105E653363FFF* createParam)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityType, ::Class_1_E17105E653363FFF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET))(this, entityType, createParam);
		}

		::System::Void _InitEquipmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET))(this);
		}

		::System::Void SetupEquipData(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET))(this, entity);
		}

		::System::Void SyncNormalEquip(::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* normalEquipList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET))(this, normalEquipList);
		}

		::System::Void SyncSpecialEquip(::Il2CppArray<::Class_1_2E44A17C1AB85015*>* specialEquipList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_2E44A17C1AB85015*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET))(this, specialEquipList);
		}

		::Class_1_F9AE7AA9DD8A83B5* GetAvatarSpecialEquipData(::System::UInt32 avatarID)
		{
			return ((::Class_1_F9AE7AA9DD8A83B5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET))(this, avatarID);
		}

		::System::Void SetAvatarSpecialEquipData(::System::UInt32 avatarID, ::Class_1_F9AE7AA9DD8A83B5* equipData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_F9AE7AA9DD8A83B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET))(this, avatarID, equipData);
		}

		::System::Void _UpdateSpecialEquipForAvatar(::System::UInt32 avatarID, ::Class_1_F9AE7AA9DD8A83B5* oldEquipData, ::Class_1_F9AE7AA9DD8A83B5* newEquipData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_F9AE7AA9DD8A83B5*, ::Class_1_F9AE7AA9DD8A83B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET))(this, avatarID, oldEquipData, newEquipData);
		}

		::System::Void _UpdateSpecialEquipForAvatar_1(::RPG::GameCore::GameEntity* avatarEntity, ::Class_1_F9AE7AA9DD8A83B5* oldEquipData, ::Class_1_F9AE7AA9DD8A83B5* newEquipData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F9AE7AA9DD8A83B5*, ::Class_1_F9AE7AA9DD8A83B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET))(this, avatarEntity, oldEquipData, newEquipData);
		}

		::System::Void _SyncPropertyGroup(::RPG::GameCore::GameEntity* entity, ::System::String* groupName, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* propertyList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET))(this, entity, groupName, propertyList);
		}

		::System::Void _ComputeNormalEquipPropertyList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* get_NormalEquipPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_F9AE7AA9DD8A83B5*>* get_CharacterSpecialEquipDataDict()
		{
			return ((::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_F9AE7AA9DD8A83B5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET))(this);
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

		::System::Void QueryGridByTag(::System::String* tag, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET))(this, tag, results);
		}

		::System::Void QueryGridByTagHash(::System::Int32 tagHash, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET))(this, tagHash, results);
		}

		::RPG::GameCore::GameEntity* FindEmptyGridWithEvaluator(::RPG::GameCore::ValueEvaluatorConfig* evaluatorConfig)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET))(this, evaluatorConfig);
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

		::Class_1_C1943EC6B1B061DE* get_StatisticsData()
		{
			return ((::Class_1_C1943EC6B1B061DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET))(this);
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

		::System::Void _SetupDamageConfig(::Class_1_56A1684BE394769D* damageConfigModule)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56A1684BE394769D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET))(this, damageConfigModule);
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

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean FinishCheckAndProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET))(this);
		}

		::Class_1_E825436C682190C1* get_InitParam()
		{
			return ((::Class_1_E825436C682190C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET))(this);
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

		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_9*>* get_FrameSynchor()
		{
			return ((::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET))(this);
		}

		::RPG::GameCore::RtBattlePhase get_BattlePhase()
		{
			return ((::RPG::GameCore::RtBattlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsModePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsModePaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET))(this, value);
		}

		::Class_1_D64959CBBD533335_3* get_LocalPlayer()
		{
			return ((::Class_1_D64959CBBD533335_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONPREINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONLOAD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNLOAD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTOP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}

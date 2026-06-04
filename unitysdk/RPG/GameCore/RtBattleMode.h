#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A6A0F51F0E51089E.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtBattlePhase.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_CC68D5BDA05DE967.h"

class Class_0_16E4307DCC419505_480;
class Class_1_0E0403D2B5AD79E8;
class Class_1_0ED7108EB7D9E344;
class Class_1_2A73EE3831056054;
class Class_1_43BD383C98B4C0C5_114;
class Class_1_520D5FBF7CA3CFF9;
class Class_1_56A1684BE394769D;
class Class_1_6B9FBCAC09C5F877;
class Class_1_827373C1CEDFE355;
class Class_1_8A333169D3B7AF8C;
class Class_1_D64959CBBD533335_3;
class Class_1_DC4D24A0E7B2549D;
class Class_1_E03597A69ECA0B85;
class Class_1_E17105E653363FFF;
class Class_1_E7BD46EB43F1A06F;
class Class_2_A1F69E2229E56CFE;
class Class_2_A48F3719AA1CF200_8;
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

#define RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0xCE8DCA0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0xCE8DE90)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE8CF70)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0xCE8F2D0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET UNITYSDK_OFFSET(0xCE8D850)
#define RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0xCE8C230)
#define RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0xCE8C6C0)
#define RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xCE8ACB0)
#define RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET UNITYSDK_OFFSET(0xCE92870)
#define RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET UNITYSDK_OFFSET(0xCE95000)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xCE8BC70)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xCE8FF00)
#define RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET UNITYSDK_OFFSET(0xCE8CFE0)
#define RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET UNITYSDK_OFFSET(0xCE8BA00)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET UNITYSDK_OFFSET(0xCE8CB00)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xCE8CE70)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET UNITYSDK_OFFSET(0xCE8CA10)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xCE95200)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET UNITYSDK_OFFSET(0xCE93280)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET UNITYSDK_OFFSET(0xCE93290)
#define RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET UNITYSDK_OFFSET(0xCE91460)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET UNITYSDK_OFFSET(0xCE951D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET UNITYSDK_OFFSET(0xCE951F0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE951E0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0xCE95190)
#define RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0xCE95210)
#define RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xCE95230)
#define RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0xCE93B40)
#define RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xCE91450)
#define RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET UNITYSDK_OFFSET(0xCE951C0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xCE933D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0xCE951B0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET UNITYSDK_OFFSET(0xCE951A0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0xCE93490)
#define RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xCE92E60)
#define RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xCE8B0F0)
#define RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE95110)
#define RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xCE94EC0)
#define RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET UNITYSDK_OFFSET(0xCE949C0)
#define RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET UNITYSDK_OFFSET(0xCE94DA0)
#define RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET UNITYSDK_OFFSET(0xCE94F70)
#define RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xCE93B50)
#define RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET UNITYSDK_OFFSET(0xCE94F00)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0xCE94E30)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET UNITYSDK_OFFSET(0xCE94E80)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCE94B80)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xCE94DF0)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET UNITYSDK_OFFSET(0xCE92790)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET UNITYSDK_OFFSET(0xCE925C0)
#define RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xCE8ACF0)
#define RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xCE91270)
#define RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xCE8C560)
#define RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0xCE95220)
#define RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xCE92ED0)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET UNITYSDK_OFFSET(0xCE90680)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xCE90A20)
#define RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET UNITYSDK_OFFSET(0xCE95070)
#define RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xCE8B8B0)
#define RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCE933E0)
#define RPG_GAMECORE_RTBATTLEMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE95320)
#define RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xCE8F860)
#define RPG_GAMECORE_RTBATTLEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE95240)
#define RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCE93440)
#define RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0xCE8A7A0)
#define RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET UNITYSDK_OFFSET(0xCE8B460)
#define RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET UNITYSDK_OFFSET(0xCE8A750)
#define RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0xCE8F650)
#define RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE94A50)
#define RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET UNITYSDK_OFFSET(0xCE8D600)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xCE91B30)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET UNITYSDK_OFFSET(0xCE91DA0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET UNITYSDK_OFFSET(0xCE91540)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE91C60)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET UNITYSDK_OFFSET(0xCE91F40)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET UNITYSDK_OFFSET(0xCE91470)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET UNITYSDK_OFFSET(0xCE934A0)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET UNITYSDK_OFFSET(0xCE91D50)
#define RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET UNITYSDK_OFFSET(0xCE920D0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0xCE8D0C0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET UNITYSDK_OFFSET(0xCE8D500)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xCE8D550)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xCE8D5B0)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET UNITYSDK_OFFSET(0xCE94760)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0xCE8BD90)
#define RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE92510)
#define RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET UNITYSDK_OFFSET(0xCE90960)
#define RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE94D30)
#define RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0xCE8BFE0)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET UNITYSDK_OFFSET(0xCE90030)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET UNITYSDK_OFFSET(0xCE910B0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE95790)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xCE956D0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xCE95490)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONLOAD_OFFSET UNITYSDK_OFFSET(0xCE95550)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xCE95430)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xCE95610)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0xCE95670)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCE954F0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xCE955B0)
#define RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCE95730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode_TypeDefinitionIndex = 50717;

	class RtBattleMode : public ::Class_1_A6A0F51F0E51089E
	{
	public:
		static ::System::String** StaticGet_SpeicalEquipID_Key()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__AvatarPromotionIDDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}
		static ::System::String** StaticGet_TargetOperationConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTag_SpecialEquipment()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::System::String** StaticGet_TargetAliasConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		// static const ::System::String* TeamEquipPropertyGroupName; // 0x0
		// static const ::System::String* AvatarSpecialEquipPropertyGroupName; // 0x0
		::Class_1_0ED7108EB7D9E344* _InitParam; // 0x38
		::Class_1_E7BD46EB43F1A06F* _RtTickContext; // 0x40
		::Class_1_8A333169D3B7AF8C* _StatisticsData; // 0x48
		::RPG::GameCore::GameEntity* _BossGrid; // 0x50
		::Class_1_D64959CBBD533335_3* _LocalPlayer; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _GridByTagDict; // 0x60
		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_8*>* _FrameSynchor; // 0x68
		::RPG::GameCore::GameWorld* _GameWorld; // 0x70
		::RPG::GameCore::RtBattleStageConfig* _StageConfig; // 0x78
		::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_3*>* _Players; // 0x80
		::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>* _NormalEquipList; // 0x88
		::Class_1_827373C1CEDFE355* _BattleLogicRandom; // 0x90
		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* _NormalEquipPropertyList; // 0x98
		::RPG::GameCore::ILBattleStageConfigRow* _StageRow; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_520D5FBF7CA3CFF9*>* _CharacterDieInfoList; // 0xA8
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_6B9FBCAC09C5F877*>* _CharacterSpecialEquipDataDict; // 0xB0
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

		::System::Void _OnEntityRevive(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_114* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_114*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET))(this, a1, a2, a3);
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

		static ::Class_0_16E4307DCC419505_480* BuildCharacterRowData(::Struct_2_CC68D5BDA05DE967 a1, ::RPG::GameCore::ILBattleStageConfigRow* a2, ::Class_1_0E0403D2B5AD79E8* a3)
		{
			return ((::Class_0_16E4307DCC419505_480*(*)(::Struct_2_CC68D5BDA05DE967, ::RPG::GameCore::ILBattleStageConfigRow*, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET))(a1, a2, a3);
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

		::Class_1_8A333169D3B7AF8C* get_StatisticsData()
		{
			return ((::Class_1_8A333169D3B7AF8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET))(this);
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

		::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_8*>* get_FrameSynchor()
		{
			return ((::RPG::GameCore::BaseFrameSynchor_2<::Class_2_A1F69E2229E56CFE*, ::Class_2_A48F3719AA1CF200_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
		}
	};
}

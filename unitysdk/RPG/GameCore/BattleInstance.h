#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_12.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_4.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_9AD7EC315F99B05E;
class Class_1_9CB24331611AE644;
class Class_1_DF769287778AC293;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_BATTLEINSTANCE_BATTLELEVELSTART_OFFSET UNITYSDK_OFFSET(0xB5CCBD0)
#define RPG_GAMECORE_BATTLEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5CC970)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET UNITYSDK_OFFSET(0xB5CD460)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB5CCDE0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETCURWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xB5CD5E0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUP2FROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xB5C5830)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xB5C5780)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xB5C56D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xB5C5620)
#define RPG_GAMECORE_BATTLEINSTANCE_GETNEXTWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xB5CD750)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xB5CD950)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xB5CD970)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xB5CD890)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xB5CD8B0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xB5CD990)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xB5CD930)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xB5CD9B0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB5CD910)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_GAMEWORLDREF_OFFSET UNITYSDK_OFFSET(0xB5CD870)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xB5CDF20)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xB5CDF00)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xB5CD9D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xB5CDF40)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xB5CD8D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xB5CD8F0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PRIMITIVEBATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xB5CD8A0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_TURNBASEDGAMEMODEREF_OFFSET UNITYSDK_OFFSET(0xB5CD880)
#define RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET UNITYSDK_OFFSET(0xB5CC5F0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB5CCC90)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xB5CC7E0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDVIEWMODE_OFFSET UNITYSDK_OFFSET(0xB5CC8A0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET UNITYSDK_OFFSET(0xB5CD590)
#define RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB5CCD70)
#define RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET UNITYSDK_OFFSET(0xB5CD510)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xB5CD960)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xB5CD980)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xB5CD8C0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xB5CD9A0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xB5CD940)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xB5CD9C0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB5CD920)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xB5CDF30)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xB5CDF10)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xB5CD9E0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xB5CDF50)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xB5CD8E0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xB5CD900)
#define RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xB5CCCF0)
#define RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xB5CC0B0)
#define RPG_GAMECORE_BATTLEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5CDF60)
#define RPG_GAMECORE_BATTLEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CADB0)
#define RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET UNITYSDK_OFFSET(0xB5CDDB0)
#define RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET UNITYSDK_OFFSET(0xB5CC170)
#define RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xB5CBEC0)
#define RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xB5CDA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance_TypeDefinitionIndex = 51634;

	class BattleInstance : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TurnBasedGameModeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance_TypeDefinitionIndex)->GetStaticField(0x43F50);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__GameWorldMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance_TypeDefinitionIndex)->GetStaticField(0x43F58);
		}
		// static const ::System::Int32 _MaxCheckTurnCount = 0x32; // 0x0
		::Class_1_827373C1CEDFE355* _BattleLogicRandom_k__BackingField; // 0x10
		::RPG::GameCore::BattleLineupData* _BattleLineupDataPrimitive; // 0x18
		::RPG::GameCore::BattleLineupData* _BattleLineupData; // 0x20
		::RPG::GameCore::GameWorld* _GameWorld; // 0x28
		::RPG::GameCore::TurnBasedGameMode* _TurnBasedGameMode; // 0x30
		::Class_1_9CB24331611AE644* _LogExport_k__BackingField; // 0x38
		::System::UInt32 _PlaneID_k__BackingField; // 0x40
		::System::UInt32 _DimensionID_k__BackingField; // 0x44
		::System::Boolean _EncryptTime_k__BackingField; // 0x48
		::System::Boolean _IsBattleServerSimulator_k__BackingField; // 0x49
		::System::Boolean AutoBattleAtStart; // 0x4A
		::System::Boolean ComplexSkillAIConsiderUltra; // 0x4B
		::System::UInt32 _BattleAreaID_k__BackingField; // 0x4C
		::System::UInt32 _BattleAreaGroupID_k__BackingField; // 0x50
		::System::UInt32 ClientIFixVersion; // 0x54
		::System::Boolean _IsTeamFormationExpansion_k__BackingField; // 0x58
		::System::Boolean _IsBattleDirectKill_k__BackingField; // 0x59
		::System::UInt32 BattleID; // 0x5C
		::System::UInt32 _BattleUnifiedAreaID_k__BackingField; // 0x60
		::System::Int32 SnapshotHashTurnCount; // 0x64
		::System::Int32 _LogicRandomSeed_k__BackingField; // 0x68
		::System::UInt32 _FloorID_k__BackingField; // 0x6C
		::Enum_3_0A3761FE34514D6C_12 BattleCheckResult; // 0x70

		::System::Void _ctor(::Struct_2_FEFADCB82FEB841E_4 pParams, ::RPG::GameCore::BattleLineupData* pLineupData, ::System::Int32 nLogicRandomSeed, ::System::UInt32 uBattleID, ::System::Boolean bEncryptTime)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_4, ::RPG::GameCore::BattleLineupData*, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__CTOR_OFFSET))(this, pParams, pLineupData, nLogicRandomSeed, uBattleID, bEncryptTime);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__CCTOR_OFFSET))();
		}

		::System::Boolean IsStageForbidAutoBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDAUTOBATTLE_OFFSET))(this);
		}

		::System::Boolean IsStageForbidViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDVIEWMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void BattleLevelStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_BATTLELEVELSTART_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void GenerateTurnSnapshot(::Class_1_DF769287778AC293*& pSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF769287778AC293*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET))(this, pSnapshot);
		}

		::Class_1_DF769287778AC293* GenerateTurnSnapshot_1()
		{
			return ((::Class_1_DF769287778AC293*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET))(this);
		}

		::System::Void SetComplexSkillAIConsiderUltraInBattle(::System::Boolean isActive, ::System::Boolean isFromReplay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET))(this, isActive, isFromReplay);
		}

		::System::Boolean IsTurnCheckNecessary(::System::Int32 nCurrentTurn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET))(this, nCurrentTurn);
		}

		::Class_1_9AD7EC315F99B05E* GetCurWaveParam()
		{
			return ((::Class_1_9AD7EC315F99B05E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETCURWAVEPARAM_OFFSET))(this);
		}

		::Class_1_9AD7EC315F99B05E* GetNextWaveParam()
		{
			return ((::Class_1_9AD7EC315F99B05E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETNEXTWAVEPARAM_OFFSET))(this);
		}

		::System::UInt32 GetHardLevelFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetHardLevelGroupFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELGROUPFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetEliteGroupFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUPFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetEliteGroup2FromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUP2FROMCURWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_GameWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_GAMEWORLDREF_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* get_TurnBasedGameModeRef()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_TURNBASEDGAMEMODEREF_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* get_BattleLineupDataRef()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELINEUPDATAREF_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* get_PrimitiveBattleLineupDataRef()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_PRIMITIVEBATTLELINEUPDATAREF_OFFSET))(this);
		}

		::Class_1_827373C1CEDFE355* get_BattleLogicRandom()
		{
			return ((::Class_1_827373C1CEDFE355*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_BattleLogicRandom(::Class_1_827373C1CEDFE355* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET))(this, value);
		}

		::System::Int32 get_LogicRandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET))(this);
		}

		::System::Void set_LogicRandomSeed(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET))(this, value);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET))(this);
		}

		::System::Void set_BattleAreaGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_BattleAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleUnifiedAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET))(this);
		}

		::System::Void set_BattleUnifiedAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET))(this, value);
		}

		::System::Boolean get_EncryptTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET))(this);
		}

		::System::Void set_EncryptTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsTeamFormationExpansion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET))(this);
		}

		::System::Void set_IsTeamFormationExpansion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET))(this, value);
		}

		::System::Void _RemoveBannedAvatarFromStage(::RPG::GameCore::BattleLineupData* pLineupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET))(this, pLineupData);
		}

		::System::Void _UpdateMazeBuffOwnerIndexOnLineupChange(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* oldTeam, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* newTeam, ::Il2CppArray<::RPG::GameCore::MazeBuffData*>*& mazeBuffDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::MazeBuffData*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET))(this, oldTeam, newTeam, mazeBuffDatas);
		}

		::System::Int32 _GetNewLineupIndex(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* oldTeam, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* newTeam, ::System::Int32 oldIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET))(this, oldTeam, newTeam, oldIndex);
		}

		::System::Void _AddSpecialAvatarFromStage(::RPG::GameCore::BattleLineupData*& pLineupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET))(this, pLineupData);
		}

		::System::Void _InitSpecialAvatarLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET))(this);
		}

		::System::Boolean IsAutoBattleAtStart(::Struct_2_FEFADCB82FEB841E_4 pParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET))(this, pParams);
		}

		::System::Boolean get_IsBattleServerSimulator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET))(this);
		}

		::System::Void set_IsBattleServerSimulator(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET))(this, value);
		}

		::System::Boolean get_IsBattleDirectKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET))(this);
		}

		::System::Void set_IsBattleDirectKill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET))(this, value);
		}

		::Class_1_9CB24331611AE644* get_LogExport()
		{
			return ((::Class_1_9CB24331611AE644*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET))(this);
		}

		::System::Void set_LogExport(::Class_1_9CB24331611AE644* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CB24331611AE644*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET))(this, value);
		}
	};
}

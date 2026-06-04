#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_12.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_4.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_9AD7EC315F99B05E;
class Class_1_B3D92372F8A5AB74;
class Class_1_F26BC643149F1FD3;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_BATTLEINSTANCE_BATTLELEVELSTART_OFFSET UNITYSDK_OFFSET(0xCD320B0)
#define RPG_GAMECORE_BATTLEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD31E60)
#define RPG_GAMECORE_BATTLEINSTANCE_ENABLEFULLYAGENTBATTLE_OFFSET UNITYSDK_OFFSET(0xCD33570)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET UNITYSDK_OFFSET(0xCD32980)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCD322C0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETCURWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xCD32BA0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUP2FROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xCD2A7C0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xCD2A710)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xCD2A670)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xCD2A5D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETNEXTWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xCD32D40)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xCD32F70)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xCD32F90)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xCD32EB0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xCD32ED0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xCD32FB0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_COMPLEXSKILLAICONSIDERULTRA_OFFSET UNITYSDK_OFFSET(0xCD32AF0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xCD32F50)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xCD32FD0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCD32F30)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_GAMEWORLDREF_OFFSET UNITYSDK_OFFSET(0xCD32E90)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xCD33510)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xCD334F0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISFULLYAGENTBATTLE_OFFSET UNITYSDK_OFFSET(0xCD33560)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xCD32FF0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xCD33540)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xCD32EF0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xCD32F10)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PRIMITIVEBATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xCD32EC0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_TURNBASEDGAMEMODEREF_OFFSET UNITYSDK_OFFSET(0xCD32EA0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET UNITYSDK_OFFSET(0xCD31AE0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCD32170)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xCD31CD0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDVIEWMODE_OFFSET UNITYSDK_OFFSET(0xCD31DA0)
#define RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET UNITYSDK_OFFSET(0xCD32B50)
#define RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD32250)
#define RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET UNITYSDK_OFFSET(0xCD32A30)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xCD32F80)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xCD32FA0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xCD32EE0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xCD32FC0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_COMPLEXSKILLAICONSIDERULTRA_OFFSET UNITYSDK_OFFSET(0xCD33530)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xCD32F60)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xCD32FE0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCD32F40)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xCD33520)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xCD33500)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xCD33000)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xCD33550)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xCD32F00)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xCD32F20)
#define RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xCD321D0)
#define RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xCD31620)
#define RPG_GAMECORE_BATTLEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD335C0)
#define RPG_GAMECORE_BATTLEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD30230)
#define RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET UNITYSDK_OFFSET(0xCD33390)
#define RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET UNITYSDK_OFFSET(0xCD316E0)
#define RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xCD31420)
#define RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xCD33020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance_TypeDefinitionIndex = 52307;

	class BattleInstance : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TurnBasedGameModeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance_TypeDefinitionIndex)->GetStaticField(0x66190);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__GameWorldMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance_TypeDefinitionIndex)->GetStaticField(0x66198);
		}
		// static const ::System::Int32 _MaxCheckTurnCount = 0x32; // 0x0
		::Class_1_827373C1CEDFE355* _BattleLogicRandom_k__BackingField; // 0x10
		::RPG::GameCore::BattleLineupData* _BattleLineupDataPrimitive; // 0x18
		::RPG::GameCore::BattleLineupData* _BattleLineupData; // 0x20
		::Class_1_B3D92372F8A5AB74* _LogExport_k__BackingField; // 0x28
		::RPG::GameCore::TurnBasedGameMode* _TurnBasedGameMode; // 0x30
		::RPG::GameCore::GameWorld* _GameWorld; // 0x38
		::Enum_3_0A3761FE34514D6C_12 BattleCheckResult; // 0x40
		::System::Int32 SnapshotHashTurnCount; // 0x44
		::System::UInt32 _BattleAreaGroupID_k__BackingField; // 0x48
		::System::UInt32 _PlaneID_k__BackingField; // 0x4C
		::System::UInt32 BattleID; // 0x50
		::System::UInt32 _FloorID_k__BackingField; // 0x54
		::System::Boolean _IsTeamFormationExpansion_k__BackingField; // 0x58
		::System::Boolean _EncryptTime_k__BackingField; // 0x59
		::System::Boolean AutoBattleAtStart; // 0x5A
		::System::Boolean _IsBattleServerSimulator_k__BackingField; // 0x5B
		::System::Boolean _ComplexSkillAIConsiderUltra; // 0x5C
		::System::Boolean _IsBattleDirectKill_k__BackingField; // 0x5D
		::System::Boolean _IsFullyAgentBattle; // 0x5E
		::System::Int32 _LogicRandomSeed_k__BackingField; // 0x60
		::System::UInt32 _BattleAreaID_k__BackingField; // 0x64
		::System::UInt32 ClientIFixVersion; // 0x68
		::System::UInt32 _BattleUnifiedAreaID_k__BackingField; // 0x6C
		::System::UInt32 _DimensionID_k__BackingField; // 0x70

		::System::Void _ctor(::Struct_2_FEFADCB82FEB841E_4 a1, ::RPG::GameCore::BattleLineupData* a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_4, ::RPG::GameCore::BattleLineupData*, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void GenerateTurnSnapshot(::Class_1_F26BC643149F1FD3*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F26BC643149F1FD3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET))(this, a1);
		}

		::Class_1_F26BC643149F1FD3* GenerateTurnSnapshot_1()
		{
			return ((::Class_1_F26BC643149F1FD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET))(this);
		}

		::System::Void SetComplexSkillAIConsiderUltraInBattle(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTurnCheckNecessary(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET))(this, a1);
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

		::System::Void set_BattleLogicRandom(::Class_1_827373C1CEDFE355* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET))(this, a1);
		}

		::System::Int32 get_LogicRandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET))(this);
		}

		::System::Void set_LogicRandomSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET))(this);
		}

		::System::Void set_BattleAreaGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_BattleAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleUnifiedAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET))(this);
		}

		::System::Void set_BattleUnifiedAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET))(this, a1);
		}

		::System::Boolean get_EncryptTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET))(this);
		}

		::System::Void set_EncryptTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeamFormationExpansion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET))(this);
		}

		::System::Void set_IsTeamFormationExpansion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET))(this, a1);
		}

		::System::Void _RemoveBannedAvatarFromStage(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET))(this, a1);
		}

		::System::Void _UpdateMazeBuffOwnerIndexOnLineupChange(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a1, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a2, ::Il2CppArray<::RPG::GameCore::MazeBuffData*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::MazeBuffData*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _GetNewLineupIndex(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a1, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddSpecialAvatarFromStage(::RPG::GameCore::BattleLineupData*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET))(this, a1);
		}

		::System::Void _InitSpecialAvatarLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET))(this);
		}

		::System::Boolean IsAutoBattleAtStart(::Struct_2_FEFADCB82FEB841E_4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleServerSimulator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET))(this);
		}

		::System::Void set_IsBattleServerSimulator(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleDirectKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET))(this);
		}

		::System::Void set_IsBattleDirectKill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET))(this, a1);
		}

		::System::Boolean get_ComplexSkillAIConsiderUltra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_COMPLEXSKILLAICONSIDERULTRA_OFFSET))(this);
		}

		::System::Void set_ComplexSkillAIConsiderUltra(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_COMPLEXSKILLAICONSIDERULTRA_OFFSET))(this, a1);
		}

		::Class_1_B3D92372F8A5AB74* get_LogExport()
		{
			return ((::Class_1_B3D92372F8A5AB74*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET))(this);
		}

		::System::Void set_LogExport(::Class_1_B3D92372F8A5AB74* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3D92372F8A5AB74*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFullyAgentBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISFULLYAGENTBATTLE_OFFSET))(this);
		}

		::System::Void EnableFullyAgentBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ENABLEFULLYAGENTBATTLE_OFFSET))(this, a1);
		}
	};
}

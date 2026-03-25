#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
class Class_1_6B41D5D37BA0605F;
class Class_1_CA3918258B4D86BD;
class Class_1_DD365D3DF2F2F979;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91BBED0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHMAZEINFO_OFFSET UNITYSDK_OFFSET(0x91BC180)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHREPLAYINFO_OFFSET UNITYSDK_OFFSET(0x91BCD50)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERREPLAYWITHMAZEINFO_OFFSET UNITYSDK_OFFSET(0x91BCA50)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x91BBF20)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETENVIROMNENTPROFILEBYPLANEANDFLOOR_OFFSET UNITYSDK_OFFSET(0x91BC130)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x91BC830)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GET_ISBATTLEENTERING_OFFSET UNITYSDK_OFFSET(0x91BD0A0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x91BC740)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x91BC7A0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x91BC6E0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x91BBEC0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERBATTLEWITHMAZEINFONEXTFRAME_OFFSET UNITYSDK_OFFSET(0x91BC930)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERREPLAYWITHMAZEINFONEXTFRAME_OFFSET UNITYSDK_OFFSET(0x91BC9C0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x91BD0B0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__INITUI_OFFSET UNITYSDK_OFFSET(0x91BC880)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLineupGamePhase_TypeDefinitionIndex = 49449;

	class BattleLineupGamePhase : public ::System::Object
	{
	public:
		static ::Class_1_DD365D3DF2F2F979** StaticGet_LastInitParam()
		{
			return (::Class_1_DD365D3DF2F2F979**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupGamePhase_TypeDefinitionIndex)->GetStaticField(0xC6D0);
		}
		::Class_1_CA3918258B4D86BD* _ReplayData; // 0x10
		::System::String* _EnviroProfile; // 0x18
		::RPG::Client::EnvironmentSystem* _EnvironmentSystem; // 0x20
		::RPG::GameCore::BattleLineupData* _BattleLineupData; // 0x28
		::Class_1_DD365D3DF2F2F979* _InitParam; // 0x30
		::System::String* _ReplayPath; // 0x38
		::System::UInt32 _PlaneID; // 0x40
		::System::UInt32 _GroupID; // 0x44
		::System::UInt32 _UnifiedBattleAreaID; // 0x48
		::System::Boolean _IsBattleEntering; // 0x4C
		::System::Boolean _SkipVerify; // 0x4D
		::System::Boolean _Simulate; // 0x4E
		::System::Boolean TriggerBattleFromDevPage; // 0x4F
		::System::UInt32 _FloorID; // 0x50
		::System::Nullable_1<::System::Int32> _LogicRandomSeedOverride; // 0x54
		::System::UInt32 _BattleAreaID; // 0x5C
		::System::Boolean _AutoBattle; // 0x60
		::System::Boolean _DirectKill; // 0x61

		::System::Void _ctor(::Class_1_DD365D3DF2F2F979* initParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD365D3DF2F2F979*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__CTOR_OFFSET))(this, initParam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_LEAVE_OFFSET))(this, pNextPhase);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void _InitUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__INITUI_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* _EnterBattleWithMazeInfoNextFrame()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERBATTLEWITHMAZEINFONEXTFRAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* _EnterReplayWithMazeInfoNextFrame()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERREPLAYWITHMAZEINFONEXTFRAME_OFFSET))(this);
		}

		static ::System::String* GetEnviromnentProfileByPlaneAndFloor(::System::UInt32 planeID, ::System::UInt32 floorID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETENVIROMNENTPROFILEBYPLANEANDFLOOR_OFFSET))(planeID, floorID);
		}

		::System::Void EnterBattleWithMazeInfo(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID, ::RPG::GameCore::BattleLineupData* battleLineupData, ::System::String* enviroProfile, ::System::Nullable_1<::System::Int32> logicRandomSeed, ::System::UInt32 unifiedBattleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::BattleLineupData*, ::System::String*, ::System::Nullable_1<::System::Int32>, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHMAZEINFO_OFFSET))(this, planeID, floorID, groupID, battleAreaID, battleLineupData, enviroProfile, logicRandomSeed, unifiedBattleAreaID);
		}

		::System::Void EnterReplayWithMazeInfo(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groudID, ::System::UInt32 battleAreaID, ::System::String* enviroProfile, ::System::String* sReplayFilePath, ::System::UInt32 unifiedConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERREPLAYWITHMAZEINFO_OFFSET))(this, planeID, floorID, groudID, battleAreaID, enviroProfile, sReplayFilePath, unifiedConfigID);
		}

		::System::Void EnterBattleWithReplayInfo(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groudID, ::System::UInt32 battleAreaID, ::System::String* enviroProfile, ::System::String* sReplayFilePath, ::System::UInt32 unifiedConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHREPLAYINFO_OFFSET))(this, planeID, floorID, groudID, battleAreaID, enviroProfile, sReplayFilePath, unifiedConfigID);
		}

		::System::Boolean get_IsBattleEntering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GET_ISBATTLEENTERING_OFFSET))(this);
		}

		::System::Void _Enter_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTER_B__2_0_OFFSET))(this);
		}
	};
}

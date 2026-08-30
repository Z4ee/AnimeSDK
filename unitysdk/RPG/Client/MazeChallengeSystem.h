#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MazeChallengeData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZECHALLENGESYSTEM_ADDMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET UNITYSDK_OFFSET(0xD68A560)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CANCELMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD689F60)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CLEAREXECUTER_OFFSET UNITYSDK_OFFSET(0xD688EF0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_CREATEMAZECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD689110)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD688B00)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_FAILMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD6882D0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_FINISHMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD688400)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GETMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD68A0E0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GET_CURRENTEVENTDICTIONARY_OFFSET UNITYSDK_OFFSET(0xD68B570)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_GET_TIMERLOCK_OFFSET UNITYSDK_OFFSET(0xD68B550)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xD688990)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_PREPAREFINISHMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD68A290)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_REMOVECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD68A190)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZECHALLENGECALLBACK_OFFSET UNITYSDK_OFFSET(0xD6895C0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET UNITYSDK_OFFSET(0xD68A600)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEREMAINSTEP_OFFSET UNITYSDK_OFFSET(0xD68A420)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SET_TIMERLOCK_OFFSET UNITYSDK_OFFSET(0xD68B560)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_SOLVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD68B160)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xD68A6A0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM_WAITPREPAREENDMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD68A320)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CANCELMAZEPUZZLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xD689FE0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD68B7B0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD688500)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGECANCEL_OFFSET UNITYSDK_OFFSET(0xD68B750)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGERESET_OFFSET UNITYSDK_OFFSET(0xD68B600)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONSPECIALUICLOSE_OFFSET UNITYSDK_OFFSET(0xD68B580)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__ONUICHALLENGEENTER_OFFSET UNITYSDK_OFFSET(0xD689DD0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__REGEVENT_OFFSET UNITYSDK_OFFSET(0xD6889E0)
#define RPG_CLIENT_MAZECHALLENGESYSTEM__UNREGEVENT_OFFSET UNITYSDK_OFFSET(0xD688DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeSystem_TypeDefinitionIndex = 61004;

	class MazeChallengeSystem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DeleteList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MazeChallengeSystem_TypeDefinitionIndex)->GetStaticField(0x668D0);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _SuccIdList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>* _CurrentMazeChallengeDict; // 0x18
		::System::Collections::Generic::List_1<::Class_1_F3391C70DC37088D*>* _FinishAndDeleteList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropComponent*>* _CurrentPropCmpt; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnWaitPrepareEndExecuter; // 0x30
		::RPG::Client::AdventurePhase* _AdventurePhaseRef; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnFailExecuter; // 0x40
		::RPG::Client::LuaUIController* _UIController; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnResetExecuter; // 0x50
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _CachedRemovingMazeChallenge; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _FailIdList; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnCancelExecuter; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>* _OnUIEnterExecuter; // 0x78
		::System::Boolean _TimerLock; // 0x80

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateMazeChallenge(::System::UInt32 a1, ::RPG::GameCore::PropComponent* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropComponent*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CREATEMAZECHALLENGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetMazeChallengeCallback(::System::UInt32 a1, ::RPG::GameCore::TaskContext* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZECHALLENGECALLBACK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _OnUIChallengeEnter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONUICHALLENGEENTER_OFFSET))(this, a1);
		}

		::System::Void CancelMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CANCELMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _CancelMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__CANCELMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void FailMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_FAILMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void FinishMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_FINISHMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void PrepareFinishMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_PREPAREFINISHMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void WaitPrepareEndMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_WAITPREPAREENDMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void SetMazePuzzleChallengeRemainStep(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEREMAINSTEP_OFFSET))(this, a1, a2);
		}

		::System::Void AddMazePuzzleChallengeFinParamListFinish(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_ADDMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMazePuzzleChallengeFinParamListFinish(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SETMAZEPUZZLECHALLENGEFINPARAMLISTFINISH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MazeChallengeData* GetMazePuzzleChallenge(::System::UInt32 a1)
		{
			return ((::RPG::Client::MazeChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GETMAZEPUZZLECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_TICK_OFFSET))(this, a1);
		}

		::System::Void SolveCallback(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SOLVECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_TimerLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GET_TIMERLOCK_OFFSET))(this);
		}

		::System::Void set_TimerLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_SET_TIMERLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>* get_CurrentEventDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MazeChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_GET_CURRENTEVENTDICTIONARY_OFFSET))(this);
		}

		::System::Void _RegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__REGEVENT_OFFSET))(this);
		}

		::System::Void _UnRegEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__UNREGEVENT_OFFSET))(this);
		}

		::System::Void _OnSpecialUIClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONSPECIALUICLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnChallengeReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGERESET_OFFSET))(this, a1);
		}

		::System::Void _OnChallengeCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM__ONCHALLENGECANCEL_OFFSET))(this, a1);
		}

		::System::Void RemoveChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_REMOVECHALLENGE_OFFSET))(this, a1);
		}

		::System::Void ClearExecuter(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3391C70DC37088D*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGESYSTEM_CLEAREXECUTER_OFFSET))(this, a1);
		}
	};
}

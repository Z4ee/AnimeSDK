#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
class Class_1_5F51D4049EA87B7B;
class Class_1_6B41D5D37BA0605F;
class Class_1_BD800F5B29A08E1F;
class Class_2_9D4DD2F4235F8658;
namespace RPG::Client { class IConsiderationAxisLuaHack; }
namespace RPG::Client { class ICsToLua; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class IGamePhaseLuaHack; }
namespace RPG::Client { class ITaskLuaHack; }
namespace RPG::Client { class LuaFileVisitor; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T> class XLuaActionNoRet1_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Coroutine; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaEnv_CustomLoader; }
namespace XLua { class LuaFunction; }
namespace XLua { class LuaMemoryLeakChecker_Data; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUASYSTEM_ADDLUALOADER_OFFSET UNITYSDK_OFFSET(0x9A77DC0)
#define RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_1_OFFSET UNITYSDK_OFFSET(0x9A78190)
#define RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_OFFSET UNITYSDK_OFFSET(0x9A78050)
#define RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_1_OFFSET UNITYSDK_OFFSET(0x9A77F90)
#define RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_OFFSET UNITYSDK_OFFSET(0x9A76410)
#define RPG_CLIENT_LUASYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A762A0)
#define RPG_CLIENT_LUASYSTEM_DOFILE_OFFSET UNITYSDK_OFFSET(0x9A77850)
#define RPG_CLIENT_LUASYSTEM_DOSTRING_OFFSET UNITYSDK_OFFSET(0x9A76D40)
#define RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXISSCOREHACK_OFFSET UNITYSDK_OFFSET(0x9A755D0)
#define RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXIXSETUPHACK_OFFSET UNITYSDK_OFFSET(0x9A75450)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASEENTERHACK_OFFSET UNITYSDK_OFFSET(0x9A75700)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELATEUPDATEHACK_OFFSET UNITYSDK_OFFSET(0x9A75960)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELEAVEHACK_OFFSET UNITYSDK_OFFSET(0x9A75A90)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASETICKHACK_OFFSET UNITYSDK_OFFSET(0x9A75820)
#define RPG_CLIENT_LUASYSTEM_ENDTASKBEGINLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A750E0)
#define RPG_CLIENT_LUASYSTEM_ENDTASKRESETLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A74FE0)
#define RPG_CLIENT_LUASYSTEM_ENDTASKSKIPLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A75320)
#define RPG_CLIENT_LUASYSTEM_ENDTASKTICKLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A75200)
#define RPG_CLIENT_LUASYSTEM_FINISHTABLEJOB_OFFSET UNITYSDK_OFFSET(0x9A78260)
#define RPG_CLIENT_LUASYSTEM_FORCEGC_OFFSET UNITYSDK_OFFSET(0x9A77E40)
#define RPG_CLIENT_LUASYSTEM_GETLUAFUNCTION_OFFSET UNITYSDK_OFFSET(0x9A777A0)
#define RPG_CLIENT_LUASYSTEM_GETLUASTATE_OFFSET UNITYSDK_OFFSET(0x9A76B40)
#define RPG_CLIENT_LUASYSTEM_GETLUATABLE_OFFSET UNITYSDK_OFFSET(0x9A776F0)
#define RPG_CLIENT_LUASYSTEM_GETTABLEPROMISE_OFFSET UNITYSDK_OFFSET(0x9A782B0)
#define RPG_CLIENT_LUASYSTEM_GET_CSTOLUA_OFFSET UNITYSDK_OFFSET(0x9A78880)
#define RPG_CLIENT_LUASYSTEM_GET_GCTIMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x9A75F50)
#define RPG_CLIENT_LUASYSTEM_GET_INLUATICK_OFFSET UNITYSDK_OFFSET(0x9A76840)
#define RPG_CLIENT_LUASYSTEM_GET_LUAFILEVISITOR_OFFSET UNITYSDK_OFFSET(0x9A76700)
#define RPG_CLIENT_LUASYSTEM_INCREASMENTGC_OFFSET UNITYSDK_OFFSET(0x9A76A40)
#define RPG_CLIENT_LUASYSTEM_INITLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A74210)
#define RPG_CLIENT_LUASYSTEM_INITLUASCRIPT_OFFSET UNITYSDK_OFFSET(0x9A76B90)
#define RPG_CLIENT_LUASYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x9A76110)
#define RPG_CLIENT_LUASYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A76AB0)
#define RPG_CLIENT_LUASYSTEM_LOADMODULE_OFFSET UNITYSDK_OFFSET(0x9A744F0)
#define RPG_CLIENT_LUASYSTEM_LOADPROTOLUA_OFFSET UNITYSDK_OFFSET(0x9A741D0)
#define RPG_CLIENT_LUASYSTEM_LUAENV_OFFSET UNITYSDK_OFFSET(0x9A766B0)
#define RPG_CLIENT_LUASYSTEM_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x9A78360)
#define RPG_CLIENT_LUASYSTEM_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0x9A783C0)
#define RPG_CLIENT_LUASYSTEM_NEEDFINISHTABLEJOB_OFFSET UNITYSDK_OFFSET(0x9A78210)
#define RPG_CLIENT_LUASYSTEM_QUERYLUAPATH_OFFSET UNITYSDK_OFFSET(0x9A77D00)
#define RPG_CLIENT_LUASYSTEM_REINITLUAENV_OFFSET UNITYSDK_OFFSET(0x9A764E0)
#define RPG_CLIENT_LUASYSTEM_RUNCONTEXT_OFFSET UNITYSDK_OFFSET(0x9A76710)
#define RPG_CLIENT_LUASYSTEM_SETDEFINESTATE_OFFSET UNITYSDK_OFFSET(0x9A78650)
#define RPG_CLIENT_LUASYSTEM_SET_CSTOLUA_OFFSET UNITYSDK_OFFSET(0x9A78890)
#define RPG_CLIENT_LUASYSTEM_SET_GCTIMEINTERVAL_OFFSET UNITYSDK_OFFSET(0x9A75FB0)
#define RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXISSCOREHACK_OFFSET UNITYSDK_OFFSET(0x9A75500)
#define RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXIXSETUPHACK_OFFSET UNITYSDK_OFFSET(0x9A753A0)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASEENTERHACK_OFFSET UNITYSDK_OFFSET(0x9A75680)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELATEUPDATEHACK_OFFSET UNITYSDK_OFFSET(0x9A758C0)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELEAVEHACK_OFFSET UNITYSDK_OFFSET(0x9A75A00)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASETICKHACK_OFFSET UNITYSDK_OFFSET(0x9A75780)
#define RPG_CLIENT_LUASYSTEM_STARTINCREASEMENTGC_OFFSET UNITYSDK_OFFSET(0x9A76920)
#define RPG_CLIENT_LUASYSTEM_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x9A78300)
#define RPG_CLIENT_LUASYSTEM_STARTTASKBEGINLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A75060)
#define RPG_CLIENT_LUASYSTEM_STARTTASKRESETLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A74F60)
#define RPG_CLIENT_LUASYSTEM_STARTTASKSKIPLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A752A0)
#define RPG_CLIENT_LUASYSTEM_STARTTASKTICKLUAHACK_OFFSET UNITYSDK_OFFSET(0x9A75160)
#define RPG_CLIENT_LUASYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x9A767B0)
#define RPG_CLIENT_LUASYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A788A0)
#define RPG_CLIENT_LUASYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9A75B20)
#define RPG_CLIENT_LUASYSTEM__GETGLOBALINTERFACE_OFFSET UNITYSDK_OFFSET(0x9A76DC0)
#define RPG_CLIENT_LUASYSTEM__INITCONSIDERATIONAXISLUAHACKS_OFFSET UNITYSDK_OFFSET(0x9A74940)
#define RPG_CLIENT_LUASYSTEM__INITGAMEPHASELUAHACKS_OFFSET UNITYSDK_OFFSET(0x9A74C50)
#define RPG_CLIENT_LUASYSTEM__INITTASKLUAHACKS_OFFSET UNITYSDK_OFFSET(0x9A74630)
#define RPG_CLIENT_LUASYSTEM__ONREQUIRELUA_OFFSET UNITYSDK_OFFSET(0x9A779D0)
#define RPG_CLIENT_LUASYSTEM__REGISTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0x9A77090)
#define RPG_CLIENT_LUASYSTEM__REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x9A772C0)
#define RPG_CLIENT_LUASYSTEM__SETDEFINES_OFFSET UNITYSDK_OFFSET(0x9A76CD0)
#define RPG_CLIENT_LUASYSTEM__SETDEFINE_OFFSET UNITYSDK_OFFSET(0x9A78430)
#define RPG_CLIENT_LUASYSTEM__TICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A76880)
#define RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_0_OFFSET UNITYSDK_OFFSET(0x9A788D0)
#define RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_1_OFFSET UNITYSDK_OFFSET(0x9A789B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaSystem_TypeDefinitionIndex = 48071;

	class LuaSystem : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLuaUpdateContext()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0x28010);
		}
		static ::System::Boolean* StaticGet_inLuaTick()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xD220);
		}
		static ::System::Boolean* StaticGet_UseLuaIncrementGC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xD221);
		}
		static ::System::Int32* StaticGet_LuaGcStep()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xD224);
		}
		// static const ::System::Single TICK_INTERVAL; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseTickHacks; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LuaMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseLateUpdateHacks; // 0x20
		::Class_1_23F67DD15593C8D6* _TickTimer; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskTickHacks; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _StartConsiderationAxisScoreHacks; // 0x38
		::UnityEngine::Coroutine* _gcCoroutine; // 0x40
		::RPG::Client::RPGProfilerMarker* _luaGcMarker; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* _ExcludeLuaFileFilter; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _EndConsiderationAxisSetupHacks; // 0x58
		::System::Diagnostics::Stopwatch* loadingWatch; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskResetHacks; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _StartConsiderationAxisSetupHacks; // 0x70
		::XLua::LuaTable* _G; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseLateUpdateHacks; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseLeaveHacks; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskBeginHacks; // 0x90
		::RPG::Client::ICsToLua* _CsToLua_k__BackingField; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskBeginHacks; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseEnterHacks; // 0xA8
		::RPG::Client::XLuaActionNoRet1_1<::System::Single>* _UpdateContext; // 0xB0
		::RPG::Client::Promises::Promise* tablePromise; // 0xB8
		::XLua::LuaMemoryLeakChecker_Data* _LuaMemoryLeakCheckerData; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseLeaveHacks; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _EndConsiderationAxisScoreHacks; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskTickHacks; // 0xD8
		::System::String* _LuaHackConfigPathPrefix; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseTickHacks; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskSkipHacks; // 0xF0
		::UnityEngine::Coroutine* xluaReflectionTypeCoroutine; // 0xF8
		::Class_1_23F67DD15593C8D6* _AutoGcTimer; // 0x100
		::XLua::LuaEnv* _LuaEnv; // 0x108
		::RPG::Client::LuaFileVisitor* _LuaFileVisitor; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseEnterHacks; // 0x118
		::System::String* _LuaHackConfigPath; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskSkipHacks; // 0x128
		::UnityEngine::Coroutine* tableCoroutine; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskResetHacks; // 0x138
		::RPG::Client::XLuaActionNoRet1_1<::System::Single>* _LateUpdateContext; // 0x140
		::System::Boolean _IsNeedUpdate; // 0x148
		::System::Boolean _tableImmediatelyDone; // 0x149

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__CCTOR_OFFSET))();
		}

		::System::Void InitLuaHack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INITLUAHACK_OFFSET))(this);
		}

		::System::Boolean StartTaskResetLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKRESETLUAHACK_OFFSET))(this, task);
		}

		::System::Void EndTaskResetLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKRESETLUAHACK_OFFSET))(this, task);
		}

		::System::Boolean StartTaskBeginLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKBEGINLUAHACK_OFFSET))(this, task);
		}

		::System::Void EndTaskBeginLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKBEGINLUAHACK_OFFSET))(this, task);
		}

		::System::Boolean StartTaskTickLuaHack(::Class_1_5F51D4049EA87B7B* task, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKTICKLUAHACK_OFFSET))(this, task, fElapsedTimeInSec);
		}

		::System::Void EndTaskTickLuaHack(::Class_1_5F51D4049EA87B7B* task, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKTICKLUAHACK_OFFSET))(this, task, fElapsedTimeInSec);
		}

		::System::Boolean StartTaskSkipLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKSKIPLUAHACK_OFFSET))(this, task);
		}

		::System::Void EndTaskSkipLuaHack(::Class_1_5F51D4049EA87B7B* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKSKIPLUAHACK_OFFSET))(this, task);
		}

		::System::Boolean StartConsiderationAxixSetupHack(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_2_9D4DD2F4235F8658* axisParent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_9D4DD2F4235F8658*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXIXSETUPHACK_OFFSET))(this, config, axisParent);
		}

		::System::Void EndConsiderationAxixSetupHack(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_2_9D4DD2F4235F8658* axisParent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_9D4DD2F4235F8658*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXIXSETUPHACK_OFFSET))(this, config, axisParent);
		}

		::System::Boolean StartConsiderationAxisScoreHack(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_1_BD800F5B29A08E1F* context, ::RPG::GameCore::FixPoint& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXISSCOREHACK_OFFSET))(this, config, context, result);
		}

		::System::Void EndConsiderationAxisScoreHack(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_1_BD800F5B29A08E1F* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXISSCOREHACK_OFFSET))(this, config, context);
		}

		::System::Boolean StartGamePhaseEnterHack(::RPG::Client::IGamePhase* gamePhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASEENTERHACK_OFFSET))(this, gamePhase);
		}

		::System::Void EndGamePhaseEnterHack(::RPG::Client::IGamePhase* gamePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASEENTERHACK_OFFSET))(this, gamePhase);
		}

		::System::Boolean StartGamePhaseTickHack(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASETICKHACK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Void EndGamePhaseTickHack(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASETICKHACK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Boolean StartGamePhaseLateUpdateHack(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELATEUPDATEHACK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Void EndGamePhaseLateUpdateHack(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELATEUPDATEHACK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Boolean StartGamePhaseLeaveHack(::RPG::Client::IGamePhase* gamePhase, ::Class_1_6B41D5D37BA0605F* nextPhaseInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELEAVEHACK_OFFSET))(this, gamePhase, nextPhaseInfo);
		}

		::System::Void EndGamePhaseLeaveHack(::RPG::Client::IGamePhase* gamePhase, ::Class_1_6B41D5D37BA0605F* nextPhaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELEAVEHACK_OFFSET))(this, gamePhase, nextPhaseInfo);
		}

		::System::Void _InitTaskLuaHacks(::Il2CppArray<::System::String*>* taskNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>*& hacks)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITTASKLUAHACKS_OFFSET))(this, taskNames, hacks);
		}

		::System::Void _InitConsiderationAxisLuaHacks(::Il2CppArray<::System::String*>* considerationAxisNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>*& hacks)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITCONSIDERATIONAXISLUAHACKS_OFFSET))(this, considerationAxisNames, hacks);
		}

		::System::Void _InitGamePhaseLuaHacks(::Il2CppArray<::System::String*>* gamephaseNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>*& hacks)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITGAMEPHASELUAHACKS_OFFSET))(this, gamephaseNames, hacks);
		}

		::System::Single get_GcTimeInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_GCTIMEINTERVAL_OFFSET))(this);
		}

		::System::Void set_GcTimeInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SET_GCTIMEINTERVAL_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void ReInitLuaEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_REINITLUAENV_OFFSET))(this);
		}

		static ::System::Int32 LoadProtoLua(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LOADPROTOLUA_OFFSET))(L);
		}

		::XLua::LuaEnv* LuaEnv()
		{
			return ((::XLua::LuaEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LUAENV_OFFSET))(this);
		}

		::RPG::Client::LuaFileVisitor* get_LuaFileVisitor()
		{
			return ((::RPG::Client::LuaFileVisitor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_LUAFILEVISITOR_OFFSET))(this);
		}

		::System::Void RunContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_RUNCONTEXT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_TICK_OFFSET))(this, delta);
		}

		static ::System::Boolean get_InLuaTick()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_INLUATICK_OFFSET))();
		}

		::System::Void _TickCallback(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__TICKCALLBACK_OFFSET))(this, delta);
		}

		::System::Void StartIncreasementGc(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTINCREASEMENTGC_OFFSET))(this, delta);
		}

		::System::Collections::IEnumerator* IncreasmentGc()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INCREASMENTGC_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LATEUPDATE_OFFSET))(this, delta);
		}

		::XLua::LuaEnv* GetLuaState()
		{
			return ((::XLua::LuaEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUASTATE_OFFSET))(this);
		}

		::System::Void InitLuaScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INITLUASCRIPT_OFFSET))(this);
		}

		::XLua::LuaTable* LoadModule(::System::String* luaPath)
		{
			return ((::XLua::LuaTable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LOADMODULE_OFFSET))(this, luaPath);
		}

		::XLua::LuaTable* GetLuaTable(::System::String* tableName, ::XLua::LuaTable* luaTable)
		{
			return ((::XLua::LuaTable*(*)(::PVOID, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUATABLE_OFFSET))(this, tableName, luaTable);
		}

		::XLua::LuaFunction* GetLuaFunction(::System::String* funcName, ::XLua::LuaTable* luaTable)
		{
			return ((::XLua::LuaFunction*(*)(::PVOID, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUAFUNCTION_OFFSET))(this, funcName, luaTable);
		}

		::Il2CppArray<::System::Object*>* DoString(::System::String* chunk, ::System::String* filename)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_DOSTRING_OFFSET))(this, chunk, filename);
		}

		::Il2CppArray<::System::Object*>* DoFile(::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_DOFILE_OFFSET))(this, fileName);
		}

		::Il2CppArray<::System::Byte>* _OnRequireLua(::System::String*& filePath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__ONREQUIRELUA_OFFSET))(this, filePath);
		}

		::System::String* QueryLuaPath(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_QUERYLUAPATH_OFFSET))(this, name);
		}

		::System::Void AddLuaLoader(::XLua::LuaEnv_CustomLoader* loader)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaEnv_CustomLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ADDLUALOADER_OFFSET))(this, loader);
		}

		::System::Void ForceGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_FORCEGC_OFFSET))(this);
		}

		::System::Void CallStaticMethodNotRet(::System::String* tableName, ::System::String* funcName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_OFFSET))(this, tableName, funcName);
		}

		::System::Void CallStaticMethodNotRet_1(::XLua::LuaTable* luaTable, ::System::String* funcName)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_1_OFFSET))(this, luaTable, funcName);
		}

		::System::Void CallObjectMethodNotRet(::System::String* tableName, ::System::String* funcName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_OFFSET))(this, tableName, funcName);
		}

		::System::Void CallObjectMethodNotRet_1(::XLua::LuaTable* luaTable, ::System::String* funcName)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_1_OFFSET))(this, luaTable, funcName);
		}

		::System::Void _GetGlobalInterface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__GETGLOBALINTERFACE_OFFSET))(this);
		}

		::System::Void _RegisterExcelTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__REGISTEREXCELTABLE_OFFSET))(this);
		}

		::System::Boolean NeedFinishTableJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_NEEDFINISHTABLEJOB_OFFSET))(this);
		}

		::System::Void FinishTableJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_FINISHTABLEJOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GetTablePromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETTABLEPROMISE_OFFSET))(this);
		}

		::System::Void _RegisterObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__REGISTEROBJECT_OFFSET))(this);
		}

		::System::Void StartMemoryLeakCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTMEMORYLEAKCHECK_OFFSET))(this);
		}

		::System::Void MemoryLeakCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_MEMORYLEAKCHECK_OFFSET))(this);
		}

		::System::Void MemoryLeakReport(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_MEMORYLEAKREPORT_OFFSET))(this, level);
		}

		::System::Void _SetDefines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__SETDEFINES_OFFSET))(this);
		}

		::System::Void _SetDefine(::System::String* define)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__SETDEFINE_OFFSET))(this, define);
		}

		::System::Void SetDefineState(::System::String* define, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SETDEFINESTATE_OFFSET))(this, define, value);
		}

		::RPG::Client::ICsToLua* get_CsToLua()
		{
			return ((::RPG::Client::ICsToLua*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_CSTOLUA_OFFSET))(this);
		}

		::System::Void set_CsToLua(::RPG::Client::ICsToLua* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ICsToLua*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SET_CSTOLUA_OFFSET))(this, value);
		}

		::System::Void __RegisterExcelTable_b__114_0(::System::Type* table, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_0_OFFSET))(this, table, data);
		}

		::System::Void __RegisterExcelTable_b__114_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_1_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
class Class_1_5F51D4049EA87B7B;
class Class_1_6B41D5D37BA0605F;
class Class_1_AC66714FF5876767;
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

#define RPG_CLIENT_LUASYSTEM_ADDLUALOADER_OFFSET UNITYSDK_OFFSET(0xBE8A150)
#define RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_1_OFFSET UNITYSDK_OFFSET(0xBE8A570)
#define RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_OFFSET UNITYSDK_OFFSET(0xBE8A430)
#define RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_1_OFFSET UNITYSDK_OFFSET(0xBE8A360)
#define RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_OFFSET UNITYSDK_OFFSET(0xBE63810)
#define RPG_CLIENT_LUASYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE883B0)
#define RPG_CLIENT_LUASYSTEM_DOFILE_OFFSET UNITYSDK_OFFSET(0xBE89CD0)
#define RPG_CLIENT_LUASYSTEM_DOSTRING_OFFSET UNITYSDK_OFFSET(0xBE88E00)
#define RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXISSCOREHACK_OFFSET UNITYSDK_OFFSET(0xBE87660)
#define RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXIXSETUPHACK_OFFSET UNITYSDK_OFFSET(0xBE874E0)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASEENTERHACK_OFFSET UNITYSDK_OFFSET(0xBE87790)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELATEUPDATEHACK_OFFSET UNITYSDK_OFFSET(0xBE879F0)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELEAVEHACK_OFFSET UNITYSDK_OFFSET(0xBE87B20)
#define RPG_CLIENT_LUASYSTEM_ENDGAMEPHASETICKHACK_OFFSET UNITYSDK_OFFSET(0xBE878B0)
#define RPG_CLIENT_LUASYSTEM_ENDTASKBEGINLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE87170)
#define RPG_CLIENT_LUASYSTEM_ENDTASKRESETLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE87070)
#define RPG_CLIENT_LUASYSTEM_ENDTASKSKIPLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE873B0)
#define RPG_CLIENT_LUASYSTEM_ENDTASKTICKLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE87290)
#define RPG_CLIENT_LUASYSTEM_FINISHTABLEJOB_OFFSET UNITYSDK_OFFSET(0xBE8A650)
#define RPG_CLIENT_LUASYSTEM_FORCEGC_OFFSET UNITYSDK_OFFSET(0xBE8A210)
#define RPG_CLIENT_LUASYSTEM_GETLUAFUNCTION_OFFSET UNITYSDK_OFFSET(0xBE89C20)
#define RPG_CLIENT_LUASYSTEM_GETLUASTATE_OFFSET UNITYSDK_OFFSET(0xBE88C00)
#define RPG_CLIENT_LUASYSTEM_GETLUATABLE_OFFSET UNITYSDK_OFFSET(0xBE89B70)
#define RPG_CLIENT_LUASYSTEM_GETTABLEPROMISE_OFFSET UNITYSDK_OFFSET(0xBE8A6A0)
#define RPG_CLIENT_LUASYSTEM_GET_CSTOLUA_OFFSET UNITYSDK_OFFSET(0xBE8AC60)
#define RPG_CLIENT_LUASYSTEM_GET_GCTIMEINTERVAL_OFFSET UNITYSDK_OFFSET(0xBE88000)
#define RPG_CLIENT_LUASYSTEM_GET_INLUATICK_OFFSET UNITYSDK_OFFSET(0xBE88900)
#define RPG_CLIENT_LUASYSTEM_GET_LUAFILEVISITOR_OFFSET UNITYSDK_OFFSET(0xBE887C0)
#define RPG_CLIENT_LUASYSTEM_INCREASMENTGC_OFFSET UNITYSDK_OFFSET(0xBE88B00)
#define RPG_CLIENT_LUASYSTEM_INITLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE86330)
#define RPG_CLIENT_LUASYSTEM_INITLUASCRIPT_OFFSET UNITYSDK_OFFSET(0xBE88C50)
#define RPG_CLIENT_LUASYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xBE881A0)
#define RPG_CLIENT_LUASYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE88B70)
#define RPG_CLIENT_LUASYSTEM_LOADMODULE_OFFSET UNITYSDK_OFFSET(0xBE86610)
#define RPG_CLIENT_LUASYSTEM_LOADPROTOLUA_OFFSET UNITYSDK_OFFSET(0xBE862F0)
#define RPG_CLIENT_LUASYSTEM_LUAENV_OFFSET UNITYSDK_OFFSET(0xBE88770)
#define RPG_CLIENT_LUASYSTEM_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0xBE8A740)
#define RPG_CLIENT_LUASYSTEM_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0xBE8A7A0)
#define RPG_CLIENT_LUASYSTEM_NEEDFINISHTABLEJOB_OFFSET UNITYSDK_OFFSET(0xBE8A600)
#define RPG_CLIENT_LUASYSTEM_QUERYLUAPATH_OFFSET UNITYSDK_OFFSET(0xBE8A090)
#define RPG_CLIENT_LUASYSTEM_REINITLUAENV_OFFSET UNITYSDK_OFFSET(0xBE88510)
#define RPG_CLIENT_LUASYSTEM_RUNCONTEXT_OFFSET UNITYSDK_OFFSET(0xBE887D0)
#define RPG_CLIENT_LUASYSTEM_SETDEFINESTATE_OFFSET UNITYSDK_OFFSET(0xBE8AA30)
#define RPG_CLIENT_LUASYSTEM_SET_CSTOLUA_OFFSET UNITYSDK_OFFSET(0xBE8AC70)
#define RPG_CLIENT_LUASYSTEM_SET_GCTIMEINTERVAL_OFFSET UNITYSDK_OFFSET(0xBE88050)
#define RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXISSCOREHACK_OFFSET UNITYSDK_OFFSET(0xBE87590)
#define RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXIXSETUPHACK_OFFSET UNITYSDK_OFFSET(0xBE87430)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASEENTERHACK_OFFSET UNITYSDK_OFFSET(0xBE87710)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELATEUPDATEHACK_OFFSET UNITYSDK_OFFSET(0xBE87950)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELEAVEHACK_OFFSET UNITYSDK_OFFSET(0xBE87A90)
#define RPG_CLIENT_LUASYSTEM_STARTGAMEPHASETICKHACK_OFFSET UNITYSDK_OFFSET(0xBE87810)
#define RPG_CLIENT_LUASYSTEM_STARTINCREASEMENTGC_OFFSET UNITYSDK_OFFSET(0xBE889E0)
#define RPG_CLIENT_LUASYSTEM_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0xBE8A6E0)
#define RPG_CLIENT_LUASYSTEM_STARTTASKBEGINLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE870F0)
#define RPG_CLIENT_LUASYSTEM_STARTTASKRESETLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE86FF0)
#define RPG_CLIENT_LUASYSTEM_STARTTASKSKIPLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE87330)
#define RPG_CLIENT_LUASYSTEM_STARTTASKTICKLUAHACK_OFFSET UNITYSDK_OFFSET(0xBE871F0)
#define RPG_CLIENT_LUASYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xBE88870)
#define RPG_CLIENT_LUASYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE8AC80)
#define RPG_CLIENT_LUASYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBE87BB0)
#define RPG_CLIENT_LUASYSTEM__GETGLOBALINTERFACE_OFFSET UNITYSDK_OFFSET(0xBE88E80)
#define RPG_CLIENT_LUASYSTEM__INITCONSIDERATIONAXISLUAHACKS_OFFSET UNITYSDK_OFFSET(0xBE86A30)
#define RPG_CLIENT_LUASYSTEM__INITGAMEPHASELUAHACKS_OFFSET UNITYSDK_OFFSET(0xBE86D10)
#define RPG_CLIENT_LUASYSTEM__INITTASKLUAHACKS_OFFSET UNITYSDK_OFFSET(0xBE86750)
#define RPG_CLIENT_LUASYSTEM__ONREQUIRELUA_OFFSET UNITYSDK_OFFSET(0xBE89D90)
#define RPG_CLIENT_LUASYSTEM__REGISTEREXCELTABLE_OFFSET UNITYSDK_OFFSET(0xBE890B0)
#define RPG_CLIENT_LUASYSTEM__REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0xBE89350)
#define RPG_CLIENT_LUASYSTEM__SETDEFINES_OFFSET UNITYSDK_OFFSET(0xBE88D90)
#define RPG_CLIENT_LUASYSTEM__SETDEFINE_OFFSET UNITYSDK_OFFSET(0xBE8A810)
#define RPG_CLIENT_LUASYSTEM__TICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE88940)
#define RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_0_OFFSET UNITYSDK_OFFSET(0xBE8ACB0)
#define RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_1_OFFSET UNITYSDK_OFFSET(0xBE8AD90)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaSystem_TypeDefinitionIndex = 55543;

	class LuaSystem : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLuaUpdateContext()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0x50420);
		}
		static ::System::Boolean* StaticGet_UseLuaIncrementGC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xFB40);
		}
		static ::System::Boolean* StaticGet_inLuaTick()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xFB41);
		}
		static ::System::Int32* StaticGet_LuaGcStep()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LuaSystem_TypeDefinitionIndex)->GetStaticField(0xFB44);
		}
		// static const ::System::Single TICK_INTERVAL; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseTickHacks; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseLeaveHacks; // 0x18
		::Class_1_23F67DD15593C8D6* _AutoGcTimer; // 0x20
		::UnityEngine::Coroutine* _gcCoroutine; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseLeaveHacks; // 0x30
		::Class_1_23F67DD15593C8D6* _TickTimer; // 0x38
		::RPG::Client::Promises::Promise* tablePromise; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskSkipHacks; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseTickHacks; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _EndConsiderationAxisSetupHacks; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskTickHacks; // 0x60
		::RPG::Client::LuaFileVisitor* _LuaFileVisitor; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseLateUpdateHacks; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _EndGamePhaseEnterHacks; // 0x78
		::RPG::Client::RPGProfilerMarker* _luaGcMarker; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskResetHacks; // 0x88
		::System::Diagnostics::Stopwatch* loadingWatch; // 0x90
		::XLua::LuaTable* _G; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseEnterHacks; // 0xA0
		::XLua::LuaEnv* _LuaEnv; // 0xA8
		::RPG::Client::XLuaActionNoRet1_1<::System::Single>* _LateUpdateContext; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::String*>* _ExcludeLuaFileFilter; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskSkipHacks; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskResetHacks; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskBeginHacks; // 0xD0
		::UnityEngine::Coroutine* tableCoroutine; // 0xD8
		::System::String* _LuaHackConfigPath; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _StartTaskBeginHacks; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>* _EndTaskTickHacks; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>* _StartGamePhaseLateUpdateHacks; // 0xF8
		::UnityEngine::Coroutine* xluaReflectionTypeCoroutine; // 0x100
		::RPG::Client::ICsToLua* _CsToLua_k__BackingField; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _StartConsiderationAxisScoreHacks; // 0x110
		::XLua::LuaMemoryLeakChecker_Data* _LuaMemoryLeakCheckerData; // 0x118
		::RPG::Client::XLuaActionNoRet1_1<::System::Single>* _UpdateContext; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LuaMap; // 0x128
		::System::String* _LuaHackConfigPathPrefix; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _EndConsiderationAxisScoreHacks; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>* _StartConsiderationAxisSetupHacks; // 0x140
		::System::Boolean _tableImmediatelyDone; // 0x148
		::System::Boolean _IsNeedUpdate; // 0x149

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

		::System::Boolean StartTaskResetLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKRESETLUAHACK_OFFSET))(this, a1);
		}

		::System::Void EndTaskResetLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKRESETLUAHACK_OFFSET))(this, a1);
		}

		::System::Boolean StartTaskBeginLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKBEGINLUAHACK_OFFSET))(this, a1);
		}

		::System::Void EndTaskBeginLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKBEGINLUAHACK_OFFSET))(this, a1);
		}

		::System::Boolean StartTaskTickLuaHack(::Class_1_5F51D4049EA87B7B* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKTICKLUAHACK_OFFSET))(this, a1, a2);
		}

		::System::Void EndTaskTickLuaHack(::Class_1_5F51D4049EA87B7B* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKTICKLUAHACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartTaskSkipLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTTASKSKIPLUAHACK_OFFSET))(this, a1);
		}

		::System::Void EndTaskSkipLuaHack(::Class_1_5F51D4049EA87B7B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDTASKSKIPLUAHACK_OFFSET))(this, a1);
		}

		::System::Boolean StartConsiderationAxixSetupHack(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_2_9D4DD2F4235F8658* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_9D4DD2F4235F8658*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXIXSETUPHACK_OFFSET))(this, a1, a2);
		}

		::System::Void EndConsiderationAxixSetupHack(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_2_9D4DD2F4235F8658* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_9D4DD2F4235F8658*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXIXSETUPHACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartConsiderationAxisScoreHack(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTCONSIDERATIONAXISSCOREHACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndConsiderationAxisScoreHack(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDCONSIDERATIONAXISSCOREHACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartGamePhaseEnterHack(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASEENTERHACK_OFFSET))(this, a1);
		}

		::System::Void EndGamePhaseEnterHack(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASEENTERHACK_OFFSET))(this, a1);
		}

		::System::Boolean StartGamePhaseTickHack(::RPG::Client::IGamePhase* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASETICKHACK_OFFSET))(this, a1, a2);
		}

		::System::Void EndGamePhaseTickHack(::RPG::Client::IGamePhase* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASETICKHACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartGamePhaseLateUpdateHack(::RPG::Client::IGamePhase* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELATEUPDATEHACK_OFFSET))(this, a1, a2);
		}

		::System::Void EndGamePhaseLateUpdateHack(::RPG::Client::IGamePhase* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELATEUPDATEHACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartGamePhaseLeaveHack(::RPG::Client::IGamePhase* a1, ::Class_1_6B41D5D37BA0605F* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTGAMEPHASELEAVEHACK_OFFSET))(this, a1, a2);
		}

		::System::Void EndGamePhaseLeaveHack(::RPG::Client::IGamePhase* a1, ::Class_1_6B41D5D37BA0605F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ENDGAMEPHASELEAVEHACK_OFFSET))(this, a1, a2);
		}

		::System::Void _InitTaskLuaHacks(::Il2CppArray<::System::String*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ITaskLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITTASKLUAHACKS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitConsiderationAxisLuaHacks(::Il2CppArray<::System::String*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IConsiderationAxisLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITCONSIDERATIONAXISLUAHACKS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGamePhaseLuaHacks(::Il2CppArray<::System::String*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IGamePhaseLuaHack*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INITGAMEPHASELUAHACKS_OFFSET))(this, a1, a2);
		}

		::System::Single get_GcTimeInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_GCTIMEINTERVAL_OFFSET))(this);
		}

		::System::Void set_GcTimeInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SET_GCTIMEINTERVAL_OFFSET))(this, a1);
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

		static ::System::Int32 LoadProtoLua(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LOADPROTOLUA_OFFSET))(a1);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_TICK_OFFSET))(this, a1);
		}

		static ::System::Boolean get_InLuaTick()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_INLUATICK_OFFSET))();
		}

		::System::Void _TickCallback(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__TICKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void StartIncreasementGc(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_STARTINCREASEMENTGC_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* IncreasmentGc()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INCREASMENTGC_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LATEUPDATE_OFFSET))(this, a1);
		}

		::XLua::LuaEnv* GetLuaState()
		{
			return ((::XLua::LuaEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUASTATE_OFFSET))(this);
		}

		::System::Void InitLuaScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_INITLUASCRIPT_OFFSET))(this);
		}

		::XLua::LuaTable* LoadModule(::System::String* a1)
		{
			return ((::XLua::LuaTable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_LOADMODULE_OFFSET))(this, a1);
		}

		::XLua::LuaTable* GetLuaTable(::System::String* a1, ::XLua::LuaTable* a2)
		{
			return ((::XLua::LuaTable*(*)(::PVOID, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUATABLE_OFFSET))(this, a1, a2);
		}

		::XLua::LuaFunction* GetLuaFunction(::System::String* a1, ::XLua::LuaTable* a2)
		{
			return ((::XLua::LuaFunction*(*)(::PVOID, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GETLUAFUNCTION_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* DoString(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_DOSTRING_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* DoFile(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_DOFILE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* _OnRequireLua(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__ONREQUIRELUA_OFFSET))(this, a1);
		}

		::System::String* QueryLuaPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_QUERYLUAPATH_OFFSET))(this, a1);
		}

		::System::Void AddLuaLoader(::XLua::LuaEnv_CustomLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaEnv_CustomLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_ADDLUALOADER_OFFSET))(this, a1);
		}

		::System::Void ForceGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_FORCEGC_OFFSET))(this);
		}

		::System::Void CallStaticMethodNotRet(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_OFFSET))(this, a1, a2);
		}

		::System::Void CallStaticMethodNotRet_1(::XLua::LuaTable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLSTATICMETHODNOTRET_1_OFFSET))(this, a1, a2);
		}

		::System::Void CallObjectMethodNotRet(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_OFFSET))(this, a1, a2);
		}

		::System::Void CallObjectMethodNotRet_1(::XLua::LuaTable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_CALLOBJECTMETHODNOTRET_1_OFFSET))(this, a1, a2);
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

		::System::Void MemoryLeakReport(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_MEMORYLEAKREPORT_OFFSET))(this, a1);
		}

		::System::Void _SetDefines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__SETDEFINES_OFFSET))(this);
		}

		::System::Void _SetDefine(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__SETDEFINE_OFFSET))(this, a1);
		}

		::System::Void SetDefineState(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SETDEFINESTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ICsToLua* get_CsToLua()
		{
			return ((::RPG::Client::ICsToLua*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_GET_CSTOLUA_OFFSET))(this);
		}

		::System::Void set_CsToLua(::RPG::Client::ICsToLua* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ICsToLua*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM_SET_CSTOLUA_OFFSET))(this, a1);
		}

		::System::Void __RegisterExcelTable_b__114_0(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_0_OFFSET))(this, a1, a2);
		}

		::System::Void __RegisterExcelTable_b__114_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM___REGISTEREXCELTABLE_B__114_1_OFFSET))(this);
		}
	};
}

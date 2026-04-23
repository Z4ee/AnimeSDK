#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhase.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"

class Class_1_1735A22855B404E5;
class Class_1_1A41AEC3FE4CE438;
class Class_1_6B41D5D37BA0605F;
class Class_1_85447C2AFDA750E1;
class Class_1_896583BE596CCB59;
class Class_1_DA56B8CEAE4146EE;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_BATTLEPHASENEW_DEFAULTLEAVEBATTLEPROCESS_OFFSET UNITYSDK_OFFSET(0x9E72D80)
#define RPG_CLIENT_BATTLEPHASENEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E72790)
#define RPG_CLIENT_BATTLEPHASENEW_ENTER_OFFSET UNITYSDK_OFFSET(0x9E72980)
#define RPG_CLIENT_BATTLEPHASENEW_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x9E732A0)
#define RPG_CLIENT_BATTLEPHASENEW_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x9E72FE0)
#define RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0x9E733F0)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x9E73380)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET UNITYSDK_OFFSET(0x9E733E0)
#define RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9E73120)
#define RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET UNITYSDK_OFFSET(0x9E72B40)
#define RPG_CLIENT_BATTLEPHASENEW_PROCESSLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x9E72BC0)
#define RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET UNITYSDK_OFFSET(0x9E73030)
#define RPG_CLIENT_BATTLEPHASENEW__ADDINPUTSOURCE_OFFSET UNITYSDK_OFFSET(0x9E73200)
#define RPG_CLIENT_BATTLEPHASENEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E73400)
#define RPG_CLIENT_BATTLEPHASENEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9E725C0)
#define RPG_CLIENT_BATTLEPHASENEW__INITPCBATTLEINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x9E72A00)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePhaseNew_TypeDefinitionIndex = 56287;

	class BattlePhaseNew : public ::RPG::Client::GamePhase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattlePhaseNew_TypeDefinitionIndex)->GetStaticField(0x3FF40);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickLateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattlePhaseNew_TypeDefinitionIndex)->GetStaticField(0x3FF48);
		}
		::Class_1_DA56B8CEAE4146EE* _Mode; // 0x18
		::Class_1_85447C2AFDA750E1* _BattlePhaseNewInputProvider; // 0x20
		::Class_1_1A41AEC3FE4CE438* _InitParam; // 0x28
		::Class_1_1735A22855B404E5* _ModeView; // 0x30
		::Class_1_896583BE596CCB59* _InputSourceCollection; // 0x38

		::System::Void _ctor(::Class_1_1A41AEC3FE4CE438* initParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A41AEC3FE4CE438*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__CTOR_OFFSET))(this, initParam);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_ENTER_OFFSET))(this);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET))(this, pNextPhase);
		}

		static ::System::Void ProcessLeaveBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_PROCESSLEAVEBATTLE_OFFSET))();
		}

		static ::System::Void DefaultLeaveBattleProcess()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_DEFAULTLEAVEBATTLEPROCESS_OFFSET))();
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _InitPCBattleInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__INITPCBATTLEINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void _AddInputSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__ADDINPUTSOURCE_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::RPG::GameCore::BattleModeType get_ModeType()
		{
			return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_MODETYPE_OFFSET))(this);
		}

		::Class_1_DA56B8CEAE4146EE* get_Mode()
		{
			return ((::Class_1_DA56B8CEAE4146EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET))(this);
		}

		::Class_1_1A41AEC3FE4CE438* get_InitParam()
		{
			return ((::Class_1_1A41AEC3FE4CE438*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhase.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"

class Class_1_1A41AEC3FE4CE438;
class Class_1_40503CAE2FA0ADB9;
class Class_1_6B41D5D37BA0605F;
class Class_1_7EEF10492AA3A193;
class Class_1_991A5E362496272C;
class Class_1_C2026267FFB35855;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_BATTLEPHASENEW_DEFAULTLEAVEBATTLEPROCESS_OFFSET UNITYSDK_OFFSET(0xC92D9D0)
#define RPG_CLIENT_BATTLEPHASENEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC92D4C0)
#define RPG_CLIENT_BATTLEPHASENEW_ENTER_OFFSET UNITYSDK_OFFSET(0xC92D620)
#define RPG_CLIENT_BATTLEPHASENEW_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xC92E060)
#define RPG_CLIENT_BATTLEPHASENEW_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC92DC40)
#define RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0xC92E290)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0xC92E1B0)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET UNITYSDK_OFFSET(0xC92E280)
#define RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC92DE50)
#define RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET UNITYSDK_OFFSET(0xC92D790)
#define RPG_CLIENT_BATTLEPHASENEW_PROCESSLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0xC92D810)
#define RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET UNITYSDK_OFFSET(0xC92DC90)
#define RPG_CLIENT_BATTLEPHASENEW__ADDINPUTSOURCE_OFFSET UNITYSDK_OFFSET(0xC92E000)
#define RPG_CLIENT_BATTLEPHASENEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xC92E2A0)
#define RPG_CLIENT_BATTLEPHASENEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC92D380)
#define RPG_CLIENT_BATTLEPHASENEW__INITPCBATTLEINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC92D6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePhaseNew_TypeDefinitionIndex = 61134;

	class BattlePhaseNew : public ::RPG::Client::GamePhase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickLateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattlePhaseNew_TypeDefinitionIndex)->GetStaticField(0xE500);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(BattlePhaseNew_TypeDefinitionIndex)->GetStaticField(0xE508);
		}
		::Class_1_991A5E362496272C* _BattlePhaseNewInputProvider; // 0x18
		::Class_1_C2026267FFB35855* _ModeView; // 0x20
		::Class_1_1A41AEC3FE4CE438* _InitParam; // 0x28
		::Class_1_40503CAE2FA0ADB9* _Mode; // 0x30
		::Class_1_7EEF10492AA3A193* _InputSourceCollection; // 0x38

		::System::Void _ctor(::Class_1_1A41AEC3FE4CE438* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A41AEC3FE4CE438*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__CTOR_OFFSET))(this, a1);
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

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET))(this, a1);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET))(this, a1);
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

		::Class_1_40503CAE2FA0ADB9* get_Mode()
		{
			return ((::Class_1_40503CAE2FA0ADB9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET))(this);
		}

		::Class_1_1A41AEC3FE4CE438* get_InitParam()
		{
			return ((::Class_1_1A41AEC3FE4CE438*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET))(this);
		}
	};
}

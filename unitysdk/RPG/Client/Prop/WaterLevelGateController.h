#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xAEFE190)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEFE010)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xAEFE280)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GET_ISGATEOPEN_OFFSET UNITYSDK_OFFSET(0xAEFE5A0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAEFDB20)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_METHOD_5_8706B4640D53FE36_OFFSET UNITYSDK_OFFSET(0xAEFE550)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_METHOD_5_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xAEFE370)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_RESETGATE_OFFSET UNITYSDK_OFFSET(0xAEFE130)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_SETGATESTATE_OFFSET UNITYSDK_OFFSET(0xAEFDEA0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xAEFE060)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAEFE5B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelGateController_TypeDefinitionIndex = 72415;

	class WaterLevelGateController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 WaterLevelIndex; // 0x18
		::UnityEngine::GameObject* GateObject; // 0x20
		::System::String* GateAnimatorParamName; // 0x28
		::System::Int32 GateAnimatorOpenValue; // 0x30
		::System::Int32 GateAnimatorCloseValue; // 0x34
		::System::String* SwitchGateCustomString; // 0x38
		::System::Single DelayAfterAnimFinish; // 0x40
		::System::String* WaitAnimStateName; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* Field_5_8; // 0x50
		::System::Boolean Field_5_9; // 0x58
		::UnityEngine::Animator* Field_5_10; // 0x60
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* Field_5_11; // 0x68
		::Class_2_2679F01039F3FC24* Field_5_12; // 0x70
		::System::Int32 Field_5_13; // 0x78
		::System::Int32 Field_5_14; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelPuzzleBoardPlus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_RESETGATE_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void SetGateState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_SETGATESTATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_BBA49FAB086F388D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_METHOD_5_BBA49FAB086F388D_OFFSET))(this);
		}

		::System::Void Method_5_8706B4640D53FE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_METHOD_5_8706B4640D53FE36_OFFSET))(this);
		}

		::System::Boolean get_IsGateOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GET_ISGATEOPEN_OFFSET))(this);
		}
	};
}

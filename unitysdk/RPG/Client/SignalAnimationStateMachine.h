#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SignalAnimationState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xC8C1800)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC8C1E40)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1524BBDF654AD3DF_OFFSET UNITYSDK_OFFSET(0xC8C1CB0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_229CEF33F0AF9039_1_OFFSET UNITYSDK_OFFSET(0xC8C2270)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xC8C1F60)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35C4A143193C04DA_OFFSET UNITYSDK_OFFSET(0xC8C1D80)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xC8C1DE0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_5CA8D2096F7CF3F5_OFFSET UNITYSDK_OFFSET(0xC8C1040)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_6D723F32667667A4_OFFSET UNITYSDK_OFFSET(0xC8C1820)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xC8C18B0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0xC8C19A0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC8C1F00)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xC8C1810)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C2560)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateMachine_TypeDefinitionIndex = 66354;

	class SignalAnimationStateMachine : public ::System::Object
	{
	public:
		::System::Boolean IsSignalNeedTransfer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SignalAnimationState*>* SignalAnimationStates; // 0x18
		::RPG::Client::SignalAnimationState* _currentState; // 0x20
		::RPG::Client::SignalAnimationState* _previousState; // 0x28
		::System::Single _PreviousSignal_k__BackingField; // 0x30
		::UnityEngine::Animation* _animationComponent; // 0x38
		::System::Boolean _initialized; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE__CTOR_OFFSET))(this);
		}

		::System::Single get_PreviousSignal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET))(this);
		}

		::System::Void set_PreviousSignal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET))(this, a1);
		}

		::System::Void Method_1_6D723F32667667A4(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_6D723F32667667A4_OFFSET))(this, a1);
		}

		::System::Void Method_1_5CA8D2096F7CF3F5(::RPG::Client::SignalAnimationState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_5CA8D2096F7CF3F5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_908CDC094010F209()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_908CDC094010F209_OFFSET))(this);
		}

		::System::Single Method_1_1524BBDF654AD3DF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1524BBDF654AD3DF_OFFSET))(this, a1);
		}

		::System::String* Method_1_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void Method_1_229CEF33F0AF9039_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_229CEF33F0AF9039_1_OFFSET))(this);
		}

		::System::Void Method_1_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_805C56F44231AEF9_OFFSET))(this);
		}

		::System::UInt32 Method_1_35C4A143193C04DA(::System::Single a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35C4A143193C04DA_OFFSET))(this, a1);
		}
	};
}

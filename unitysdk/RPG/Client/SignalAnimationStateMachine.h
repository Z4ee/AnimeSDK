#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SignalAnimationState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0x188DC020)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x188DC740)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1524BBDF654AD3DF_OFFSET UNITYSDK_OFFSET(0x188DC5B0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35C4A143193C04DA_OFFSET UNITYSDK_OFFSET(0x188DC680)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x188DC6E0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x188DC860)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_6D723F32667667A4_OFFSET UNITYSDK_OFFSET(0x188DC040)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_71597673BC6D185F_OFFSET UNITYSDK_OFFSET(0x188DC1C0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x188DC0D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0x188DC2A0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x188DC800)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x188DCCC0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0x188DC030)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x188DD0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateMachine_TypeDefinitionIndex = 67779;

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

		::System::Void Method_1_71597673BC6D185F(::RPG::Client::SignalAnimationState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_71597673BC6D185F_OFFSET))(this, a1, a2);
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

		::System::Void Method_1_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_1_EBAF10BBA97B82DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_EBAF10BBA97B82DD_OFFSET))(this);
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

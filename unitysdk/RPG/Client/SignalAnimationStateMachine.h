#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SignalAnimationState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xA47D660)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA47DBF0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_1524BBDF654AD3DF_OFFSET UNITYSDK_OFFSET(0xA47DA60)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xA47DD10)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35C4A143193C04DA_OFFSET UNITYSDK_OFFSET(0xA47DB30)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA47DB90)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xA47D700)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_71597673BC6D185F_OFFSET UNITYSDK_OFFSET(0xA47CEF0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA47E000)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA47DCB0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9846A80F070E0F0C_OFFSET UNITYSDK_OFFSET(0xA47D7E0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_A9E445C5683F09FE_OFFSET UNITYSDK_OFFSET(0xA47D680)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xA47D670)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA47E2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateMachine_TypeDefinitionIndex = 58140;

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

		::System::Void set_PreviousSignal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET))(this, value);
		}

		::System::Void Method_1_A9E445C5683F09FE(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_A9E445C5683F09FE_OFFSET))(this, a1);
		}

		::System::Void Method_1_71597673BC6D185F(::RPG::Client::SignalAnimationState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_71597673BC6D185F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9846A80F070E0F0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_9846A80F070E0F0C_OFFSET))(this);
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

		::System::Void Method_1_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Method_1_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::UInt32 Method_1_35C4A143193C04DA(::System::Single a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_METHOD_1_35C4A143193C04DA_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SignalAnimationStateConnection; }
namespace RPG::Client { class SignalAnimationStateMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_6D723F32667667A4_OFFSET UNITYSDK_OFFSET(0xB16C0D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_7E7F311119CB2FF0_OFFSET UNITYSDK_OFFSET(0xB16BB80)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_9504824418C27EF8_OFFSET UNITYSDK_OFFSET(0xB16BB30)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_A9E445C5683F09FE_OFFSET UNITYSDK_OFFSET(0xB16C150)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_C891C7A20C824FD8_OFFSET UNITYSDK_OFFSET(0xB16BD10)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB16C090)
#define RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0xB16B9D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB16C1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationState_TypeDefinitionIndex = 65426;

	class SignalAnimationState : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::UnityEngine::AnimationClip* AnimationClip; // 0x18
		::System::Boolean IsLooping; // 0x20
		::System::Single PlaybackSpeed; // 0x24
		::System::Collections::Generic::List_1<::RPG::Client::SignalAnimationStateConnection*>* StateConnections; // 0x28
		::RPG::Client::SignalAnimationStateMachine* _controller; // 0x30
		::System::Single _stateTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_DAC9219D09D338F5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_DAC9219D09D338F5_OFFSET))(this);
		}

		::System::Void Method_1_9504824418C27EF8(::RPG::Client::SignalAnimationStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_9504824418C27EF8_OFFSET))(this, a1);
		}

		::System::Void Method_1_7E7F311119CB2FF0(::UnityEngine::Animation* a1, ::RPG::Client::SignalAnimationState* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::RPG::Client::SignalAnimationState*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_7E7F311119CB2FF0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_C891C7A20C824FD8(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationStateMachine* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_C891C7A20C824FD8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_6D723F32667667A4(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_6D723F32667667A4_OFFSET))(this, a1);
		}

		::System::Void Method_1_A9E445C5683F09FE(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATE_METHOD_1_A9E445C5683F09FE_OFFSET))(this, a1);
		}
	};
}

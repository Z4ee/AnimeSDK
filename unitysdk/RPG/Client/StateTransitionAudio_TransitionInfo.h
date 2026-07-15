#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_STATETRANSITIONAUDIO_TRANSITIONINFO_GET_STATEHASH_OFFSET UNITYSDK_OFFSET(0x17B6AFF0)
#define RPG_CLIENT_STATETRANSITIONAUDIO_TRANSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6B1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateTransitionAudio_TransitionInfo_TypeDefinitionIndex = 65777;

	class StateTransitionAudio_TransitionInfo : public ::System::Object
	{
	public:
		::System::String* nextStateName; // 0x10
		::System::Boolean triggerOnTransfer_Begin; // 0x18
		::System::String* eventName; // 0x20
		::System::Int32 _stateHash; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_TRANSITIONINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StateHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATETRANSITIONAUDIO_TRANSITIONINFO_GET_STATEHASH_OFFSET))(this);
		}
	};
}

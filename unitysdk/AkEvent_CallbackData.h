#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkEventCallbackMsg;
namespace AK::Wwise { class CallbackFlags; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AKEVENT_CALLBACKDATA_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1E868720)
#define AKEVENT_CALLBACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8688A0)

inline static constexpr unsigned int AkEvent_CallbackData_TypeDefinitionIndex = 33145;

class AkEvent_CallbackData : public ::System::Object
{
public:
	::AK::Wwise::CallbackFlags* Flags; // 0x10
	::System::String* FunctionName; // 0x18
	::UnityEngine::GameObject* GameObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACKDATA__CTOR_OFFSET))(this);
	}

	::System::Void CallFunction(::AkEventCallbackMsg* eventCallbackMsg)
	{
		return ((::System::Void(*)(::PVOID, ::AkEventCallbackMsg*))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACKDATA_CALLFUNCTION_OFFSET))(this, eventCallbackMsg);
	}
};

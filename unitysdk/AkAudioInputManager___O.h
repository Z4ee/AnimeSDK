#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;

inline static constexpr unsigned int AkAudioInputManager___O_TypeDefinitionIndex = 43623;

class AkAudioInputManager___O : public ::System::Object
{
public:
	static ::AkCallbackManager_EventCallback** StaticGet__0___EventCallback()
	{
		return (::AkCallbackManager_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager___O_TypeDefinitionIndex)->GetStaticField(0xEA90);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkSoundEngine_GameObjectHashFunction;

inline static constexpr unsigned int AkSoundEngine___O_TypeDefinitionIndex = 41186;

class AkSoundEngine___O : public ::System::Object
{
public:
	static ::AkSoundEngine_GameObjectHashFunction** StaticGet__0___InternalGameObjectHash()
	{
		return (::AkSoundEngine_GameObjectHashFunction**)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngine___O_TypeDefinitionIndex)->GetStaticField(0x60D30);
	}
};

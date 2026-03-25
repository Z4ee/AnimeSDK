#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BankCallback;

inline static constexpr unsigned int AkBankManager_AsyncBankHandle___O_TypeDefinitionIndex = 34555;

class AkBankManager_AsyncBankHandle___O : public ::System::Object
{
public:
	static ::AkCallbackManager_BankCallback** StaticGet__0___GlobalBankCallback()
	{
		return (::AkCallbackManager_BankCallback**)Il2CppClass::FromTypeDefinitionIndex(AkBankManager_AsyncBankHandle___O_TypeDefinitionIndex)->GetStaticField(0x30320);
	}
};

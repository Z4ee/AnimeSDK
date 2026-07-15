#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BankCallback;

#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95BE50)

inline static constexpr unsigned int AkCallbackManager_BankCallbackPackage_TypeDefinitionIndex = 42024;

class AkCallbackManager_BankCallbackPackage : public ::System::Object
{
public:
	::AkCallbackManager_BankCallback* m_Callback; // 0x10
	::System::Object* m_Cookie; // 0x18

	::System::Void _ctor(::AkCallbackManager_BankCallback* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET))(this, a1, a2);
	}
};

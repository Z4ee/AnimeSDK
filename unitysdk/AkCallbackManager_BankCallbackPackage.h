#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BankCallback;

#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9D1A0)

inline static constexpr unsigned int AkCallbackManager_BankCallbackPackage_TypeDefinitionIndex = 34563;

class AkCallbackManager_BankCallbackPackage : public ::System::Object
{
public:
	::AkCallbackManager_BankCallback* m_Callback; // 0x10
	::System::Object* m_Cookie; // 0x18

	::System::Void _ctor(::AkCallbackManager_BankCallback* in_cb, ::System::Object* in_cookie)
	{
		return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET))(this, in_cb, in_cookie);
	}
};

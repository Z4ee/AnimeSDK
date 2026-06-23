#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BankCallback;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E801670)
#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1E8015E0)
#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8013C0)
#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E801500)
#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8015D0)

inline static constexpr unsigned int AkCallbackManager_BankCallbackPackage_TypeDefinitionIndex = 33053;

class AkCallbackManager_BankCallbackPackage : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::AkCallbackManager_BankCallbackPackage*>** StaticGet_m_Pool()
	{
		return (::System::Collections::Generic::Stack_1<::AkCallbackManager_BankCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_BankCallbackPackage_TypeDefinitionIndex)->GetStaticField(0x27270);
	}
	// static const ::System::Int32 POOL_SIZE = 0x1000; // 0x0
	::AkCallbackManager_BankCallback* m_Callback; // 0x10
	::System::Object* m_Cookie; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::AkCallbackManager_BankCallback* in_cb, ::System::Object* in_cookie)
	{
		return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE__CTOR_1_OFFSET))(this, in_cb, in_cookie);
	}

	static ::System::Void Recycle(::AkCallbackManager_BankCallbackPackage* bank)
	{
		return ((::System::Void(*)(::AkCallbackManager_BankCallbackPackage*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_RECYCLE_OFFSET))(bank);
	}

	static ::AkCallbackManager_BankCallbackPackage* Create(::AkCallbackManager_BankCallback* in_cb, ::System::Object* in_cookie)
	{
		return ((::AkCallbackManager_BankCallbackPackage*(*)(::AkCallbackManager_BankCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_CREATE_OFFSET))(in_cb, in_cookie);
	}
};

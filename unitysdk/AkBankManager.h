#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkBankManager_BankHandle;
class AkCallbackManager_BankCallback;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKBANKMANAGER_DOUNLOADBANKS_OFFSET UNITYSDK_OFFSET(0x1C4B49B0)
#define AKBANKMANAGER_LOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0x1C4B5300)
#define AKBANKMANAGER_LOADBANK_OFFSET UNITYSDK_OFFSET(0x1C4B4EE0)
#define AKBANKMANAGER_LOADINITBANK_OFFSET UNITYSDK_OFFSET(0x1C4B4C60)
#define AKBANKMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1C4B4B40)
#define AKBANKMANAGER_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1C4B56F0)
#define AKBANKMANAGER_UNLOADINITBANK_OFFSET UNITYSDK_OFFSET(0x1C4B4DF0)
#define AKBANKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B5950)

inline static constexpr unsigned int AkBankManager_TypeDefinitionIndex = 31492;

class AkBankManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::AkBankManager_BankHandle*>** StaticGet_m_BankHandles()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::AkBankManager_BankHandle*>**)Il2CppClass::FromTypeDefinitionIndex(AkBankManager_TypeDefinitionIndex)->GetStaticField(0x258E0);
	}
	static ::System::Collections::Generic::List_1<::AkBankManager_BankHandle*>** StaticGet_BanksToUnload()
	{
		return (::System::Collections::Generic::List_1<::AkBankManager_BankHandle*>**)Il2CppClass::FromTypeDefinitionIndex(AkBankManager_TypeDefinitionIndex)->GetStaticField(0x258E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void DoUnloadBanks()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER_DOUNLOADBANKS_OFFSET))();
	}

	static ::System::Void Reset()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER_RESET_OFFSET))();
	}

	static ::System::Void LoadInitBank(::System::Boolean doReset)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADINITBANK_OFFSET))(doReset);
	}

	static ::System::Void UnloadInitBank()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER_UNLOADINITBANK_OFFSET))();
	}

	static ::System::Void LoadBank(::System::String* name, ::System::Boolean decodeBank, ::System::Boolean saveDecodedBank)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADBANK_OFFSET))(name, decodeBank, saveDecodedBank);
	}

	static ::System::Void LoadBankAsync(::System::String* name, ::AkCallbackManager_BankCallback* callback)
	{
		return ((::System::Void(*)(::System::String*, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADBANKASYNC_OFFSET))(name, callback);
	}

	static ::System::Void UnloadBank(::System::String* name)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_UNLOADBANK_OFFSET))(name);
	}
};

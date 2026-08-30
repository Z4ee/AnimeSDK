#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkBankManager_BankHandle;
class AkCallbackManager_BankCallback;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKBANKMANAGER_DOUNLOADBANKS_OFFSET UNITYSDK_OFFSET(0x1EEB2A30)
#define AKBANKMANAGER_ISBANKLOADED_OFFSET UNITYSDK_OFFSET(0x1EEB3CE0)
#define AKBANKMANAGER_LOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0x1EEA56C0)
#define AKBANKMANAGER_LOADBANK_OFFSET UNITYSDK_OFFSET(0x1EEA5270)
#define AKBANKMANAGER_LOADINITBANK_OFFSET UNITYSDK_OFFSET(0x1EEB3400)
#define AKBANKMANAGER_RELOADALLBANKS_OFFSET UNITYSDK_OFFSET(0x1EEB2D70)
#define AKBANKMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1EEB2C60)
#define AKBANKMANAGER_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1EEA5AD0)
#define AKBANKMANAGER_UNLOADINITBANK_OFFSET UNITYSDK_OFFSET(0x1EEB32B0)
#define AKBANKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEB3EC0)

inline static constexpr unsigned int AkBankManager_TypeDefinitionIndex = 43624;

class AkBankManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::AkBankManager_BankHandle*>** StaticGet_m_BankHandles()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::AkBankManager_BankHandle*>**)Il2CppClass::FromTypeDefinitionIndex(AkBankManager_TypeDefinitionIndex)->GetStaticField(0xEFA0);
	}
	static ::System::Collections::Generic::List_1<::AkBankManager_BankHandle*>** StaticGet_BanksToUnload()
	{
		return (::System::Collections::Generic::List_1<::AkBankManager_BankHandle*>**)Il2CppClass::FromTypeDefinitionIndex(AkBankManager_TypeDefinitionIndex)->GetStaticField(0xEFA8);
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

	static ::System::Void ReloadAllBanks()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER_RELOADALLBANKS_OFFSET))();
	}

	static ::System::Void LoadInitBank(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADINITBANK_OFFSET))(a1);
	}

	static ::System::Void UnloadInitBank()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBANKMANAGER_UNLOADINITBANK_OFFSET))();
	}

	static ::System::Void LoadBank(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADBANK_OFFSET))(a1, a2, a3);
	}

	static ::System::Void LoadBankAsync(::System::String* a1, ::AkCallbackManager_BankCallback* a2)
	{
		return ((::System::Void(*)(::System::String*, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_LOADBANKASYNC_OFFSET))(a1, a2);
	}

	static ::System::Void UnloadBank(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_UNLOADBANK_OFFSET))(a1);
	}

	static ::System::Boolean IsBankLoaded(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ISBANKLOADED_OFFSET))(a1);
	}
};

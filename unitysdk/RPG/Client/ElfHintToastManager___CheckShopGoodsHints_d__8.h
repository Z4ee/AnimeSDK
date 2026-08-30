#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfHintHandler; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCE56560)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ELFHINTHANDLER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCE567C0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ELFHINTHANDLER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE56750)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCE56840)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE567B0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCE56760)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE56550)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xCE554D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___CheckShopGoodsHints_d__8_TypeDefinitionIndex = 63770;

	class ElfHintToastManager___CheckShopGoodsHints_d__8 : public ::System::Object
	{
	public:
		::RPG::Client::ElfHintHandler* __2__current; // 0x10
		::RPG::Client::ElfRestaurantModule* __3__elfModule; // 0x18
		::RPG::Client::UserPrefs* __3__userPrefs; // 0x20
		::RPG::Client::UserPrefs* userPrefs; // 0x28
		::RPG::Client::ElfRestaurantModule* elfModule; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::ElfHintHandler* System_Collections_Generic_IEnumerator_RPG_Client_ElfHintHandler__get_Current()
		{
			return ((::RPG::Client::ElfHintHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ELFHINTHANDLER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::ElfHintHandler*>* System_Collections_Generic_IEnumerable_RPG_Client_ElfHintHandler__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ELFHINTHANDLER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___CHECKSHOPGOODSHINTS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}

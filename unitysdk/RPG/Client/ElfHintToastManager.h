#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfHintHandler; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class UserPrefs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKFARMHINTS_OFFSET UNITYSDK_OFFSET(0xB8C2470)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKMENUCONFIGHINTS_OFFSET UNITYSDK_OFFSET(0xB8C4860)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRECIPEHINTS_OFFSET UNITYSDK_OFFSET(0xB8C4060)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRESTAURANTUPGRADEHINTS_OFFSET UNITYSDK_OFFSET(0xB8C2CE0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER_TRYSHOWHINTS_OFFSET UNITYSDK_OFFSET(0xB8C1CF0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKEMPLOYEEMANAGEHINTS_OFFSET UNITYSDK_OFFSET(0xB8C3860)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKPROFILERHINTS_OFFSET UNITYSDK_OFFSET(0xB8C4D20)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPGOODSHINTS_OFFSET UNITYSDK_OFFSET(0xB8C4DC0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPTRADEORDERHINTS_OFFSET UNITYSDK_OFFSET(0xB8C4E60)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C1A10)
#define RPG_CLIENT_ELFHINTTOASTMANAGER__GENERATEHINTS_OFFSET UNITYSDK_OFFSET(0xB8C1E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager_TypeDefinitionIndex = 59622;

	class ElfHintToastManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean TryShowHints(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_TRYSHOWHINTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* _GenerateHints(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__GENERATEHINTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckFarmHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKFARMHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* _CheckEmployeeManageHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKEMPLOYEEMANAGEHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckRestaurantUpgradeHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRESTAURANTUPGRADEHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckRecipeHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKRECIPEHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>* CheckMenuConfigHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER_CHECKMENUCONFIGHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckProfilerHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKPROFILERHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckShopGoodsHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPGOODSHINTS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>* _CheckShopTradeOrderHints(::RPG::Client::ElfRestaurantModule* a1, ::RPG::Client::UserPrefs* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ElfHintHandler*>*(*)(::PVOID, ::RPG::Client::ElfRestaurantModule*, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER__CHECKSHOPTRADEORDERHINTS_OFFSET))(this, a1, a2);
		}
	};
}

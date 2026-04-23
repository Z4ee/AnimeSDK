#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAttributeIncreaseData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2445C0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA245ED0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0xA245EB0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0xA245E90)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__NEW_OFFSET UNITYSDK_OFFSET(0xA245C00)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__OLD_OFFSET UNITYSDK_OFFSET(0xA245CD0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0xA245EC0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0xA245EA0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA245B30)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA244650)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__GETPROGRESSUNLOCKFIELD_OFFSET UNITYSDK_OFFSET(0xA245DA0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA244C80)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITHIDDENRECIPES_OFFSET UNITYSDK_OFFSET(0xA244970)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITPRODUCTS_OFFSET UNITYSDK_OFFSET(0xA244BA0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITRECIPES_OFFSET UNITYSDK_OFFSET(0xA244740)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDCUSTOMERINCREASEHINT_OFFSET UNITYSDK_OFFSET(0xA244CF0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWEMPLOYEEHINT_OFFSET UNITYSDK_OFFSET(0xA2455E0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFACILITYHINT_OFFSET UNITYSDK_OFFSET(0xA245330)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFIELDHINT_OFFSET UNITYSDK_OFFSET(0xA245A50)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDRECIPESLOTINCREASINGHINT_OFFSET UNITYSDK_OFFSET(0xA245010)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressUpgradeData_TypeDefinitionIndex = 58713;

	class ElfProgressUpgradeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Recipes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfAttributeIncreaseData*>* Attributes; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* FarmProducts; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* HiddenRecipes; // 0x28
		::System::UInt32 _OldProgressID_k__BackingField; // 0x30
		::System::UInt32 _NewProgressID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 oldProgressID, ::System::UInt32 newProgressID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__CTOR_OFFSET))(this, oldProgressID, newProgressID);
		}

		static ::RPG::Client::ElfProgressUpgradeData* Create(::System::UInt32 oldProgressID, ::System::UInt32 newProgressID)
		{
			return ((::RPG::Client::ElfProgressUpgradeData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_CREATE_OFFSET))(oldProgressID, newProgressID);
		}

		::System::Void _InitRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITRECIPES_OFFSET))(this);
		}

		::System::Void _InitHiddenRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITHIDDENRECIPES_OFFSET))(this);
		}

		::System::Void _InitProducts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITPRODUCTS_OFFSET))(this);
		}

		::System::Void _InitAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITATTRIBUTES_OFFSET))(this);
		}

		::System::Void _AddAttribute(::RPG::Client::TextID textID, ::System::UInt32 oldValue, ::System::UInt32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__ADDATTRIBUTE_OFFSET))(this, textID, oldValue, newValue);
		}

		::System::Void _TryAddCustomerIncreaseHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDCUSTOMERINCREASEHINT_OFFSET))(this);
		}

		::System::Void _TryAddRecipeSlotIncreasingHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDRECIPESLOTINCREASINGHINT_OFFSET))(this);
		}

		::System::Void _TryAddNewFacilityHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFACILITYHINT_OFFSET))(this);
		}

		::System::Void _TryAddNewEmployeeHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWEMPLOYEEHINT_OFFSET))(this);
		}

		::System::Void _TryAddNewFieldHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFIELDHINT_OFFSET))(this);
		}

		::System::UInt32 _GetProgressUnlockField(::System::UInt32 progressID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__GETPROGRESSUNLOCKFIELD_OFFSET))(this, progressID);
		}

		::System::UInt32 get_OldProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_OLDPROGRESSID_OFFSET))(this);
		}

		::System::Void set_OldProgressID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_OLDPROGRESSID_OFFSET))(this, value);
		}

		::System::UInt32 get_NewProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NEWPROGRESSID_OFFSET))(this);
		}

		::System::Void set_NewProgressID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_NEWPROGRESSID_OFFSET))(this, value);
		}

		::RPG::Client::ElfRestaurantProgressData* get__Old()
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__OLD_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantProgressData* get__New()
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__NEW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAttributeIncreaseData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95BDE00)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95BF9F0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0x95BF8F0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0x95BF8D0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__NEW_OFFSET UNITYSDK_OFFSET(0x95BEC30)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__OLD_OFFSET UNITYSDK_OFFSET(0x95BED70)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0x95BF900)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0x95BF8E0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x95BE840)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95BDE90)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__GETPROGRESSUNLOCKFIELD_OFFSET UNITYSDK_OFFSET(0x95BF7E0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x95BE4B0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITHIDDENRECIPES_OFFSET UNITYSDK_OFFSET(0x95BE1B0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITPRODUCTS_OFFSET UNITYSDK_OFFSET(0x95BE3E0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITRECIPES_OFFSET UNITYSDK_OFFSET(0x95BDF80)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDCUSTOMERINCREASEHINT_OFFSET UNITYSDK_OFFSET(0x95BE520)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWEMPLOYEEHINT_OFFSET UNITYSDK_OFFSET(0x95BF160)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFACILITYHINT_OFFSET UNITYSDK_OFFSET(0x95BEE40)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFIELDHINT_OFFSET UNITYSDK_OFFSET(0x95BF710)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDRECIPESLOTINCREASINGHINT_OFFSET UNITYSDK_OFFSET(0x95BE910)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressUpgradeData_TypeDefinitionIndex = 51765;

	class ElfProgressUpgradeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* FarmProducts; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Recipes; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* HiddenRecipes; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfAttributeIncreaseData*>* Attributes; // 0x28
		::System::UInt32 _NewProgressID_k__BackingField; // 0x30
		::System::UInt32 _OldProgressID_k__BackingField; // 0x34

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

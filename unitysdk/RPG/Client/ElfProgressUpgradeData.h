#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAttributeIncreaseData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18E3F5F0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18E40B60)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0x18E40B40)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0x18E40B20)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__NEW_OFFSET UNITYSDK_OFFSET(0x18E40890)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET__OLD_OFFSET UNITYSDK_OFFSET(0x18E40960)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_NEWPROGRESSID_OFFSET UNITYSDK_OFFSET(0x18E40B50)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_OLDPROGRESSID_OFFSET UNITYSDK_OFFSET(0x18E40B30)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18E40760)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3F680)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__GETPROGRESSUNLOCKFIELD_OFFSET UNITYSDK_OFFSET(0x18E40A30)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18E3FD50)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITHIDDENRECIPES_OFFSET UNITYSDK_OFFSET(0x18E3F9F0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITPRODUCTS_OFFSET UNITYSDK_OFFSET(0x18E3FC70)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__INITRECIPES_OFFSET UNITYSDK_OFFSET(0x18E3F770)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDCUSTOMERINCREASEHINT_OFFSET UNITYSDK_OFFSET(0x18E3FDC0)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWEMPLOYEEHINT_OFFSET UNITYSDK_OFFSET(0x18E40450)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFACILITYHINT_OFFSET UNITYSDK_OFFSET(0x18E40160)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDNEWFIELDHINT_OFFSET UNITYSDK_OFFSET(0x18E40680)
#define RPG_CLIENT_ELFPROGRESSUPGRADEDATA__TRYADDRECIPESLOTINCREASINGHINT_OFFSET UNITYSDK_OFFSET(0x18E3FF90)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressUpgradeData_TypeDefinitionIndex = 60928;

	class ElfProgressUpgradeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* FarmProducts; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* Recipes; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfAttributeIncreaseData*>* Attributes; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* HiddenRecipes; // 0x28
		::System::UInt32 _NewProgressID_k__BackingField; // 0x30
		::System::UInt32 _OldProgressID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ElfProgressUpgradeData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfProgressUpgradeData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_CREATE_OFFSET))(a1, a2);
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

		::System::Void _AddAttribute(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__ADDATTRIBUTE_OFFSET))(this, a1, a2, a3);
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

		::System::UInt32 _GetProgressUnlockField(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA__GETPROGRESSUNLOCKFIELD_OFFSET))(this, a1);
		}

		::System::UInt32 get_OldProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_OLDPROGRESSID_OFFSET))(this);
		}

		::System::Void set_OldProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_OLDPROGRESSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NewProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_GET_NEWPROGRESSID_OFFSET))(this);
		}

		::System::Void set_NewProgressID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSUPGRADEDATA_SET_NEWPROGRESSID_OFFSET))(this, a1);
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

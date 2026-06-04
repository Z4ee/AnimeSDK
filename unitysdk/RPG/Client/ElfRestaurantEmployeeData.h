#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAbilityData; }
namespace RPG::Client { class ElfRestaurantEmployeeUpData; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB8D3F90)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYTYPES_OFFSET UNITYSDK_OFFSET(0xB8D60D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0xB8D50B0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETALLABILITIES_OFFSET UNITYSDK_OFFSET(0xB8D4CE0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETLEVELUPPRICE_OFFSET UNITYSDK_OFFSET(0xB8D42D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETNEXTABILITY_OFFSET UNITYSDK_OFFSET(0xB8D49F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETORDINARYABILITY_OFFSET UNITYSDK_OFFSET(0xB8D46C0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETSPECIALABILITIES_OFFSET UNITYSDK_OFFSET(0xB8D4AE0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0xB8D6010)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0xB8D5DB0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB8B0D50)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVELDATA_OFFSET UNITYSDK_OFFSET(0xB8D47E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB8D5F40)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xB8D54D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_EMPLOYEEID_OFFSET UNITYSDK_OFFSET(0xB8D5360)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_FIRSTTALK_OFFSET UNITYSDK_OFFSET(0xB8D5550)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB8B0CE0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xB8D56B0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISCHEF_OFFSET UNITYSDK_OFFSET(0xB8D5BF0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISDEVELOPED_OFFSET UNITYSDK_OFFSET(0xB8C5030)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISFARMER_OFFSET UNITYSDK_OFFSET(0xB8D5D20)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB8D4440)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPROGRESSUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB8D5790)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0xB8D5F60)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB8CE220)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB8C4F20)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISWAITER_OFFSET UNITYSDK_OFFSET(0xB8D5AC0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB8D5F70)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xB8D5640)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB8D5450)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xB8D55D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB8D5380)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xB8D5720)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB8D53F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_HASABILITY_OFFSET UNITYSDK_OFFSET(0xB8D63B0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_ISLEVELUPMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0xB8D4540)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB8D5F50)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_EMPLOYEEID_OFFSET UNITYSDK_OFFSET(0xB8D5370)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D4000)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__INITEMPLOYEEUPDATA_OFFSET UNITYSDK_OFFSET(0xB8D4010)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantEmployeeData_TypeDefinitionIndex = 59587;

	class ElfRestaurantEmployeeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantEmployeeUpData*>* _EmployeeUpDataDict; // 0x10
		::System::UInt32 _CurrentLevel_k__BackingField; // 0x18
		::System::UInt32 _EmployeeID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantEmployeeData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantEmployeeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 GetLevelUpPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETLEVELUPPRICE_OFFSET))(this);
		}

		::System::Boolean IsLevelUpMaterialEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_ISLEVELUPMATERIALENOUGH_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* GetOrdinaryAbility()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETORDINARYABILITY_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* GetNextAbility()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETNEXTABILITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* GetSpecialAbilities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETSPECIALABILITIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* GetAllAbilities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETALLABILITIES_OFFSET))(this);
		}

		::System::UInt32 GetAbilityUnlockLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYUNLOCKLEVEL_OFFSET))(this, a1);
		}

		::System::Void _InitEmployeeUpData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__INITEMPLOYEEUPDATA_OFFSET))(this);
		}

		::System::UInt32 get_EmployeeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_EMPLOYEEID_OFFSET))(this);
		}

		::System::Void set_EmployeeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_EMPLOYEEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantEmployeeType get_Type()
		{
			return ((::RPG::GameCore::RestaurantEmployeeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_DETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_FirstTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_FIRSTTALK_OFFSET))(this);
		}

		::System::UInt32 get_NPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NPCID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_Model()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MODEL_OFFSET))(this);
		}

		::System::String* get_IMGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_UNLOCKIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsDeveloped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISDEVELOPED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsProgressUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPROGRESSUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsWaiter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsChef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISCHEF_OFFSET))(this);
		}

		::System::Boolean get_IsFarmer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISFARMER_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CANLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::System::Void set_CurrentLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_CURRENTLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPurchased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPURCHASED_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantEmployeeUpData* get_CurrentLevelData()
		{
			return ((::RPG::Client::ElfRestaurantEmployeeUpData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVELDATA_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Abilities()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ABILITIES_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAbilityTypes()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYTYPES_OFFSET))(this);
		}

		::System::Boolean HasAbility(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_HASABILITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantEmployeeRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantEmployeeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET__ROW_OFFSET))(this);
		}
	};
}

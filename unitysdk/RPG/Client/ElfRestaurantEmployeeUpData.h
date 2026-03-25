#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAbilityData; }
namespace RPG::GameCore { class RestaurantEmployeeUpRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95C9C00)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x95C9B80)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0x95C97C0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_EMPLOYEEUPID_OFFSET UNITYSDK_OFFSET(0x95CC7D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x95CC7F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ORDINARYABILITYDATA_OFFSET UNITYSDK_OFFSET(0x95C92C0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_UPGRADEPRICE_OFFSET UNITYSDK_OFFSET(0x95C8E80)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x95CC810)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_SET_EMPLOYEEUPID_OFFSET UNITYSDK_OFFSET(0x95CC7E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x95CC800)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95CC7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantEmployeeUpData_TypeDefinitionIndex = 51711;

	class ElfRestaurantEmployeeUpData : public ::System::Object
	{
	public:
		::RPG::Client::ElfAbilityData* _OrdinaryAbilityData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* _AbilityDataList; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::UInt32 _EmployeeUpID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantEmployeeUpData* Create(::System::UInt32 employeeUpID, ::System::UInt32 level)
		{
			return ((::RPG::Client::ElfRestaurantEmployeeUpData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_CREATE_OFFSET))(employeeUpID, level);
		}

		::System::UInt32 get_EmployeeUpID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_EMPLOYEEUPID_OFFSET))(this);
		}

		::System::Void set_EmployeeUpID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_SET_EMPLOYEEUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_UpgradePrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_UPGRADEPRICE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Abilities()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ABILITIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* get_AbilityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ABILITYDATALIST_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* get_OrdinaryAbilityData()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET_ORDINARYABILITYDATA_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantEmployeeUpRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantEmployeeUpRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEUPDATA_GET__ROW_OFFSET))(this);
		}
	};
}

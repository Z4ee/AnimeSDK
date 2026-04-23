#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_253;
class Class_1_D40936EF3BF54118_15;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2509A0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLCHEF_OFFSET UNITYSDK_OFFSET(0xA251680)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLDEVELOPEDEMPLOYEES_OFFSET UNITYSDK_OFFSET(0xA250CF0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLFARMER_OFFSET UNITYSDK_OFFSET(0xA251240)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLNEWUNLOCKEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xA250EB0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLPURCHASEDFARMER_OFFSET UNITYSDK_OFFSET(0xA251460)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLUNLOCKEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xA250B30)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLWAITER_OFFSET UNITYSDK_OFFSET(0xA251080)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETEMPLOYEEDATA_OFFSET UNITYSDK_OFFSET(0xA250A50)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_CHIEFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2520F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_WAITERCOUNT_OFFSET UNITYSDK_OFFSET(0xA251F10)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_HASAUTOABILITYEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xA251840)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA2506F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNCEMPLOYEEUPGRADE_OFFSET UNITYSDK_OFFSET(0xA251B70)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA251BE0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2522D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__INITEMPLOYEEDATA_OFFSET UNITYSDK_OFFSET(0xA250740)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantEmployeeInfo_TypeDefinitionIndex = 58658;

	class ElfRestaurantEmployeeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantEmployeeData*>* EmployeeDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitEmployeeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__INITEMPLOYEEDATA_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantEmployeeData* GetEmployeeData(::System::UInt32 employeeID)
		{
			return ((::RPG::Client::ElfRestaurantEmployeeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETEMPLOYEEDATA_OFFSET))(this, employeeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllUnlockEmployee()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLUNLOCKEMPLOYEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllDevelopedEmployees()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLDEVELOPEDEMPLOYEES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllNewUnlockEmployee()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLNEWUNLOCKEMPLOYEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllWaiter()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLWAITER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllFarmer()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLFARMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllPurchasedFarmer()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLPURCHASEDFARMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllChef()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLCHEF_OFFSET))(this);
		}

		::System::Boolean HasAutoAbilityEmployee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_HASAUTOABILITYEMPLOYEE_OFFSET))(this);
		}

		::System::Void SyncEmployeeUpgrade(::Class_1_D17272E82AE804C2_253* employeeChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_253*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNCEMPLOYEEUPGRADE_OFFSET))(this, employeeChange);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_15* employeeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNC_OFFSET))(this, employeeData);
		}

		::System::UInt32 get_WaiterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_WAITERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ChiefCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_CHIEFCOUNT_OFFSET))(this);
		}
	};
}

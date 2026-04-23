#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::GameCore { class RestaurantFarmConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA228600)
#define RPG_CLIENT_ELFFARMDATA_GET_FIELDDATALIST_OFFSET UNITYSDK_OFFSET(0xA228990)
#define RPG_CLIENT_ELFFARMDATA_GET_FIELDIDARRAY_OFFSET UNITYSDK_OFFSET(0xA228830)
#define RPG_CLIENT_ELFFARMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2288A0)
#define RPG_CLIENT_ELFFARMDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA2289B0)
#define RPG_CLIENT_ELFFARMDATA_GET_MANAGEREMPLOYEEID_OFFSET UNITYSDK_OFFSET(0xA228920)
#define RPG_CLIENT_ELFFARMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA228DC0)
#define RPG_CLIENT_ELFFARMDATA_GET_UNLOCKPROGRESSID_OFFSET UNITYSDK_OFFSET(0xA228B40)
#define RPG_CLIENT_ELFFARMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA2288C0)
#define RPG_CLIENT_ELFFARMDATA_SET_FIELDDATALIST_OFFSET UNITYSDK_OFFSET(0xA2289A0)
#define RPG_CLIENT_ELFFARMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA2288B0)
#define RPG_CLIENT_ELFFARMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA228820)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmData_TypeDefinitionIndex = 58672;

	class ElfFarmData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* _FieldDataList_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmData* Create(::System::UInt32 ID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* fieldDict)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_CREATE_OFFSET))(ID, fieldDict);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantFarmConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantFarmConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FieldIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_FIELDIDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_ManagerEmployeeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_MANAGEREMPLOYEEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* get_FieldDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_FIELDDATALIST_OFFSET))(this);
		}

		::System::Void set_FieldDataList(::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_SET_FIELDDATALIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_UnlockProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_UNLOCKPROGRESSID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMDATA_GET_NAME_OFFSET))(this);
		}
	};
}

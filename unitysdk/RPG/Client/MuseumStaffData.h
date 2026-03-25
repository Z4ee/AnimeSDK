#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MuseumStaffData_StaffStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class MuseumStuffRow; }

#define RPG_CLIENT_MUSEUMSTAFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DBDB70)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DC7070)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0x9DC70E0)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x9DC70D0)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DC6F20)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_OWNERAREAID_OFFSET UNITYSDK_OFFSET(0x9DC7090)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_STAFFROW_OFFSET UNITYSDK_OFFSET(0x9DB8470)
#define RPG_CLIENT_MUSEUMSTAFFDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9DC70B0)
#define RPG_CLIENT_MUSEUMSTAFFDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DC7080)
#define RPG_CLIENT_MUSEUMSTAFFDATA_SET_OWNERAREAID_OFFSET UNITYSDK_OFFSET(0x9DC70A0)
#define RPG_CLIENT_MUSEUMSTAFFDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9DC70C0)
#define RPG_CLIENT_MUSEUMSTAFFDATA_SYNCMUSEUMSTAFFDATA_OFFSET UNITYSDK_OFFSET(0x9DB6D30)
#define RPG_CLIENT_MUSEUMSTAFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC6F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumStaffData_TypeDefinitionIndex = 53969;

	class MuseumStaffData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData; // 0x10
		::RPG::GameCore::MuseumStuffRow* _StaffRow; // 0x18
		::RPG::Client::MuseumStaffData_StaffStatus _Status_k__BackingField; // 0x20
		::System::UInt32 _OwnerAreaID_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumStaffData* Create(::System::UInt32 staffID)
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_CREATE_OFFSET))(staffID);
		}

		::System::Void SyncMuseumStaffData(::System::UInt32 belongAreaId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_SYNCMUSEUMSTAFFDATA_OFFSET))(this, belongAreaId);
		}

		::RPG::GameCore::MuseumStuffRow* get_StaffRow()
		{
			return ((::RPG::GameCore::MuseumStuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_STAFFROW_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_OwnerAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_OWNERAREAID_OFFSET))(this);
		}

		::System::Void set_OwnerAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_SET_OWNERAREAID_OFFSET))(this, value);
		}

		::RPG::Client::MuseumStaffData_StaffStatus get_Status()
		{
			return ((::RPG::Client::MuseumStaffData_StaffStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MuseumStaffData_StaffStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData_StaffStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSTAFFDATA_GET_ISOWNED_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionGroupType.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class AnniversaryCollectionPanelData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class AnniversaryCollectionGroupConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19B1E130)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GETPANELDATABYID_OFFSET UNITYSDK_OFFSET(0x19B1EA20)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x19B1E970)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x19B1EE20)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19B1ED80)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x19B1ED60)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x19B1EF50)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x19B1EEC0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_PANELDATADICT_OFFSET UNITYSDK_OFFSET(0x19B1EFB0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_TABIDLIST_OFFSET UNITYSDK_OFFSET(0x19B1E400)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19B1EDC0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x19B1ED70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SET_PANELDATADICT_OFFSET UNITYSDK_OFFSET(0x19B1EFC0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x19B1E500)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1E1C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__INITPLANEDATA_OFFSET UNITYSDK_OFFSET(0x19B1E1D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x19B1ED00)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x19B1ECA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionGroupData_TypeDefinitionIndex = 59645;

	class AnniversaryCollectionGroupData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 ANNIVERSARY_3RD_COLLECTION_GROUP_KEY = 0x3; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* _PanelDataDict_k__BackingField; // 0x10
		::RPG::GameCore::AnniversaryCollectionGroupType _GroupType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AnniversaryCollectionGroupData* Create(::RPG::GameCore::AnniversaryCollectionGroupType a1)
		{
			return ((::RPG::Client::AnniversaryCollectionGroupData*(*)(::RPG::GameCore::AnniversaryCollectionGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitPlaneData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__INITPLANEDATA_OFFSET))(this);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::AnniversaryCollectionPanelData* GetPanelDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AnniversaryCollectionPanelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GETPANELDATABYID_OFFSET))(this, a1);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__ONACTIVITYOPENED_OFFSET))(this, a1);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA__ONACTIVITYENDED_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnniversaryCollectionGroupType get_GroupType()
		{
			return ((::RPG::GameCore::AnniversaryCollectionGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::AnniversaryCollectionGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnniversaryCollectionGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SET_GROUPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TabIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_TABIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* get_PanelDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET_PANELDATADICT_OFFSET))(this);
		}

		::System::Void set_PanelDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_SET_PANELDATADICT_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnniversaryCollectionGroupConfigRow* get__Row()
		{
			return ((::RPG::GameCore::AnniversaryCollectionGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA_GET__ROW_OFFSET))(this);
		}
	};
}

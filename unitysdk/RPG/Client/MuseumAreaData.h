#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_48.h"
#include "unitysdk/Enum_3_DB663931210BBC27_49.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_62;
class Class_1_FF220487FAB45279_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::GameCore { class MuseumAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMAREADATA_ADDEXHIBITSTUFF_OFFSET UNITYSDK_OFFSET(0xD8F0750)
#define RPG_CLIENT_MUSEUMAREADATA_CALCULATEANDUPDATEDATA_OFFSET UNITYSDK_OFFSET(0xD8EFC40)
#define RPG_CLIENT_MUSEUMAREADATA_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0xD8F0E20)
#define RPG_CLIENT_MUSEUMAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8EF570)
#define RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELRENEWPOINTADDNUM_OFFSET UNITYSDK_OFFSET(0xD8F0B70)
#define RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELSTATADDNUM_OFFSET UNITYSDK_OFFSET(0xD8F0B00)
#define RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_1_OFFSET UNITYSDK_OFFSET(0xD8EFEA0)
#define RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xD8EF7F0)
#define RPG_CLIENT_MUSEUMAREADATA_GETSTAFFNUM_OFFSET UNITYSDK_OFFSET(0xD8F1060)
#define RPG_CLIENT_MUSEUMAREADATA_GET_AREARENEWPOINT_OFFSET UNITYSDK_OFFSET(0xD8F1890)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSCOUNT_OFFSET UNITYSDK_OFFSET(0xD8F1910)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD8F1960)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xD8F18F0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xD8F18B0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xD8F1980)
#define RPG_CLIENT_MUSEUMAREADATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD8F1640)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREANAME_OFFSET UNITYSDK_OFFSET(0xD8F1AB0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREATABICON_OFFSET UNITYSDK_OFFSET(0xD8F1B20)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0xD8F1870)
#define RPG_CLIENT_MUSEUMAREADATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xD8EFF10)
#define RPG_CLIENT_MUSEUMAREADATA_GET_PROPERTYDATAS_OFFSET UNITYSDK_OFFSET(0xD8F18D0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD8F19A0)
#define RPG_CLIENT_MUSEUMAREADATA_HAVESTAFF_OFFSET UNITYSDK_OFFSET(0xD8F0FE0)
#define RPG_CLIENT_MUSEUMAREADATA_INITEXHIBITMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD8F1180)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWADDSTAFF_OFFSET UNITYSDK_OFFSET(0xD8F0D90)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELAREA_OFFSET UNITYSDK_OFFSET(0xD8F0BD0)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELSTAT_OFFSET UNITYSDK_OFFSET(0xD8F0D00)
#define RPG_CLIENT_MUSEUMAREADATA_SET_AREARENEWPOINT_OFFSET UNITYSDK_OFFSET(0xD8F18A0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFSMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD8F1970)
#define RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xD8F1900)
#define RPG_CLIENT_MUSEUMAREADATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xD8F18C0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xD8F1990)
#define RPG_CLIENT_MUSEUMAREADATA_SET_MUSEUMSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0xD8F1880)
#define RPG_CLIENT_MUSEUMAREADATA_SET_PROPERTYDATAS_OFFSET UNITYSDK_OFFSET(0xD8F18E0)
#define RPG_CLIENT_MUSEUMAREADATA_SYNCMUSEUMAREADATA_OFFSET UNITYSDK_OFFSET(0xD8EF5F0)
#define RPG_CLIENT_MUSEUMAREADATA_TRYADDSTAFF_OFFSET UNITYSDK_OFFSET(0xD8F0800)
#define RPG_CLIENT_MUSEUMAREADATA_TRYREMOVESTAFF_OFFSET UNITYSDK_OFFSET(0xD8F0990)
#define RPG_CLIENT_MUSEUMAREADATA_UPDATESTAFFDATA_OFFSET UNITYSDK_OFFSET(0xD8EFDA0)
#define RPG_CLIENT_MUSEUMAREADATA__CACHEPREDATA_OFFSET UNITYSDK_OFFSET(0xD8EFFA0)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARCACHEDATA_OFFSET UNITYSDK_OFFSET(0xD8F1690)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0xD8F0EB0)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARSTAFFLIST_OFFSET UNITYSDK_OFFSET(0xD8F13F0)
#define RPG_CLIENT_MUSEUMAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8EF410)
#define RPG_CLIENT_MUSEUMAREADATA__REFRESHPROPERTYCACHEDATA_OFFSET UNITYSDK_OFFSET(0xD8F0360)
#define RPG_CLIENT_MUSEUMAREADATA__SYNCSTAFFLIST_OFFSET UNITYSDK_OFFSET(0xD8EFA60)
#define RPG_CLIENT_MUSEUMAREADATA__UPDATEEXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xD8EF860)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumAreaData_TypeDefinitionIndex = 66367;

	class MuseumAreaData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AREA_MAX_STAFF_COUNT = 0x3; // 0x0
		// static const ::System::Int32 _PROPERTY_NUM = 0x3; // 0x0
		::RPG::Client::MuseumData* _OwnerMuseum; // 0x10
		::RPG::Client::MuseumPropertyData* _AreaRenewPoint_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* _ExhibitStuffs_k__BackingField; // 0x20
		::Il2CppArray<::RPG::Client::MuseumStaffData*>* _MuseumStaffDatas_k__BackingField; // 0x28
		::Il2CppArray<::RPG::Client::MuseumPropertyData*>* _PropertyDatas_k__BackingField; // 0x30
		::RPG::GameCore::MuseumAreaConfigRow* _Row; // 0x38
		::Il2CppArray<::System::Nullable_1<::System::UInt32>>* _PrePropertyCurCache; // 0x40
		::Il2CppArray<::System::Nullable_1<::System::Boolean>>* _PrePropertyDatasMaxCache; // 0x48
		::System::UInt32 _ID_k__BackingField; // 0x50
		::System::Boolean _IsLock_k__BackingField; // 0x54
		::System::Nullable_1<::System::Boolean> _PreRenewPointMaxCache; // 0x55
		::System::Int32 _ExhibitStuffsMaxCount_k__BackingField; // 0x58
		::System::Nullable_1<::System::UInt32> _PreRenewPointCurCache; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumAreaData* Create(::RPG::Client::MuseumData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MuseumAreaData*(*)(::RPG::Client::MuseumData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SyncMuseumAreaData(::RPG::Client::MuseumData* a1, ::Class_1_FF220487FAB45279_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SYNCMUSEUMAREADATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateStaffData(::RPG::Client::MuseumStaffData* a1, ::Enum_3_DB663931210BBC27_48 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::Enum_3_DB663931210BBC27_48))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_UPDATESTAFFDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MuseumPropertyData* GetPropertyData(::Enum_3_DB663931210BBC27_49 a1)
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID, ::Enum_3_DB663931210BBC27_49))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumPropertyData* GetPropertyData_1(::RPG::GameCore::StuffStats a1)
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_1_OFFSET))(this, a1);
		}

		::System::Void CalculateAndUpdateData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CALCULATEANDUPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void AddExhibitStuff(::RPG::Client::MuseumExhibitItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_ADDEXHIBITSTUFF_OFFSET))(this, a1);
		}

		::System::Boolean TryAddStaff(::RPG::Client::MuseumStaffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_TRYADDSTAFF_OFFSET))(this, a1);
		}

		::System::Boolean TryRemoveStaff(::RPG::Client::MuseumStaffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_TRYREMOVESTAFF_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelStatAddNum(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELSTATADDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelRenewPointAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELRENEWPOINTADDNUM_OFFSET))(this);
		}

		::System::Void PreviewNextLevelArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELAREA_OFFSET))(this);
		}

		::System::Void PreviewNextLevelStat(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELSTAT_OFFSET))(this, a1);
		}

		::System::Void PreviewAddStaff(::RPG::Client::MuseumStaffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWADDSTAFF_OFFSET))(this, a1);
		}

		::System::Void ClearPreview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CLEARPREVIEW_OFFSET))(this, a1);
		}

		::System::Boolean HaveStaff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_HAVESTAFF_OFFSET))(this);
		}

		::System::Int32 GetStaffNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETSTAFFNUM_OFFSET))(this);
		}

		::System::Void InitExhibitMaxCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_INITEXHIBITMAXCOUNT_OFFSET))(this);
		}

		::System::Void _UpdateExhibitStuffs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__UPDATEEXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void _ClearPreviewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CLEARPREVIEWDATA_OFFSET))(this);
		}

		::System::Void _ClearStaffList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CLEARSTAFFLIST_OFFSET))(this);
		}

		::System::Void _SyncStaffList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_62*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_62*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__SYNCSTAFFLIST_OFFSET))(this, a1);
		}

		::System::Void _CachePreData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CACHEPREDATA_OFFSET))(this);
		}

		::System::Void _RefreshPropertyCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__REFRESHPROPERTYCACHEDATA_OFFSET))(this);
		}

		::System::Void _ClearCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CLEARCACHEDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MuseumStaffData*>* get_MuseumStaffDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMSTAFFDATAS_OFFSET))(this);
		}

		::System::Void set_MuseumStaffDatas(::Il2CppArray<::RPG::Client::MuseumStaffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumStaffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_MUSEUMSTAFFDATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::MuseumPropertyData* get_AreaRenewPoint()
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_AREARENEWPOINT_OFFSET))(this);
		}

		::System::Void set_AreaRenewPoint(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_AREARENEWPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_ID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::MuseumPropertyData*>* get_PropertyDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumPropertyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_PROPERTYDATAS_OFFSET))(this);
		}

		::System::Void set_PropertyDatas(::Il2CppArray<::RPG::Client::MuseumPropertyData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumPropertyData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_PROPERTYDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* get_ExhibitStuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffs(::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFS_OFFSET))(this, a1);
		}

		::System::Int32 get_ExhibitStuffsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ExhibitStuffsMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffsMaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFSMAXCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_ISLOCK_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumAreaConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_MuseumAreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREANAME_OFFSET))(this);
		}

		::System::String* get_MuseumAreaTabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREATABICON_OFFSET))(this);
		}
	};
}

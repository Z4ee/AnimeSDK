#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_43.h"
#include "unitysdk/Enum_3_DB663931210BBC27_44.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_146971F22DC780FC_1;
class Class_1_352A8B3482C80E7D_34;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::GameCore { class MuseumAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMAREADATA_ADDEXHIBITSTUFF_OFFSET UNITYSDK_OFFSET(0x9DB4E30)
#define RPG_CLIENT_MUSEUMAREADATA_CALCULATEANDUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x9DB4310)
#define RPG_CLIENT_MUSEUMAREADATA_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0x9DB54A0)
#define RPG_CLIENT_MUSEUMAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DB3D00)
#define RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELRENEWPOINTADDNUM_OFFSET UNITYSDK_OFFSET(0x9DB5100)
#define RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELSTATADDNUM_OFFSET UNITYSDK_OFFSET(0x9DB5090)
#define RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_1_OFFSET UNITYSDK_OFFSET(0x9DB4510)
#define RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x9DB3FB0)
#define RPG_CLIENT_MUSEUMAREADATA_GETSTAFFNUM_OFFSET UNITYSDK_OFFSET(0x9DB5730)
#define RPG_CLIENT_MUSEUMAREADATA_GET_AREARENEWPOINT_OFFSET UNITYSDK_OFFSET(0x9DB5EE0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSCOUNT_OFFSET UNITYSDK_OFFSET(0x9DB5F60)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x9DB5FB0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0x9DB5F40)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DB5F00)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x9DB5FE0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9DB5CA0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREANAME_OFFSET UNITYSDK_OFFSET(0x9DB6110)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMAREATABICON_OFFSET UNITYSDK_OFFSET(0x9DB6140)
#define RPG_CLIENT_MUSEUMAREADATA_GET_MUSEUMSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0x9DB5EC0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0x9DB5FD0)
#define RPG_CLIENT_MUSEUMAREADATA_GET_PROPERTYDATAS_OFFSET UNITYSDK_OFFSET(0x9DB5F20)
#define RPG_CLIENT_MUSEUMAREADATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DB6000)
#define RPG_CLIENT_MUSEUMAREADATA_HAVESTAFF_OFFSET UNITYSDK_OFFSET(0x9DB56B0)
#define RPG_CLIENT_MUSEUMAREADATA_INITEXHIBITMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x9DB5850)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWADDSTAFF_OFFSET UNITYSDK_OFFSET(0x9DB53B0)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELAREA_OFFSET UNITYSDK_OFFSET(0x9DB5160)
#define RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELSTAT_OFFSET UNITYSDK_OFFSET(0x9DB52C0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_AREARENEWPOINT_OFFSET UNITYSDK_OFFSET(0x9DB5EF0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFSMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x9DB5FC0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0x9DB5F50)
#define RPG_CLIENT_MUSEUMAREADATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DB5F10)
#define RPG_CLIENT_MUSEUMAREADATA_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x9DB5FF0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_MUSEUMSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0x9DB5ED0)
#define RPG_CLIENT_MUSEUMAREADATA_SET_PROPERTYDATAS_OFFSET UNITYSDK_OFFSET(0x9DB5F30)
#define RPG_CLIENT_MUSEUMAREADATA_SYNCMUSEUMAREADATA_OFFSET UNITYSDK_OFFSET(0x9DB3D80)
#define RPG_CLIENT_MUSEUMAREADATA_TRYADDSTAFF_OFFSET UNITYSDK_OFFSET(0x9DB4EA0)
#define RPG_CLIENT_MUSEUMAREADATA_TRYREMOVESTAFF_OFFSET UNITYSDK_OFFSET(0x9DB4FA0)
#define RPG_CLIENT_MUSEUMAREADATA_UPDATESTAFFDATA_OFFSET UNITYSDK_OFFSET(0x9DB43E0)
#define RPG_CLIENT_MUSEUMAREADATA__CACHEPREDATA_OFFSET UNITYSDK_OFFSET(0x9DB45B0)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARCACHEDATA_OFFSET UNITYSDK_OFFSET(0x9DB5CC0)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0x9DB5580)
#define RPG_CLIENT_MUSEUMAREADATA__CLEARSTAFFLIST_OFFSET UNITYSDK_OFFSET(0x9DB5A80)
#define RPG_CLIENT_MUSEUMAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3B90)
#define RPG_CLIENT_MUSEUMAREADATA__REFRESHPROPERTYCACHEDATA_OFFSET UNITYSDK_OFFSET(0x9DB4960)
#define RPG_CLIENT_MUSEUMAREADATA__SYNCSTAFFLIST_OFFSET UNITYSDK_OFFSET(0x9DB41D0)
#define RPG_CLIENT_MUSEUMAREADATA__UPDATEEXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0x9DB4030)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumAreaData_TypeDefinitionIndex = 53948;

	class MuseumAreaData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AREA_MAX_STAFF_COUNT = 0x3; // 0x0
		// static const ::System::Int32 _PROPERTY_NUM = 0x3; // 0x0
		::Il2CppArray<::RPG::Client::MuseumPropertyData*>* _PropertyDatas_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::MuseumStaffData*>* _MuseumStaffDatas_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* _ExhibitStuffs_k__BackingField; // 0x20
		::RPG::Client::MuseumData* _OwnerMuseum; // 0x28
		::Il2CppArray<::System::Nullable_1<::System::UInt32>>* _PrePropertyCurCache; // 0x30
		::RPG::GameCore::MuseumAreaConfigRow* _Row; // 0x38
		::Il2CppArray<::System::Nullable_1<::System::Boolean>>* _PrePropertyDatasMaxCache; // 0x40
		::RPG::Client::MuseumPropertyData* _AreaRenewPoint_k__BackingField; // 0x48
		::System::UInt32 _ID_k__BackingField; // 0x50
		::System::Nullable_1<::System::Boolean> _PreRenewPointMaxCache; // 0x54
		::System::Boolean _IsLock_k__BackingField; // 0x56
		::System::Nullable_1<::System::UInt32> _PreRenewPointCurCache; // 0x58
		::System::Int32 _ExhibitStuffsMaxCount_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumAreaData* Create(::RPG::Client::MuseumData* ownerMuseum, ::System::UInt32 id)
		{
			return ((::RPG::Client::MuseumAreaData*(*)(::RPG::Client::MuseumData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CREATE_OFFSET))(ownerMuseum, id);
		}

		::System::Void SyncMuseumAreaData(::RPG::Client::MuseumData* ownerMuseum, ::Class_1_146971F22DC780FC_1* museumArea)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*, ::Class_1_146971F22DC780FC_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SYNCMUSEUMAREADATA_OFFSET))(this, ownerMuseum, museumArea);
		}

		::System::Void UpdateStaffData(::RPG::Client::MuseumStaffData* museumStaffData, ::Enum_3_DB663931210BBC27_43 pos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::Enum_3_DB663931210BBC27_43))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_UPDATESTAFFDATA_OFFSET))(this, museumStaffData, pos);
		}

		::RPG::Client::MuseumPropertyData* GetPropertyData(::Enum_3_DB663931210BBC27_44 stat)
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID, ::Enum_3_DB663931210BBC27_44))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_OFFSET))(this, stat);
		}

		::RPG::Client::MuseumPropertyData* GetPropertyData_1(::RPG::GameCore::StuffStats stat)
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETPROPERTYDATA_1_OFFSET))(this, stat);
		}

		::System::Void CalculateAndUpdateData(::System::Boolean refreshCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CALCULATEANDUPDATEDATA_OFFSET))(this, refreshCache);
		}

		::System::Void AddExhibitStuff(::RPG::Client::MuseumExhibitItemData* stuff)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_ADDEXHIBITSTUFF_OFFSET))(this, stuff);
		}

		::System::Boolean TryAddStaff(::RPG::Client::MuseumStaffData* staff)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_TRYADDSTAFF_OFFSET))(this, staff);
		}

		::System::Boolean TryRemoveStaff(::RPG::Client::MuseumStaffData* staff)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_TRYREMOVESTAFF_OFFSET))(this, staff);
		}

		::System::UInt32 GetNextLevelStatAddNum(::RPG::GameCore::StuffStats stat)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELSTATADDNUM_OFFSET))(this, stat);
		}

		::System::UInt32 GetNextLevelRenewPointAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GETNEXTLEVELRENEWPOINTADDNUM_OFFSET))(this);
		}

		::System::Void PreviewNextLevelArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELAREA_OFFSET))(this);
		}

		::System::Void PreviewNextLevelStat(::RPG::GameCore::StuffStats stat)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWNEXTLEVELSTAT_OFFSET))(this, stat);
		}

		::System::Void PreviewAddStaff(::RPG::Client::MuseumStaffData* staffData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_PREVIEWADDSTAFF_OFFSET))(this, staffData);
		}

		::System::Void ClearPreview(::System::Boolean isCalculate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_CLEARPREVIEW_OFFSET))(this, isCalculate);
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

		::System::Void _SyncStaffList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_34*>* staffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_34*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA__SYNCSTAFFLIST_OFFSET))(this, staffList);
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

		::System::Void set_MuseumStaffDatas(::Il2CppArray<::RPG::Client::MuseumStaffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumStaffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_MUSEUMSTAFFDATAS_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::MuseumPropertyData* get_AreaRenewPoint()
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_AREARENEWPOINT_OFFSET))(this);
		}

		::System::Void set_AreaRenewPoint(::RPG::Client::MuseumPropertyData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_AREARENEWPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_ID_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::MuseumPropertyData*>* get_PropertyDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumPropertyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_PROPERTYDATAS_OFFSET))(this);
		}

		::System::Void set_PropertyDatas(::Il2CppArray<::RPG::Client::MuseumPropertyData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumPropertyData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_PROPERTYDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* get_ExhibitStuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffs(::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFS_OFFSET))(this, value);
		}

		::System::Int32 get_ExhibitStuffsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ExhibitStuffsMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_EXHIBITSTUFFSMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffsMaxCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_EXHIBITSTUFFSMAXCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAREADATA_SET_ISLOCK_OFFSET))(this, value);
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

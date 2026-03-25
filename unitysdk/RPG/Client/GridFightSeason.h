#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonDivision; }
namespace RPG::Client { class GridFightSeasonTrait; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class GridFightSeasonModuleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET UNITYSDK_OFFSET(0x989FB00)
#define RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x989F630)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x98A0010)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET UNITYSDK_OFFSET(0x989FC10)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x989FD00)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0x989FBD0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0x989FBF0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0x989FBB0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x98A0130)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0x989FEF0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET UNITYSDK_OFFSET(0x989FC90)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x989FD90)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0x989FBE0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0x989FC00)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0x989FBC0)
#define RPG_CLIENT_GRIDFIGHTSEASON__CTOR_OFFSET UNITYSDK_OFFSET(0x989EB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason_TypeDefinitionIndex = 52942;

	class GridFightSeason : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSeasonDivision* _SeasonDivision_k__BackingField; // 0x10
		::RPG::Client::GridFightSeasonTrait* _SeasonTrait_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SeasonPortalList_k__BackingField; // 0x20
		::System::UInt32 _SubSeasonID; // 0x28
		::System::UInt32 _ID; // 0x2C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 subSeasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON__CTOR_OFFSET))(this, id, subSeasonID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightEquipItemConfig* GetEquipByTrait(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightSeasonTrait* get_SeasonTrait()
		{
			return ((::RPG::Client::GridFightSeasonTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET))(this);
		}

		::System::Void set_SeasonTrait(::RPG::Client::GridFightSeasonTrait* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightSeasonDivision* get_SeasonDivision()
		{
			return ((::RPG::Client::GridFightSeasonDivision*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET))(this);
		}

		::System::Void set_SeasonDivision(::RPG::Client::GridFightSeasonDivision* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonDivision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SeasonPortalList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET))(this);
		}

		::System::Void set_SeasonPortalList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_CurOfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_TimeLimitRewardConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSeasonModuleConfigRow* get__Meta()
		{
			return ((::RPG::GameCore::GridFightSeasonModuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET))(this);
		}
	};
}

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

#define RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET UNITYSDK_OFFSET(0xA5816C0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xA5811F0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xA581BD0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET UNITYSDK_OFFSET(0xA5817D0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA5818C0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0xA581790)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0xA5817B0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0xA581770)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA574240)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0xA581AB0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET UNITYSDK_OFFSET(0xA581850)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA581950)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0xA5817A0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0xA5817C0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0xA581780)
#define RPG_CLIENT_GRIDFIGHTSEASON__CTOR_OFFSET UNITYSDK_OFFSET(0xA5806F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason_TypeDefinitionIndex = 60028;

	class GridFightSeason : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSeasonDivision* _SeasonDivision_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SeasonPortalList_k__BackingField; // 0x18
		::RPG::Client::GridFightSeasonTrait* _SeasonTrait_k__BackingField; // 0x20
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

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

#define RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1C59F250)
#define RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1C59EBF0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C59F780)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET UNITYSDK_OFFSET(0x1C59F360)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C59F470)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0x1C59F320)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0x1C59F340)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0x1C59F300)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1C59F8A0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0x1C59F660)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET UNITYSDK_OFFSET(0x1C59F400)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C59F500)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0x1C59F330)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0x1C59F350)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0x1C59F310)
#define RPG_CLIENT_GRIDFIGHTSEASON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59DE60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason_TypeDefinitionIndex = 65263;

	class GridFightSeason : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSeasonDivision* _SeasonDivision_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SeasonPortalList_k__BackingField; // 0x18
		::RPG::Client::GridFightSeasonTrait* _SeasonTrait_k__BackingField; // 0x20
		::System::UInt32 _SubSeasonID; // 0x28
		::System::UInt32 _ID; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* GetEquipByTrait(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonTrait* get_SeasonTrait()
		{
			return ((::RPG::Client::GridFightSeasonTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET))(this);
		}

		::System::Void set_SeasonTrait(::RPG::Client::GridFightSeasonTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonDivision* get_SeasonDivision()
		{
			return ((::RPG::Client::GridFightSeasonDivision*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET))(this);
		}

		::System::Void set_SeasonDivision(::RPG::Client::GridFightSeasonDivision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonDivision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SeasonPortalList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET))(this);
		}

		::System::Void set_SeasonPortalList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET))(this, a1);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class SilverWolfExploreData; }
namespace RPG::Client { class SilverWolfRaidData; }
namespace RPG::Client { class SilverWolfShootData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class SilverWolfTabGroupRow; }
namespace System { class String; }

#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0xA483490)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_HASREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xA483840)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPCLOSE_OFFSET UNITYSDK_OFFSET(0xA483640)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPFINISH_OFFSET UNITYSDK_OFFSET(0xA4835B0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA4836D0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPSTART_OFFSET UNITYSDK_OFFSET(0xA483520)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA4833B0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xA4834B0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_UNFINISHMISSION_OFFSET UNITYSDK_OFFSET(0xA483730)
#define RPG_CLIENT_SILVERWOLFGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA482E20)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfGroupData_TypeDefinitionIndex = 55452;

	class SilverWolfGroupData : public ::System::Object
	{
	public:
		::RPG::Client::SilverWolfShootData* ShootData; // 0x10
		::RPG::Client::SilverWolfExploreData* ExploreData; // 0x18
		::RPG::Client::SilverWolfRaidData* RaidData; // 0x20
		::RPG::GameCore::SilverWolfTabGroupRow* GroupRow; // 0x28
		::System::UInt32 GroupId; // 0x30

		::System::Void _ctor(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA__CTOR_OFFSET))(this, groupId);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_Conditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_CONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::Boolean get_IsGroupFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsGroupClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsGroupStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPSTART_OFFSET))(this);
		}

		::System::Boolean get_IsGroupInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPINSCHEDULE_OFFSET))(this);
		}

		::System::String* get_UnfinishMission()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_UNFINISHMISSION_OFFSET))(this);
		}

		::System::Boolean get_HasRewardAvail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_HASREWARDAVAIL_OFFSET))(this);
		}
	};
}

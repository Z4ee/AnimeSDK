#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487;
class Class_1_C9DFE5EE7107C629_4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVEL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9634EE0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9634EA0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_FINISHPERIOD_OFFSET UNITYSDK_OFFSET(0x9634F30)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_CURPERIOD_OFFSET UNITYSDK_OFFSET(0x9635140)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9635120)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x96350E0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x9635100)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODIDLIST_OFFSET UNITYSDK_OFFSET(0x96351C0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x96351B0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9635130)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x96350F0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x9635110)
#define RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9634E20)
#define RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9634D90)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevel_TypeDefinitionIndex = 51842;

	class EvolveBuildLevel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StagePeriodIDList; // 0x10
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x18
		::System::UInt32 _LevelID_k__BackingField; // 0x1C
		::RPG::GameCore::EvolvePeriodType _StagePeriodType; // 0x20
		::System::Boolean _IsFinish_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_OFFSET))(this, levelInfo);
		}

		::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_4* levelInfo, ::Class_1_14E02E1F6D70E487* battleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_1_OFFSET))(this, levelInfo, battleInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_CLEAR_OFFSET))(this);
		}

		::System::Void FinishPeriod(::System::UInt32 srvLevelId, ::System::UInt32 srvPeriodType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_FINISHPERIOD_OFFSET))(this, srvLevelId, srvPeriodType);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_LEVELID_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_SEASON_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::UInt32 get_CurPeriod()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_CURPERIOD_OFFSET))(this);
		}

		::RPG::GameCore::EvolvePeriodType get_StagePeriodType()
		{
			return ((::RPG::GameCore::EvolvePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StagePeriodIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODIDLIST_OFFSET))(this);
		}
	};
}

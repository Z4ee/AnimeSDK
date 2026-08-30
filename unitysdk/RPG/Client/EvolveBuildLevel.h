#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_4;
class Class_1_FFE5B8A52EC38E9C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xCED8B80)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED8B40)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_FINISHPERIOD_OFFSET UNITYSDK_OFFSET(0xCED8BD0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_CURPERIOD_OFFSET UNITYSDK_OFFSET(0xCED8DE0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCED8DC0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xCED8D80)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xCED8DA0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODIDLIST_OFFSET UNITYSDK_OFFSET(0xCED8EA0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_GET_STAGEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0xCED8E60)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCED8DD0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xCED8D90)
#define RPG_CLIENT_EVOLVEBUILDLEVEL_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xCED8DB0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCED8AC0)
#define RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED8A30)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevel_TypeDefinitionIndex = 63858;

	class EvolveBuildLevel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StagePeriodIDList; // 0x10
		::System::Boolean _IsFinish_k__BackingField; // 0x18
		::System::UInt32 _LevelID_k__BackingField; // 0x1C
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x20
		::RPG::GameCore::EvolvePeriodType _StagePeriodType; // 0x24

		::System::Void _ctor(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_3AD2528CD53B1639_4* a1, ::Class_1_FFE5B8A52EC38E9C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*, ::Class_1_FFE5B8A52EC38E9C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_CLEAR_OFFSET))(this);
		}

		::System::Void FinishPeriod(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_FINISHPERIOD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_LEVELID_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_SEASON_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVEL_SET_ISFINISH_OFFSET))(this, a1);
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

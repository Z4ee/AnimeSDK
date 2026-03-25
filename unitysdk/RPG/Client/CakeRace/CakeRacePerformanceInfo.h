#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CakeRace { class CakeRaceOwlbertAnimDataItem; }
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x922B6C0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_GETOWLBERTANIMDATAITEM_OFFSET UNITYSDK_OFFSET(0x922BEA0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_GETPERFORMANCEDATAITEM_OFFSET UNITYSDK_OFFSET(0x922BDE0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x922B840)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INITANIMCONFIG_OFFSET UNITYSDK_OFFSET(0x922BBA0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INITPERFORMANCEDATAITEMS_OFFSET UNITYSDK_OFFSET(0x922B970)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INIT_OFFSET UNITYSDK_OFFSET(0x922B920)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRacePerformanceInfo_TypeDefinitionIndex = 62233;

	class CakeRacePerformanceInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*>* _OwlbertAnimDataItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*>* _PerformanceDataItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRacePerformanceInfo* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRacePerformanceInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INIT_OFFSET))(this);
		}

		::System::Void _InitPerformanceDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INITPERFORMANCEDATAITEMS_OFFSET))(this);
		}

		::System::Void _InitAnimConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO__INITANIMCONFIG_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRacePerformanceDataItem* GetPerformanceDataItem(::System::UInt32 performanceID)
		{
			return ((::RPG::Client::CakeRace::CakeRacePerformanceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_GETPERFORMANCEDATAITEM_OFFSET))(this, performanceID);
		}

		::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem* GetOwlbertAnimDataItem(::System::String* animName)
		{
			return ((::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEINFO_GETOWLBERTANIMDATAITEM_OFFSET))(this, animName);
		}
	};
}

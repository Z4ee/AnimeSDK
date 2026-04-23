#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITimeRange; }

#define RPG_CLIENT_ITIMERANGEEXTENSIONS_BETWEEN_OFFSET UNITYSDK_OFFSET(0xA621EE0)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA5F4620)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISFOREVER_OFFSET UNITYSDK_OFFSET(0xA621E00)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA5F0AF0)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0xA5F44A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ITimeRangeExtensions_TypeDefinitionIndex = 62585;

	class ITimeRangeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInSchedule(::RPG::Client::ITimeRange* timeRange)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISINSCHEDULE_OFFSET))(timeRange);
		}

		static ::System::Boolean IsNotStart(::RPG::Client::ITimeRange* timeRange)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISNOTSTART_OFFSET))(timeRange);
		}

		static ::System::Boolean IsExpired(::RPG::Client::ITimeRange* timeRange)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISEXPIRED_OFFSET))(timeRange);
		}

		static ::System::Boolean IsForever(::RPG::Client::ITimeRange* timeRange)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISFOREVER_OFFSET))(timeRange);
		}

		static ::System::Boolean Between(::System::UInt32 value, ::System::UInt32 begin, ::System::UInt32 end)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_BETWEEN_OFFSET))(value, begin, end);
		}
	};
}

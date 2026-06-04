#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITimeRange; }

#define RPG_CLIENT_ITIMERANGEEXTENSIONS_BETWEEN_OFFSET UNITYSDK_OFFSET(0xBD268A0)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBD26620)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISFOREVER_OFFSET UNITYSDK_OFFSET(0xBD267B0)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xBD10F90)
#define RPG_CLIENT_ITIMERANGEEXTENSIONS_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0xBD264A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ITimeRangeExtensions_TypeDefinitionIndex = 63518;

	class ITimeRangeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInSchedule(::RPG::Client::ITimeRange* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISINSCHEDULE_OFFSET))(a1);
		}

		static ::System::Boolean IsNotStart(::RPG::Client::ITimeRange* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISNOTSTART_OFFSET))(a1);
		}

		static ::System::Boolean IsExpired(::RPG::Client::ITimeRange* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISEXPIRED_OFFSET))(a1);
		}

		static ::System::Boolean IsForever(::RPG::Client::ITimeRange* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ITimeRange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_ISFOREVER_OFFSET))(a1);
		}

		static ::System::Boolean Between(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITIMERANGEEXTENSIONS_BETWEEN_OFFSET))(a1, a2, a3);
		}
	};
}

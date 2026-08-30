#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPlayerReturnRecommendData.h"

namespace RPG::Client { class ConditionChecker; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xC66A130)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC66A060)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC669FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnCustomGotoRecommendData_TypeDefinitionIndex = 61967;

	class ActivityPlayerReturnCustomGotoRecommendData : public ::RPG::Client::ActivityPlayerReturnRecommendData
	{
	public:
		::RPG::Client::ConditionChecker* _Checker; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_GET_GOTOID_OFFSET))(this);
		}
	};
}

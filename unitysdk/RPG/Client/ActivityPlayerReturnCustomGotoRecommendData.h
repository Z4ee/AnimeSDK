#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPlayerReturnRecommendData.h"

namespace RPG::Client { class ConditionChecker; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x9C401F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C40190)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C40100)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA___IFIXBASEPROXY_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C40210)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnCustomGotoRecommendData_TypeDefinitionIndex = 57079;

	class ActivityPlayerReturnCustomGotoRecommendData : public ::RPG::Client::ActivityPlayerReturnRecommendData
	{
	public:
		::RPG::Client::ConditionChecker* _Checker; // 0x20

		::System::Void _ctor(::System::UInt32 recommendID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA__CTOR_OFFSET))(this, recommendID);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNCUSTOMGOTORECOMMENDDATA___IFIXBASEPROXY_ISAVAILABLE_OFFSET))(this);
		}
	};
}

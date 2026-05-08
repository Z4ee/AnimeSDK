#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;

#define SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A67FAA0)
#define SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1A67F9C0)
#define SHARE_HOLLOWQUESTUTIL_ISABYSSS2QUEST_OFFSET UNITYSDK_OFFSET(0x1A67F980)
#define SHARE_HOLLOWQUESTUTIL_ISHEATQUEST_OFFSET UNITYSDK_OFFSET(0x1A67F9A0)

namespace Share
{
	inline static constexpr unsigned int HollowQuestUtil_TypeDefinitionIndex = 12848;

	class HollowQuestUtil : public ::System::Object
	{
	public:
		static ::System::Boolean IsAbyssS2Quest(::Share::EHollowQuestType questType)
		{
			return ((::System::Boolean(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_ISABYSSS2QUEST_OFFSET))(questType);
		}

		static ::System::Boolean IsHeatQuest(::Share::EHollowQuestType questType)
		{
			return ((::System::Boolean(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_ISHEATQUEST_OFFSET))(questType);
		}

		static ::Class_2_0A55B5A82A61DAFA_2* GetQuestConfig(::System::Int32 questID)
		{
			return ((::Class_2_0A55B5A82A61DAFA_2*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET))(questID);
		}

		static ::System::Int32 GetLockSlotCount(::System::Int32 questID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET))(questID);
		}
	};
}

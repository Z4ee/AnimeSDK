#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA;

#define SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACC01D0)
#define SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1ACC0100)
#define SHARE_HOLLOWQUESTUTIL_ISABYSSS2QUEST_OFFSET UNITYSDK_OFFSET(0x1ACC00C0)
#define SHARE_HOLLOWQUESTUTIL_ISHEATQUEST_OFFSET UNITYSDK_OFFSET(0x1ACC00E0)

namespace Share
{
	inline static constexpr unsigned int HollowQuestUtil_TypeDefinitionIndex = 9966;

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

		static ::Class_2_0A55B5A82A61DAFA* GetQuestConfig(::System::Int32 questID)
		{
			return ((::Class_2_0A55B5A82A61DAFA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET))(questID);
		}

		static ::System::Int32 GetLockSlotCount(::System::Int32 questID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET))(questID);
		}
	};
}

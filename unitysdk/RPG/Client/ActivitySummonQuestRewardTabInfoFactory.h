#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardTabInfo; }

#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFOFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x8FB83E0)
#define RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFOFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB8550)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonQuestRewardTabInfoFactory_TypeDefinitionIndex = 50259;

	class ActivitySummonQuestRewardTabInfoFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFOFACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::IActivityQuestRewardTabInfo* Create(::System::UInt32 tabID)
		{
			return ((::RPG::Client::IActivityQuestRewardTabInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONQUESTREWARDTABINFOFACTORY_CREATE_OFFSET))(this, tabID);
		}
	};
}

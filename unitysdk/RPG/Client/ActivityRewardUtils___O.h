#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils___O_TypeDefinitionIndex = 61748;

	class ActivityRewardUtils___O : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc** StaticGet__3____IsQuestRewardTaken()
		{
			return (::RPG::Client::ActivityRewardUtils_QuestCheckerFunc**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardUtils___O_TypeDefinitionIndex)->GetStaticField(0x3B280);
		}
		static ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc** StaticGet__1____IsQuestShowRedDot()
		{
			return (::RPG::Client::ActivityRewardUtils_QuestCheckerFunc**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardUtils___O_TypeDefinitionIndex)->GetStaticField(0x3B288);
		}
		static ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc** StaticGet__0____CheckMultiIDOr()
		{
			return (::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardUtils___O_TypeDefinitionIndex)->GetStaticField(0x3B290);
		}
		static ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc** StaticGet__2____CheckMultiIDAnd()
		{
			return (::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardUtils___O_TypeDefinitionIndex)->GetStaticField(0x3B298);
		}
	};
}

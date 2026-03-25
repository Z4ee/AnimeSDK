#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_409378A17EE349AA_OFFSET UNITYSDK_OFFSET(0x170141B0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_98BB74D6EF2F8478_OFFSET UNITYSDK_OFFSET(0x17014280)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17014230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestGetReward_TypeDefinitionIndex = 20055;

	class ByCompareQuestGetReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_409378A17EE349AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_409378A17EE349AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98BB74D6EF2F8478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_98BB74D6EF2F8478_OFFSET))(a1, a2);
		}
	};
}

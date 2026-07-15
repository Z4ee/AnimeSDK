#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_6490E28D69210B49_OFFSET UNITYSDK_OFFSET(0x19D02CB0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_78A1044B7A4B1172_OFFSET UNITYSDK_OFFSET(0x1A89BE30)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_98BB74D6EF2F8478_OFFSET UNITYSDK_OFFSET(0x1A89BC50)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_BFECA14C5D5A2775_OFFSET UNITYSDK_OFFSET(0x1A89BDF0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89BE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestGetReward_TypeDefinitionIndex = 21080;

	class ByCompareQuestGetReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6490E28D69210B49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_6490E28D69210B49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98BB74D6EF2F8478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_98BB74D6EF2F8478_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFECA14C5D5A2775(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_BFECA14C5D5A2775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_78A1044B7A4B1172(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_78A1044B7A4B1172_OFFSET))(a1, a2);
		}
	};
}

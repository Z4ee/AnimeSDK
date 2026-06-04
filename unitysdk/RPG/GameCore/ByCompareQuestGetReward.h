#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_409378A17EE349AA_OFFSET UNITYSDK_OFFSET(0x1952B2D0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_55F2E6B3BE09928D_OFFSET UNITYSDK_OFFSET(0x1952B5C0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_98BB74D6EF2F8478_OFFSET UNITYSDK_OFFSET(0x1952B3A0)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_E33CA07E4FAA4284_OFFSET UNITYSDK_OFFSET(0x1952B540)
#define RPG_GAMECORE_BYCOMPAREQUESTGETREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1952B350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestGetReward_TypeDefinitionIndex = 20665;

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

		static ::System::Void Method_4_E33CA07E4FAA4284(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_E33CA07E4FAA4284_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55F2E6B3BE09928D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTGETREWARD_METHOD_4_55F2E6B3BE09928D_OFFSET))(a1, a2);
		}
	};
}

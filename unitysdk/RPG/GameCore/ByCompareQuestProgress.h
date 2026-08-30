#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_148DB34B26FA213E_OFFSET UNITYSDK_OFFSET(0x1CEF50A0)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_3EDF3B86EAE712EF_OFFSET UNITYSDK_OFFSET(0x1CEF50F0)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_567B946C794F2ABA_OFFSET UNITYSDK_OFFSET(0x1CEF5380)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_F47D67AEE78DC6AD_OFFSET UNITYSDK_OFFSET(0x1CEF5340)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF50E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestProgress_TypeDefinitionIndex = 20357;

	class ByCompareQuestProgress : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20
		::RPG::GameCore::DynamicFloat* Progress; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_148DB34B26FA213E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_148DB34B26FA213E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3EDF3B86EAE712EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_3EDF3B86EAE712EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F47D67AEE78DC6AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_F47D67AEE78DC6AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_567B946C794F2ABA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_567B946C794F2ABA_OFFSET))(a1, a2);
		}
	};
}

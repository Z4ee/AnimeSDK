#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_1E851D00DFFD8BD7_OFFSET UNITYSDK_OFFSET(0x1B2B6990)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET UNITYSDK_OFFSET(0x1B2B69D0)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_721250889E129C56_OFFSET UNITYSDK_OFFSET(0x1B2B6BC0)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_81AD1F973EE41480_OFFSET UNITYSDK_OFFSET(0x1B2B6BF0)
#define RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B69C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivated_TypeDefinitionIndex = 22232;

	class ByRankActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash TriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E851D00DFFD8BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_1E851D00DFFD8BD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36BE7F36C2957562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721250889E129C56(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_721250889E129C56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81AD1F973EE41480(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_81AD1F973EE41480_OFFSET))(a1, a2);
		}
	};
}

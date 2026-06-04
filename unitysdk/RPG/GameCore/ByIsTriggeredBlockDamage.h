#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_97D510403B1EC822_OFFSET UNITYSDK_OFFSET(0x19573210)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET UNITYSDK_OFFSET(0x19573010)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_C098A60C2B503603_OFFSET UNITYSDK_OFFSET(0x19573190)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D5C5F42C1060E520_OFFSET UNITYSDK_OFFSET(0x19572F40)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19572FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTriggeredBlockDamage_TypeDefinitionIndex = 22410;

	class ByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5C5F42C1060E520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D5C5F42C1060E520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFD752447508E54E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C098A60C2B503603(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_C098A60C2B503603_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97D510403B1EC822(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_97D510403B1EC822_OFFSET))(a1, a2);
		}
	};
}

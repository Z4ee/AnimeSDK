#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/MinMaxType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_7A8EE6DDDBC48682_OFFSET UNITYSDK_OFFSET(0x1956AAC0)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_7AC5E0701BB494C8_OFFSET UNITYSDK_OFFSET(0x1956AEB0)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_8F761D4D19B375EF_OFFSET UNITYSDK_OFFSET(0x1956AF50)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_9172F302DDF59A97_OFFSET UNITYSDK_OFFSET(0x1956ABE0)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x1956AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropertyValueMinOrMax_TypeDefinitionIndex = 21327;

	class ByIsPropertyValueMinOrMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::RPG::GameCore::MinMaxType MinOrMax; // 0x30
		::RPG::GameCore::AbilityProperty PropertyType; // 0x34
		::RPG::GameCore::AbilityPropertyRatio PropertyRatioType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A8EE6DDDBC48682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_7A8EE6DDDBC48682_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9172F302DDF59A97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_9172F302DDF59A97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AC5E0701BB494C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_7AC5E0701BB494C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F761D4D19B375EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_METHOD_4_8F761D4D19B375EF_OFFSET))(a1, a2);
		}
	};
}

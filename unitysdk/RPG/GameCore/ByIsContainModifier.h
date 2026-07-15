#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_176198D9B99BE32A_OFFSET UNITYSDK_OFFSET(0x1A8DAF60)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_598DE36A0B3A8CB2_OFFSET UNITYSDK_OFFSET(0x1A8DAC80)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_876565C00FF0E944_OFFSET UNITYSDK_OFFSET(0x1A8DAF90)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_E35774B88C3C05C8_OFFSET UNITYSDK_OFFSET(0x1A8DACC0)
#define RPG_GAMECORE_BYISCONTAINMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainModifier_TypeDefinitionIndex = 22157;

	class ByIsContainModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* ModifierName; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::System::Boolean AddedOrAlive; // 0x38
		::System::Boolean IncludeRecordBeforeDeathrattle; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_598DE36A0B3A8CB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_598DE36A0B3A8CB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E35774B88C3C05C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_E35774B88C3C05C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_176198D9B99BE32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_176198D9B99BE32A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_876565C00FF0E944(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_876565C00FF0E944_OFFSET))(a1, a2);
		}
	};
}

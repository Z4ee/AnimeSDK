#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_C34A6335241E6990_OFFSET UNITYSDK_OFFSET(0x1702B180)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_E35774B88C3C05C8_OFFSET UNITYSDK_OFFSET(0x1702B250)
#define RPG_GAMECORE_BYISCONTAINMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1702B200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainModifier_TypeDefinitionIndex = 21189;

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

		static ::System::Void Method_4_C34A6335241E6990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_C34A6335241E6990_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E35774B88C3C05C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_METHOD_4_E35774B88C3C05C8_OFFSET))(a1, a2);
		}
	};
}

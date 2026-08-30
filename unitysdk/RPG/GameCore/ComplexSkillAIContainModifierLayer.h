#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_236E5BD570AD44C0_OFFSET UNITYSDK_OFFSET(0x1CFF1720)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_FC1451CC73B40DFA_OFFSET UNITYSDK_OFFSET(0x1CFF1780)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIContainModifierLayer_TypeDefinitionIndex = 15362;

	class ComplexSkillAIContainModifierLayer : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Boolean SumAllTarget; // 0x11
		::System::String* ModifilerName; // 0x18
		::System::Boolean StringFromParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_236E5BD570AD44C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_236E5BD570AD44C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC1451CC73B40DFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_FC1451CC73B40DFA_OFFSET))(a1, a2);
		}
	};
}

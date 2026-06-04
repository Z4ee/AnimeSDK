#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_5296B151A185D702_OFFSET UNITYSDK_OFFSET(0x19669C50)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_FC1451CC73B40DFA_OFFSET UNITYSDK_OFFSET(0x19669CE0)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19669CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIContainModifierLayer_TypeDefinitionIndex = 14766;

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

		static ::System::Void Method_3_5296B151A185D702(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_5296B151A185D702_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC1451CC73B40DFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_METHOD_3_FC1451CC73B40DFA_OFFSET))(a1, a2);
		}
	};
}

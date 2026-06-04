#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_METHOD_3_73B086392C2A67BC_OFFSET UNITYSDK_OFFSET(0x19669A60)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_METHOD_3_A5A04FFA39A17086_OFFSET UNITYSDK_OFFSET(0x19669AD0)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19669AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIContainModifier_TypeDefinitionIndex = 14765;

	class ComplexSkillAIContainModifier : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::String* ModifilerName; // 0x18
		::System::Boolean StringFromParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73B086392C2A67BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_METHOD_3_73B086392C2A67BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5A04FFA39A17086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIContainModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_METHOD_3_A5A04FFA39A17086_OFFSET))(a1, a2);
		}
	};
}

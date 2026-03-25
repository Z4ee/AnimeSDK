#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_27639A1F8E3F9D3F_OFFSET UNITYSDK_OFFSET(0x1702BCD0)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_B9560C5367961061_OFFSET UNITYSDK_OFFSET(0x1702BC00)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1702BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentSkillActive_TypeDefinitionIndex = 21761;

	class ByIsCurrentSkillActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9560C5367961061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_B9560C5367961061_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27639A1F8E3F9D3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_METHOD_4_27639A1F8E3F9D3F_OFFSET))(a1, a2);
		}
	};
}

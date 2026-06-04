#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_2E404C68A577BDEF_OFFSET UNITYSDK_OFFSET(0x19454590)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_B0072F5823873BC5_OFFSET UNITYSDK_OFFSET(0x194544C0)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19454540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSubmitSkill_TypeDefinitionIndex = 19084;

	class AdventureSubmitSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Caster; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0072F5823873BC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSubmitSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSubmitSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_B0072F5823873BC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E404C68A577BDEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_2E404C68A577BDEF_OFFSET))(a1, a2);
		}
	};
}

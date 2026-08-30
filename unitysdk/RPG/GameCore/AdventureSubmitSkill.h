#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_2E404C68A577BDEF_OFFSET UNITYSDK_OFFSET(0x1CBBEC70)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_F1F42F93AADA7B7E_OFFSET UNITYSDK_OFFSET(0x1CBBEBD0)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBEC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSubmitSkill_TypeDefinitionIndex = 19982;

	class AdventureSubmitSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Caster; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1F42F93AADA7B7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSubmitSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSubmitSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_F1F42F93AADA7B7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E404C68A577BDEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_METHOD_3_2E404C68A577BDEF_OFFSET))(a1, a2);
		}
	};
}

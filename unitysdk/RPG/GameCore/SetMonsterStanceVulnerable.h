#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_METHOD_3_713878F949729CC6_OFFSET UNITYSDK_OFFSET(0x176D8800)
#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_METHOD_3_AD4F4DF77D354890_OFFSET UNITYSDK_OFFSET(0x176D8880)
#define RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterStanceVulnerable_TypeDefinitionIndex = 21144;

	class SetMonsterStanceVulnerable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsVulnerable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_713878F949729CC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterStanceVulnerable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterStanceVulnerable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_METHOD_3_713878F949729CC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD4F4DF77D354890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterStanceVulnerable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterStanceVulnerable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERSTANCEVULNERABLE_METHOD_3_AD4F4DF77D354890_OFFSET))(a1, a2);
		}
	};
}

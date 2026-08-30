#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPRESETGACHAMACHINE_METHOD_3_E45A08411B9B6711_OFFSET UNITYSDK_OFFSET(0x1D181110)
#define RPG_GAMECORE_PROPRESETGACHAMACHINE_METHOD_3_F3621C456C2A6141_OFFSET UNITYSDK_OFFSET(0x1D181190)
#define RPG_GAMECORE_PROPRESETGACHAMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D181160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropResetGachaMachine_TypeDefinitionIndex = 21723;

	class PropResetGachaMachine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E45A08411B9B6711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropResetGachaMachine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropResetGachaMachine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE_METHOD_3_E45A08411B9B6711_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3621C456C2A6141(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropResetGachaMachine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropResetGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE_METHOD_3_F3621C456C2A6141_OFFSET))(a1, a2);
		}
	};
}

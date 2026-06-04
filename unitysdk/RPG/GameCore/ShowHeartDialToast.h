#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWHEARTDIALTOAST_METHOD_3_591A50D4BD740FF6_OFFSET UNITYSDK_OFFSET(0x19C7E890)
#define RPG_GAMECORE_SHOWHEARTDIALTOAST_METHOD_3_67FEF87E91C18DAC_OFFSET UNITYSDK_OFFSET(0x19C7E810)
#define RPG_GAMECORE_SHOWHEARTDIALTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7E860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToast_TypeDefinitionIndex = 19765;

	class ShowHeartDialToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HeartDialStepType StepType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67FEF87E91C18DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHeartDialToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHeartDialToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST_METHOD_3_67FEF87E91C18DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_591A50D4BD740FF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHeartDialToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST_METHOD_3_591A50D4BD740FF6_OFFSET))(a1, a2);
		}
	};
}

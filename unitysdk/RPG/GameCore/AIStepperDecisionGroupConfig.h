#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_A1643CBA9CAD5328_OFFSET UNITYSDK_OFFSET(0x1D322530)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_D0F92E420860DE31_OFFSET UNITYSDK_OFFSET(0x1D324AE0)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_F272A3020D47B99A_OFFSET UNITYSDK_OFFSET(0x1D324B20)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D322520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIStepperDecisionGroupConfig_TypeDefinitionIndex = 15312;

	class AIStepperDecisionGroupConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x28
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D0F92E420860DE31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIStepperDecisionGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_D0F92E420860DE31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1643CBA9CAD5328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIStepperDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_A1643CBA9CAD5328_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* Method_4_F272A3020D47B99A()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_METHOD_4_F272A3020D47B99A_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_AISWITCHCASEDECISION_METHOD_2_CCB36E1C71671757_OFFSET UNITYSDK_OFFSET(0x1D324D20)
#define RPG_GAMECORE_AISWITCHCASEDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D324E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISwitchCaseDecision_TypeDefinitionIndex = 15313;

	class AISwitchCaseDecision : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x10
		::RPG::GameCore::AIDecisionUnitConfig* Decision; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHCASEDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCB36E1C71671757(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISwitchCaseDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISwitchCaseDecision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHCASEDECISION_METHOD_2_CCB36E1C71671757_OFFSET))(a1, a2);
		}
	};
}

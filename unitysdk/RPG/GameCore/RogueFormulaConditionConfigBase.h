#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_6_79F6C218CBBA130F_OFFSET UNITYSDK_OFFSET(0x19B3C000)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_6_A46B7B8686D2C4E6_OFFSET UNITYSDK_OFFSET(0x19B20830)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B20700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFormulaConditionConfigBase_TypeDefinitionIndex = 18541;

	class RogueFormulaConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_79F6C218CBBA130F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFormulaConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_6_79F6C218CBBA130F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A46B7B8686D2C4E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueFormulaConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_METHOD_6_A46B7B8686D2C4E6_OFFSET))(a1, a2);
		}
	};
}

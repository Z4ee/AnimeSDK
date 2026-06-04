#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_6_26A971C313B1B72C_OFFSET UNITYSDK_OFFSET(0x19AF5930)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_6_BB37649E48D06461_OFFSET UNITYSDK_OFFSET(0x19AF5B50)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF5A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveFormulaAndTriggerSelectConfig_TypeDefinitionIndex = 18674;

	class RogueActRemoveFormulaAndTriggerSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_26A971C313B1B72C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_6_26A971C313B1B72C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BB37649E48D06461(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_METHOD_6_BB37649E48D06461_OFFSET))(a1, a2);
		}
	};
}

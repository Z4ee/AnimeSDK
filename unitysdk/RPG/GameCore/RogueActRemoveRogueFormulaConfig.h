#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_6_05AF587C231D8D10_OFFSET UNITYSDK_OFFSET(0x19AF61E0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_6_CBD0D77D9DE0E49D_OFFSET UNITYSDK_OFFSET(0x19AF5FC0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF6100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaConfig_TypeDefinitionIndex = 18623;

	class RogueActRemoveRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CBD0D77D9DE0E49D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_6_CBD0D77D9DE0E49D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_05AF587C231D8D10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULACONFIG_METHOD_6_05AF587C231D8D10_OFFSET))(a1, a2);
		}
	};
}

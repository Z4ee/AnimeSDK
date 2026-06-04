#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG_METHOD_6_37073C64623A3C22_OFFSET UNITYSDK_OFFSET(0x19AF7370)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG_METHOD_6_5E9F3B7D68F5EDC7_OFFSET UNITYSDK_OFFSET(0x19AF7590)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF74B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueFormulaConfig_TypeDefinitionIndex = 18626;

	class RogueActReplaceAllRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_37073C64623A3C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG_METHOD_6_37073C64623A3C22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5E9F3B7D68F5EDC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULACONFIG_METHOD_6_5E9F3B7D68F5EDC7_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_6A3D64B05F269F4E_OFFSET UNITYSDK_OFFSET(0x18CC2880)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_B3EE7DFD8AE6CC3B_OFFSET UNITYSDK_OFFSET(0x18CC2AA0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC29C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 18674;

	class RogueActGetRogueBuffByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6A3D64B05F269F4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_6A3D64B05F269F4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B3EE7DFD8AE6CC3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_METHOD_6_B3EE7DFD8AE6CC3B_OFFSET))(a1, a2);
		}
	};
}

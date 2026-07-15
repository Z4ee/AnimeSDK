#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_4AD48E245D57E98E_OFFSET UNITYSDK_OFFSET(0x1D06B030)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_AB8196F85A7DA072_OFFSET UNITYSDK_OFFSET(0x1D06AFE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialStageConfig_TypeDefinitionIndex = 18682;

	class GridFightModifierSetTutorialStageConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB8196F85A7DA072(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_AB8196F85A7DA072_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AD48E245D57E98E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_4AD48E245D57E98E_OFFSET))(a1, a2);
		}
	};
}

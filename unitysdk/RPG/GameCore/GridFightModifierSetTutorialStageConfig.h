#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_4AD48E245D57E98E_OFFSET UNITYSDK_OFFSET(0x197EF910)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_D191B9282921BAB7_OFFSET UNITYSDK_OFFSET(0x197F3C70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EF8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialStageConfig_TypeDefinitionIndex = 18434;

	class GridFightModifierSetTutorialStageConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D191B9282921BAB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_D191B9282921BAB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AD48E245D57E98E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSTAGECONFIG_METHOD_3_4AD48E245D57E98E_OFFSET))(a1, a2);
		}
	};
}

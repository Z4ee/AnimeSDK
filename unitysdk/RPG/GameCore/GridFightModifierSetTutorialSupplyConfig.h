#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_ABB3452B6B6E7639_OFFSET UNITYSDK_OFFSET(0x1D06B040)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_C6CA3CA039AFF17D_OFFSET UNITYSDK_OFFSET(0x1D06B090)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialSupplyConfig_TypeDefinitionIndex = 18686;

	class GridFightModifierSetTutorialSupplyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABB3452B6B6E7639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_ABB3452B6B6E7639_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6CA3CA039AFF17D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_C6CA3CA039AFF17D_OFFSET))(a1, a2);
		}
	};
}

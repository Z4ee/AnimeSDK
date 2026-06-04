#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_83E00E44CD857804_OFFSET UNITYSDK_OFFSET(0x197F3CF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_C6CA3CA039AFF17D_OFFSET UNITYSDK_OFFSET(0x197F3DC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F3D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialSupplyConfig_TypeDefinitionIndex = 18438;

	class GridFightModifierSetTutorialSupplyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83E00E44CD857804(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_83E00E44CD857804_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6CA3CA039AFF17D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_METHOD_3_C6CA3CA039AFF17D_OFFSET))(a1, a2);
		}
	};
}

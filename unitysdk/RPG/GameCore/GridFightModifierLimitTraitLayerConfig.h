#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_METHOD_3_5BDE582E8D7923EA_OFFSET UNITYSDK_OFFSET(0x1D06A1B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_METHOD_3_6896955A23187E46_OFFSET UNITYSDK_OFFSET(0x1D06A200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLimitTraitLayerConfig_TypeDefinitionIndex = 18605;

	class GridFightModifierLimitTraitLayerConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5BDE582E8D7923EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_METHOD_3_5BDE582E8D7923EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6896955A23187E46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_METHOD_3_6896955A23187E46_OFFSET))(a1, a2);
		}
	};
}

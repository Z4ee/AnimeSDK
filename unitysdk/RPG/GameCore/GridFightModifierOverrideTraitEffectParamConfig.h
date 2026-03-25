#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_METHOD_3_608ECB725C1052F9_OFFSET UNITYSDK_OFFSET(0x1726B8C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_METHOD_3_F687B9E92427E050_OFFSET UNITYSDK_OFFSET(0x17268600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172685B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideTraitEffectParamConfig_TypeDefinitionIndex = 17860;

	class GridFightModifierOverrideTraitEffectParamConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_608ECB725C1052F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_METHOD_3_608ECB725C1052F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F687B9E92427E050(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_METHOD_3_F687B9E92427E050_OFFSET))(a1, a2);
		}
	};
}

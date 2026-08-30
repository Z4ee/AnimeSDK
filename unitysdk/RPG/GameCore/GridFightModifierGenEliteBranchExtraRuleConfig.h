#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_METHOD_3_691C96464841CE93_OFFSET UNITYSDK_OFFSET(0x1D159CF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_METHOD_3_CD26292BCAE7F5CF_OFFSET UNITYSDK_OFFSET(0x1D159CA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGenEliteBranchExtraRuleConfig_TypeDefinitionIndex = 19252;

	class GridFightModifierGenEliteBranchExtraRuleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD26292BCAE7F5CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_METHOD_3_CD26292BCAE7F5CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_691C96464841CE93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_METHOD_3_691C96464841CE93_OFFSET))(a1, a2);
		}
	};
}

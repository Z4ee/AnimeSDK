#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_METHOD_3_45B2D7F8CA342F3E_OFFSET UNITYSDK_OFFSET(0x1D1597C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_METHOD_3_DC072E02F9BAE9FA_OFFSET UNITYSDK_OFFSET(0x1D159810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionTraitRefreshConfig_TypeDefinitionIndex = 19231;

	class GridFightModifierExecActionTraitRefreshConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45B2D7F8CA342F3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_METHOD_3_45B2D7F8CA342F3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC072E02F9BAE9FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_METHOD_3_DC072E02F9BAE9FA_OFFSET))(a1, a2);
		}
	};
}

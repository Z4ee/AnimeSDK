#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_METHOD_3_28ADE70705BB48BC_OFFSET UNITYSDK_OFFSET(0x1EE6D220)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_METHOD_3_6FCC7E5DF35A68C0_OFFSET UNITYSDK_OFFSET(0x1EE6D1D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6D210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterAddEnhanceConfig_TypeDefinitionIndex = 19183;

	class GridFightModifierExecActionAfterAddEnhanceConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FCC7E5DF35A68C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_METHOD_3_6FCC7E5DF35A68C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28ADE70705BB48BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_METHOD_3_28ADE70705BB48BC_OFFSET))(a1, a2);
		}
	};
}

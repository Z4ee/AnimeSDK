#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_01032E76032D1A7D_OFFSET UNITYSDK_OFFSET(0x189BC990)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_BE19001A9702A104_OFFSET UNITYSDK_OFFSET(0x189BC8C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BC940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionMergeRoleConfig_TypeDefinitionIndex = 18397;

	class GridFightModifierExecActionMergeRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE19001A9702A104(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_BE19001A9702A104_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01032E76032D1A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_01032E76032D1A7D_OFFSET))(a1, a2);
		}
	};
}

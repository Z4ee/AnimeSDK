#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_01032E76032D1A7D_OFFSET UNITYSDK_OFFSET(0x1EE6DAC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_E5EC370134EB9F39_OFFSET UNITYSDK_OFFSET(0x1EE6DA70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6DAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionMergeRoleConfig_TypeDefinitionIndex = 19139;

	class GridFightModifierExecActionMergeRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5EC370134EB9F39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_E5EC370134EB9F39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01032E76032D1A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_METHOD_3_01032E76032D1A7D_OFFSET))(a1, a2);
		}
	};
}

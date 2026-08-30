#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG_METHOD_3_22E6978162D5D728_OFFSET UNITYSDK_OFFSET(0x1EE6D8F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG_METHOD_3_E9D48B78CB2EEC64_OFFSET UNITYSDK_OFFSET(0x1EE6D940)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6D930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionBeforeBattleConfig_TypeDefinitionIndex = 19113;

	class GridFightModifierExecActionBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22E6978162D5D728(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionBeforeBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionBeforeBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG_METHOD_3_22E6978162D5D728_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9D48B78CB2EEC64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBEFOREBATTLECONFIG_METHOD_3_E9D48B78CB2EEC64_OFFSET))(a1, a2);
		}
	};
}

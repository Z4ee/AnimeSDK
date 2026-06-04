#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_563CD751B347F5DA_OFFSET UNITYSDK_OFFSET(0x197F1FA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_9378F86AD5093393_OFFSET UNITYSDK_OFFSET(0x197EC730)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EC6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterUseOrbConfig_TypeDefinitionIndex = 18458;

	class GridFightModifierExecActionAfterUseOrbConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_563CD751B347F5DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_563CD751B347F5DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9378F86AD5093393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_9378F86AD5093393_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_0EDC8CD01154D72B_OFFSET UNITYSDK_OFFSET(0x189BF690)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_516C126C0C32E422_OFFSET UNITYSDK_OFFSET(0x189BF760)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BF710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialRoleConfig_TypeDefinitionIndex = 18464;

	class GridFightModifierSetTutorialRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EDC8CD01154D72B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_0EDC8CD01154D72B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_516C126C0C32E422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_516C126C0C32E422_OFFSET))(a1, a2);
		}
	};
}

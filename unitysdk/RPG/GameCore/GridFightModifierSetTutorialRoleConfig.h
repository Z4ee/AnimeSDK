#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_191D519AE1FA7786_OFFSET UNITYSDK_OFFSET(0x1D06AF80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_516C126C0C32E422_OFFSET UNITYSDK_OFFSET(0x1D06AFD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06AFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialRoleConfig_TypeDefinitionIndex = 18684;

	class GridFightModifierSetTutorialRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_191D519AE1FA7786(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_191D519AE1FA7786_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_516C126C0C32E422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALROLECONFIG_METHOD_3_516C126C0C32E422_OFFSET))(a1, a2);
		}
	};
}

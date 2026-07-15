#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_METHOD_3_876E268BD4683520_OFFSET UNITYSDK_OFFSET(0x1D06ACE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_METHOD_3_8A16053EFA165B9C_OFFSET UNITYSDK_OFFSET(0x1D06AD30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06AD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetPlayerLevelLimitConfig_TypeDefinitionIndex = 18664;

	class GridFightModifierSetPlayerLevelLimitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_876E268BD4683520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_METHOD_3_876E268BD4683520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A16053EFA165B9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_METHOD_3_8A16053EFA165B9C_OFFSET))(a1, a2);
		}
	};
}

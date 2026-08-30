#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_METHOD_6_316C22EC5E0084E9_OFFSET UNITYSDK_OFFSET(0x1D149FE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_METHOD_6_8BB497E8F2D43965_OFFSET UNITYSDK_OFFSET(0x1D14A460)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSubBattleAvatarNumConfig_TypeDefinitionIndex = 19075;

	class GridFightActionSubBattleAvatarNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8BB497E8F2D43965(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_METHOD_6_8BB497E8F2D43965_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_316C22EC5E0084E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_METHOD_6_316C22EC5E0084E9_OFFSET))(a1, a2);
		}
	};
}

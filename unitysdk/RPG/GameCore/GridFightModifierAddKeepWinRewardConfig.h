#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_METHOD_3_876315A61C8BFD6D_OFFSET UNITYSDK_OFFSET(0x17260330)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_METHOD_3_EE60B7A6E07CE374_OFFSET UNITYSDK_OFFSET(0x17260260)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172602E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddKeepWinRewardConfig_TypeDefinitionIndex = 17783;

	class GridFightModifierAddKeepWinRewardConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE60B7A6E07CE374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_METHOD_3_EE60B7A6E07CE374_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_876315A61C8BFD6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_METHOD_3_876315A61C8BFD6D_OFFSET))(a1, a2);
		}
	};
}

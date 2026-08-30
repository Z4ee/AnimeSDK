#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_6_61D04D913EFFA632_OFFSET UNITYSDK_OFFSET(0x1D15D9A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_6_6A280E7DB9B46A4E_OFFSET UNITYSDK_OFFSET(0x1D15D9F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPreBattleRoleStarConfig_TypeDefinitionIndex = 19298;

	class GridFightParamGetPreBattleRoleStarConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_61D04D913EFFA632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_6_61D04D913EFFA632_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6A280E7DB9B46A4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_METHOD_6_6A280E7DB9B46A4E_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_6_836B66E1C2AFE29A_OFFSET UNITYSDK_OFFSET(0x189C8820)
#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_6_C3864A2935AD1014_OFFSET UNITYSDK_OFFSET(0x189C8AD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C89A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamIsRolePreBattleConfig_TypeDefinitionIndex = 18528;

	class GridFightParamIsRolePreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_836B66E1C2AFE29A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_6_836B66E1C2AFE29A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C3864A2935AD1014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsRolePreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISROLEPREBATTLECONFIG_METHOD_6_C3864A2935AD1014_OFFSET))(a1, a2);
		}
	};
}

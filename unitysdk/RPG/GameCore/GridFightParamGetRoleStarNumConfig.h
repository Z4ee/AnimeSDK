#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_6_C2185BC870967F01_OFFSET UNITYSDK_OFFSET(0x1D06DFC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_6_E1B9B0B29DAEBADD_OFFSET UNITYSDK_OFFSET(0x1D06DF70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleStarNumConfig_TypeDefinitionIndex = 18772;

	class GridFightParamGetRoleStarNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E1B9B0B29DAEBADD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_6_E1B9B0B29DAEBADD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C2185BC870967F01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_6_C2185BC870967F01_OFFSET))(a1, a2);
		}
	};
}

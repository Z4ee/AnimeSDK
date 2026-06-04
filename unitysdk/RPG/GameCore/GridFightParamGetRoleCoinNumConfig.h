#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_6_BA206B0477CA82DA_OFFSET UNITYSDK_OFFSET(0x197FB0C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_6_F7CD54370477AF14_OFFSET UNITYSDK_OFFSET(0x197FAE10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197FAF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleCoinNumConfig_TypeDefinitionIndex = 18503;

	class GridFightParamGetRoleCoinNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F7CD54370477AF14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_6_F7CD54370477AF14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BA206B0477CA82DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_6_BA206B0477CA82DA_OFFSET))(a1, a2);
		}
	};
}

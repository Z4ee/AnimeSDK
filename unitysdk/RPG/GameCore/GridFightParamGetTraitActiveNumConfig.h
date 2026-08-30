#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_6_76DF14A2427F7075_OFFSET UNITYSDK_OFFSET(0x1D15DD60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_6_E4F47028E90F3679_OFFSET UNITYSDK_OFFSET(0x1D15DDB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTraitActiveNumConfig_TypeDefinitionIndex = 19278;

	class GridFightParamGetTraitActiveNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_76DF14A2427F7075(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_6_76DF14A2427F7075_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E4F47028E90F3679(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_6_E4F47028E90F3679_OFFSET))(a1, a2);
		}
	};
}

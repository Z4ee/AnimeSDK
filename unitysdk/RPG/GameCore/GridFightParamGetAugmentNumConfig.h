#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_METHOD_6_03E5170A8B7CB63A_OFFSET UNITYSDK_OFFSET(0x1D06D230)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_METHOD_6_FCDD411FED36227E_OFFSET UNITYSDK_OFFSET(0x1D06D1E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetAugmentNumConfig_TypeDefinitionIndex = 18771;

	class GridFightParamGetAugmentNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FCDD411FED36227E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetAugmentNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetAugmentNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_METHOD_6_FCDD411FED36227E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_03E5170A8B7CB63A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetAugmentNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetAugmentNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTNUMCONFIG_METHOD_6_03E5170A8B7CB63A_OFFSET))(a1, a2);
		}
	};
}

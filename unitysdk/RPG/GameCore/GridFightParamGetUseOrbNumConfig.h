#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_2E815E3A5536F415_OFFSET UNITYSDK_OFFSET(0x1D15DE70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_4B2DE661F94EF9F1_OFFSET UNITYSDK_OFFSET(0x1D15DE20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUseOrbNumConfig_TypeDefinitionIndex = 19317;

	class GridFightParamGetUseOrbNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4B2DE661F94EF9F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_4B2DE661F94EF9F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2E815E3A5536F415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_2E815E3A5536F415_OFFSET))(a1, a2);
		}
	};
}

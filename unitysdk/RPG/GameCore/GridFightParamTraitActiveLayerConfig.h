#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_6_65AA78B383DA90B6_OFFSET UNITYSDK_OFFSET(0x1D15E000)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_6_9F4576B6B6F1D712_OFFSET UNITYSDK_OFFSET(0x1D15E050)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15E040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitActiveLayerConfig_TypeDefinitionIndex = 19276;

	class GridFightParamTraitActiveLayerConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_65AA78B383DA90B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_6_65AA78B383DA90B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9F4576B6B6F1D712(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_6_9F4576B6B6F1D712_OFFSET))(a1, a2);
		}
	};
}

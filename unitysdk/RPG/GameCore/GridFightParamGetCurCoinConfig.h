#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_6_205499DEAD09D0E2_OFFSET UNITYSDK_OFFSET(0x1726EEE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_6_9FDC89330B61F80C_OFFSET UNITYSDK_OFFSET(0x1726EC30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1726EDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCoinConfig_TypeDefinitionIndex = 17883;

	class GridFightParamGetCurCoinConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9FDC89330B61F80C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_6_9FDC89330B61F80C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_205499DEAD09D0E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_6_205499DEAD09D0E2_OFFSET))(a1, a2);
		}
	};
}

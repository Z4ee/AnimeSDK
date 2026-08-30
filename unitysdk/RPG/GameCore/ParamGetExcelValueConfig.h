#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_310429F80DD3E4A7_OFFSET UNITYSDK_OFFSET(0x1D413F40)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_AF7058448B087713_OFFSET UNITYSDK_OFFSET(0x1D413E20)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D413F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamGetExcelValueConfig_TypeDefinitionIndex = 16893;

	class ParamGetExcelValueConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF7058448B087713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetExcelValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetExcelValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_AF7058448B087713_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_310429F80DD3E4A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_310429F80DD3E4A7_OFFSET))(a1, a2);
		}
	};
}

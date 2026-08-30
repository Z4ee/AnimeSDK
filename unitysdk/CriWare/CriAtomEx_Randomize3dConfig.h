#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET UNITYSDK_OFFSET(0x2DFCF50)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GETPARAMBYTYPE_OFFSET UNITYSDK_OFFSET(0x2DFCF90)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER1_OFFSET UNITYSDK_OFFSET(0x2DFCDC0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER2_OFFSET UNITYSDK_OFFSET(0x2DFCDF0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER3_OFFSET UNITYSDK_OFFSET(0x2DFCE20)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E120)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_FOLLOWSORIGINALSOURCE_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_SETPARAMBYTYPE_OFFSET UNITYSDK_OFFSET(0x2DFCFA0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2DFCE60)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2DFCEE0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFCE50)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Randomize3dConfig_TypeDefinitionIndex = 38671;

	struct alignas(8) CriAtomEx_Randomize3dConfig
	{
		// static const ::System::Int32 NumOfCalcParams = 0x3; // 0x0
		::System::Boolean followsOriginalSource; // 0x10
		::CriWare::CriAtomEx_Randomize3dCalcType calculationType; // 0x14
		::Il2CppArray<::System::Single>* calculationParameters; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::CriWare::CriAtomEx_Randomize3dCalcType a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomEx_Randomize3dCalcType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_2_OFFSET))(this, a1);
		}

		::System::Boolean get_FollowsOriginalSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_FOLLOWSORIGINALSOURCE_OFFSET))(this);
		}

		::CriWare::CriAtomEx_Randomize3dCalcType get_CalculationType()
		{
			return ((::CriWare::CriAtomEx_Randomize3dCalcType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET))(this);
		}

		::System::Single get_CalculationParameter1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER1_OFFSET))(this);
		}

		::System::Single get_CalculationParameter2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER2_OFFSET))(this);
		}

		::System::Single get_CalculationParameter3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER3_OFFSET))(this);
		}

		::System::Void ClearCalcParams(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean GetParamByType(::CriWare::CriAtomEx_Randomize3dParamType a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_Randomize3dParamType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GETPARAMBYTYPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetParamByType(::CriWare::CriAtomEx_Randomize3dParamType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_Randomize3dParamType, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_SETPARAMBYTYPE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET UNITYSDK_OFFSET(0x14EDE90)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GETPARAMBYTYPE_OFFSET UNITYSDK_OFFSET(0x14EDEE0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER1_OFFSET UNITYSDK_OFFSET(0x14EDD40)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER2_OFFSET UNITYSDK_OFFSET(0x14EDD80)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONPARAMETER3_OFFSET UNITYSDK_OFFSET(0x14EDDC0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_FOLLOWSORIGINALSOURCE_OFFSET UNITYSDK_OFFSET(0x29C50)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_SETPARAMBYTYPE_OFFSET UNITYSDK_OFFSET(0x14EDEF0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14EDE10)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0x14EDE20)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14EDE00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Randomize3dConfig_TypeDefinitionIndex = 30995;

	struct alignas(8) CriAtomEx_Randomize3dConfig
	{
		// static const ::System::Int32 NumOfCalcParams = 0x3; // 0x0
		::System::Boolean followsOriginalSource; // 0x10
		::CriWare::CriAtomEx_Randomize3dCalcType calculationType; // 0x14
		::Il2CppArray<::System::Single>* calculationParameters; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET))(this, data, startIndex);
		}

		::System::Void _ctor_1(::System::Boolean followsOriginalSource, ::CriWare::CriAtomEx_Randomize3dCalcType calculationType, ::System::Single param1, ::System::Single param2, ::System::Single param3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomEx_Randomize3dCalcType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_1_OFFSET))(this, followsOriginalSource, calculationType, param1, param2, param3);
		}

		::System::Void _ctor_2(::System::Int32 dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_2_OFFSET))(this, dummy);
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

		::System::Void ClearCalcParams(::System::Single initVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET))(this, initVal);
		}

		::System::Boolean GetParamByType(::CriWare::CriAtomEx_Randomize3dParamType paramType, ::System::Single& paramVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_Randomize3dParamType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GETPARAMBYTYPE_OFFSET))(this, paramType, paramVal);
		}

		::System::Boolean SetParamByType(::CriWare::CriAtomEx_Randomize3dParamType paramType, ::System::Single paramVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_Randomize3dParamType, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_SETPARAMBYTYPE_OFFSET))(this, paramType, paramVal);
		}
	};
}

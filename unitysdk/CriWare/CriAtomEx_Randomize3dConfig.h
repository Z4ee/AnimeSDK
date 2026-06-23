#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET UNITYSDK_OFFSET(0xA63F60)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA63ED0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Randomize3dConfig_TypeDefinitionIndex = 34264;

	struct alignas(8) CriAtomEx_Randomize3dConfig
	{
		::System::Boolean followsOriginalSource; // 0x10
		::CriWare::CriAtomEx_Randomize3dCalcType calculationType; // 0x14
		::Il2CppArray<::System::Single>* calculationParameters; // 0x18

		::System::Void _ctor(::System::Int32 dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG__CTOR_OFFSET))(this, dummy);
		}

		::CriWare::CriAtomEx_Randomize3dCalcType get_CalculationType()
		{
			return ((::CriWare::CriAtomEx_Randomize3dCalcType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET))(this);
		}

		::System::Void ClearCalcParams(::System::Single initVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET))(this, initVal);
		}
	};
}

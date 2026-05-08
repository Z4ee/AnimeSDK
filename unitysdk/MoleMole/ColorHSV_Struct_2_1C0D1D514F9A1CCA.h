#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_0B62749CB8B776DF_OFFSET UNITYSDK_OFFSET(0x7A2B30)
#define MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7A2A50)
#define MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x494CF0)

namespace MoleMole
{
	inline static constexpr unsigned int ColorHSV_Struct_2_1C0D1D514F9A1CCA_TypeDefinitionIndex = 79348;

	struct alignas(4) ColorHSV_Struct_2_1C0D1D514F9A1CCA
	{
		::System::Single Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x14
		::System::Single Field_2_2; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean Method_2_0B62749CB8B776DF(::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_0B62749CB8B776DF_OFFSET))(this, a1);
		}
	};
}

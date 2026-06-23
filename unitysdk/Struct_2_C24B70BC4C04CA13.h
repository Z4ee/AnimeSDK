#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define STRUCT_2_C24B70BC4C04CA13__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

inline static constexpr unsigned int Struct_2_C24B70BC4C04CA13_TypeDefinitionIndex = 87680;

struct alignas(8) Struct_2_C24B70BC4C04CA13
{
	::System::Collections::Generic::IEnumerable_1<::Struct_2_A725E4562D03EA4E_3>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Struct_2_A725E4562D03EA4E_3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Struct_2_A725E4562D03EA4E_3>*))((::PBYTE)hIl2Cpp + STRUCT_2_C24B70BC4C04CA13__CTOR_OFFSET))(this, a1);
	}
};

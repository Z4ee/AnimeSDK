#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4D2A06FEA755870D.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { template <typename T> class QuickList_1; }

#define STRUCT_2_B2973579E3FFEBDF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x5D7760)

inline static constexpr unsigned int Struct_2_B2973579E3FFEBDF_TypeDefinitionIndex = 51473;

struct alignas(8) Struct_2_B2973579E3FFEBDF
{
	::Nap::NapECS::QuickList_1<::Struct_2_4D2A06FEA755870D>* Field_2_0; // 0x10

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B2973579E3FFEBDF_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

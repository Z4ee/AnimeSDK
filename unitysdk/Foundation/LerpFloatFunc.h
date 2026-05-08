#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_LERPFLOATFUNC_FOUNDATION_ILERPFUNC_SYSTEM_SINGLE__LERP_OFFSET UNITYSDK_OFFSET(0x9BDB10)

namespace Foundation
{
	inline static constexpr unsigned int LerpFloatFunc_TypeDefinitionIndex = 8907;

	struct alignas(1) LerpFloatFunc
	{
		::System::Single Foundation_ILerpFunc_System_Single__Lerp(::System::Single a, ::System::Single b, ::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPFLOATFUNC_FOUNDATION_ILERPFUNC_SYSTEM_SINGLE__LERP_OFFSET))(this, a, b, alpha);
		}
	};
}

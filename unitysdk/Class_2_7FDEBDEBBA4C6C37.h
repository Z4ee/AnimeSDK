#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_29.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_7FDEBDEBBA4C6C37_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1208EA80)
#define CLASS_2_7FDEBDEBBA4C6C37_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x1208EAC0)
#define CLASS_2_7FDEBDEBBA4C6C37__CTOR_OFFSET UNITYSDK_OFFSET(0x1208EAD0)

inline static constexpr unsigned int Class_2_7FDEBDEBBA4C6C37_TypeDefinitionIndex = 55561;

class Class_2_7FDEBDEBBA4C6C37 : public ::Class_1_43BD383C98B4C0C5_29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDEBDEBBA4C6C37__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDEBDEBBA4C6C37_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDEBDEBBA4C6C37_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}
};

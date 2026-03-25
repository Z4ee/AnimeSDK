#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_23_CLEAR_OFFSET UNITYSDK_OFFSET(0x16892E00)
#define CLASS_1_43BD383C98B4C0C5_23_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16892E40)
#define CLASS_1_43BD383C98B4C0C5_23_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16892E80)
#define CLASS_1_43BD383C98B4C0C5_23__CTOR_OFFSET UNITYSDK_OFFSET(0x16892EC0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_23_TypeDefinitionIndex = 33560;

class Class_1_43BD383C98B4C0C5_23 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_23__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_23_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_23_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_23_ONRECYCLE_OFFSET))(this);
	}
};

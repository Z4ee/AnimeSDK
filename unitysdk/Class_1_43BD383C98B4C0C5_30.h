#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_30_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C57EC0)
#define CLASS_1_43BD383C98B4C0C5_30_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18C57F00)
#define CLASS_1_43BD383C98B4C0C5_30_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18C57F40)
#define CLASS_1_43BD383C98B4C0C5_30__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57F80)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_30_TypeDefinitionIndex = 40131;

class Class_1_43BD383C98B4C0C5_30 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_30__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_30_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_30_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_30_ONRECYCLE_OFFSET))(this);
	}
};

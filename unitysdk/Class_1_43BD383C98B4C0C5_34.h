#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_34_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C973550)
#define CLASS_1_43BD383C98B4C0C5_34_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C973590)
#define CLASS_1_43BD383C98B4C0C5_34_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9735D0)
#define CLASS_1_43BD383C98B4C0C5_34__CTOR_OFFSET UNITYSDK_OFFSET(0x1C973610)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_34_TypeDefinitionIndex = 43545;

class Class_1_43BD383C98B4C0C5_34 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_34__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_34_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_34_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_34_ONRECYCLE_OFFSET))(this);
	}
};

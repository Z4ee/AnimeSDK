#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_16_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C537CF0)
#define CLASS_1_7807B2B04302CD7B_16_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C537D40)
#define CLASS_1_7807B2B04302CD7B_16_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C537D80)
#define CLASS_1_7807B2B04302CD7B_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C537DD0)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_16_TypeDefinitionIndex = 41699;

class Class_1_7807B2B04302CD7B_16 : public ::System::Object
{
public:
	::System::Int32 GKHAABOKFAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_16__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_16_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_16_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_16_ONRECYCLE_OFFSET))(this);
	}
};

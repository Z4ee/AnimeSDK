#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_14_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E5E800)
#define CLASS_1_7807B2B04302CD7B_14_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E5E850)
#define CLASS_1_7807B2B04302CD7B_14_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17E5E890)
#define CLASS_1_7807B2B04302CD7B_14__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5E8E0)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_14_TypeDefinitionIndex = 39165;

class Class_1_7807B2B04302CD7B_14 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_14__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_14_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_14_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_14_ONRECYCLE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_258;

#define CLASS_1_DCC4A220F5A3F1EE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF44A70)
#define CLASS_1_DCC4A220F5A3F1EE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1BF44AF0)
#define CLASS_1_DCC4A220F5A3F1EE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1BF44B30)
#define CLASS_1_DCC4A220F5A3F1EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF44B70)

inline static constexpr unsigned int Class_1_DCC4A220F5A3F1EE_TypeDefinitionIndex = 40893;

class Class_1_DCC4A220F5A3F1EE : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_258* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_ONRECYCLE_OFFSET))(this);
	}
};

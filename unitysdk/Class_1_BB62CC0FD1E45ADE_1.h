#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EE6890)
#define CLASS_1_BB62CC0FD1E45ADE_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EE68D0)
#define CLASS_1_BB62CC0FD1E45ADE_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17EE6910)
#define CLASS_1_BB62CC0FD1E45ADE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE6950)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_1_TypeDefinitionIndex = 39333;

class Class_1_BB62CC0FD1E45ADE_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB62CC0FD1E45ADE_1_ONRECYCLE_OFFSET))(this);
	}
};

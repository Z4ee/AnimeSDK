#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB62CC0FD1E45ADE_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF92E40)
#define CLASS_1_BB62CC0FD1E45ADE_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1BF92E80)
#define CLASS_1_BB62CC0FD1E45ADE_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1BF92EC0)
#define CLASS_1_BB62CC0FD1E45ADE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF92F00)

inline static constexpr unsigned int Class_1_BB62CC0FD1E45ADE_1_TypeDefinitionIndex = 41874;

class Class_1_BB62CC0FD1E45ADE_1 : public ::System::Object
{
public:
	::System::String* DGFLDNACOFI; // 0x10
	::System::Boolean IPKICAFDKEP; // 0x18

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

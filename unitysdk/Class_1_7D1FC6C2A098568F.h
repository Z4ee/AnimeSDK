#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7D1FC6C2A098568F_GET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0x8D51080)
#define CLASS_1_7D1FC6C2A098568F_SET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0x8D51090)
#define CLASS_1_7D1FC6C2A098568F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D510A0)

inline static constexpr unsigned int Class_1_7D1FC6C2A098568F_TypeDefinitionIndex = 61711;

class Class_1_7D1FC6C2A098568F : public ::System::Object
{
public:
	::System::Int32 _OptionIndex_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1FC6C2A098568F__CTOR_OFFSET))(this);
	}

	::System::Int32 get_OptionIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1FC6C2A098568F_GET_OPTIONINDEX_OFFSET))(this);
	}

	::System::Void set_OptionIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D1FC6C2A098568F_SET_OPTIONINDEX_OFFSET))(this, value);
	}
};

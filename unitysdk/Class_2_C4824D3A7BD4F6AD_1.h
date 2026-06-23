#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_C4824D3A7BD4F6AD_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x127F6930)
#define CLASS_2_C4824D3A7BD4F6AD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x127F6920)

inline static constexpr unsigned int Class_2_C4824D3A7BD4F6AD_1_TypeDefinitionIndex = 82612;

class Class_2_C4824D3A7BD4F6AD_1 : public ::System::Attribute
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};

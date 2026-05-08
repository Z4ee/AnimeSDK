#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_7D31A50BD2150408.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FD62AF1CA65B7F45_METHOD_1_7F52C63BAD7AD59D_OFFSET UNITYSDK_OFFSET(0x13249B90)
#define CLASS_1_FD62AF1CA65B7F45__CTOR_OFFSET UNITYSDK_OFFSET(0x13249C80)

inline static constexpr unsigned int Class_1_FD62AF1CA65B7F45_TypeDefinitionIndex = 66363;

class Class_1_FD62AF1CA65B7F45 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD62AF1CA65B7F45__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7F52C63BAD7AD59D(::Struct_2_7D31A50BD2150408 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7D31A50BD2150408))((::PBYTE)hIl2Cpp + CLASS_1_FD62AF1CA65B7F45_METHOD_1_7F52C63BAD7AD59D_OFFSET))(this, a1);
	}
};

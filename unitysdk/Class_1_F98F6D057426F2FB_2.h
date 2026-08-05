#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_F98F6D057426F2FB_2_METHOD_1_F6945418C3EF6D3A_OFFSET UNITYSDK_OFFSET(0x18173730)
#define CLASS_1_F98F6D057426F2FB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18173720)

inline static constexpr unsigned int Class_1_F98F6D057426F2FB_2_TypeDefinitionIndex = 56727;

class Class_1_F98F6D057426F2FB_2 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F98F6D057426F2FB_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_F6945418C3EF6D3A(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F98F6D057426F2FB_2_METHOD_1_F6945418C3EF6D3A_OFFSET))(this, a1);
	}
};

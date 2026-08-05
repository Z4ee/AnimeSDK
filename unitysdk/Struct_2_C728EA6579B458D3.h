#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_C728EA6579B458D3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x875C50)
#define STRUCT_2_C728EA6579B458D3_EQUALS_OFFSET UNITYSDK_OFFSET(0x875C10)
#define STRUCT_2_C728EA6579B458D3_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x875D50)

inline static constexpr unsigned int Struct_2_C728EA6579B458D3_TypeDefinitionIndex = 67928;

struct alignas(8) Struct_2_C728EA6579B458D3
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x30

	::System::Boolean Equals(::Struct_2_C728EA6579B458D3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C728EA6579B458D3))((::PBYTE)hIl2Cpp + STRUCT_2_C728EA6579B458D3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_C728EA6579B458D3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_C728EA6579B458D3_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

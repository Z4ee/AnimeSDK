#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_61A5922E5046F385_3;
namespace System { class String; }

#define STRUCT_2_5060F38EC3D9F5D5_INVOKE_OFFSET UNITYSDK_OFFSET(0x978030)
#define STRUCT_2_5060F38EC3D9F5D5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x978040)

inline static constexpr unsigned int Struct_2_5060F38EC3D9F5D5_TypeDefinitionIndex = 54171;

struct alignas(8) Struct_2_5060F38EC3D9F5D5
{
	::System::String* Field_2_1; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x28

	::System::Void Invoke(::Class_3_61A5922E5046F385_3* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5060F38EC3D9F5D5_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5060F38EC3D9F5D5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};

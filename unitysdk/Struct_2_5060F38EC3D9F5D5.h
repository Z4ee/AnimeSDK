#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_61A5922E5046F385_1;
namespace System { class String; }

#define STRUCT_2_5060F38EC3D9F5D5_INVOKE_OFFSET UNITYSDK_OFFSET(0x7D9CC0)
#define STRUCT_2_5060F38EC3D9F5D5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7D9CD0)

inline static constexpr unsigned int Struct_2_5060F38EC3D9F5D5_TypeDefinitionIndex = 75198;

struct alignas(8) Struct_2_5060F38EC3D9F5D5
{
	::System::String* Field_2_0; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x28

	::System::Void Invoke(::Class_3_61A5922E5046F385_1* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5060F38EC3D9F5D5_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5060F38EC3D9F5D5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};

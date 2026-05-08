#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AADF24AF29C5ADF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET UNITYSDK_OFFSET(0x12A0BD50)
#define STRUCT_2_575273D27F02957E__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A0BD00)
#define STRUCT_2_575273D27F02957E__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

inline static constexpr unsigned int Struct_2_575273D27F02957E_TypeDefinitionIndex = 50203;

struct alignas(8) Struct_2_575273D27F02957E
{
	static ::Struct_2_575273D27F02957E* StaticGet_Field_2_0()
	{
		return (::Struct_2_575273D27F02957E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_575273D27F02957E_TypeDefinitionIndex)->GetStaticField(0x3CA00);
	}
	::Enum_3_7AADF24AF29C5ADF Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18

	::System::Void _ctor(::Enum_3_7AADF24AF29C5ADF a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7AADF24AF29C5ADF, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CCTOR_OFFSET))();
	}

	static ::Struct_2_575273D27F02957E Method_2_9B5206D70B3FF4F5(::Enum_3_7AADF24AF29C5ADF a1)
	{
		return ((::Struct_2_575273D27F02957E(*)(::Enum_3_7AADF24AF29C5ADF))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET))(a1);
	}
};

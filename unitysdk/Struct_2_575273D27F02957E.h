#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F32457E56C42566.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET UNITYSDK_OFFSET(0xB78EA60)
#define STRUCT_2_575273D27F02957E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB78EA10)
#define STRUCT_2_575273D27F02957E__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Struct_2_575273D27F02957E_TypeDefinitionIndex = 47379;

struct alignas(8) Struct_2_575273D27F02957E
{
	static ::Struct_2_575273D27F02957E* StaticGet_Field_2_0()
	{
		return (::Struct_2_575273D27F02957E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_575273D27F02957E_TypeDefinitionIndex)->GetStaticField(0x2ECB0);
	}
	::Enum_3_5F32457E56C42566 Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18

	::System::Void _ctor(::Enum_3_5F32457E56C42566 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_5F32457E56C42566, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CCTOR_OFFSET))();
	}

	static ::Struct_2_575273D27F02957E Method_2_9B5206D70B3FF4F5(::Enum_3_5F32457E56C42566 a1)
	{
		return ((::Struct_2_575273D27F02957E(*)(::Enum_3_5F32457E56C42566))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET))(a1);
	}
};

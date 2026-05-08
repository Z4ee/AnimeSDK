#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Struct_2_9663F620BC91CEFB_TypeDefinitionIndex = 46805;

template <typename TEnum>
struct Struct_2_9663F620BC91CEFB
{
	static ::Il2CppArray<TEnum>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<TEnum>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9663F620BC91CEFB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Struct_2_ACD0EF80A5330786 Field_2_1; // 0x0
	::System::Double Field_2_2; // 0x0
	TEnum Field_2_3; // 0x0
	TEnum Field_2_4; // 0x0
	::Foundation::EnumAsFlag_1<TEnum> Field_2_5; // 0x0
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A>> Field_2_6; // 0x0
	::Foundation::ReadOnlyNativeVariableArray_1<::System::Single> Field_2_7; // 0x0
	static ::Struct_2_9663F620BC91CEFB<TEnum>* StaticGet_Field_2_8()
	{
		return (::Struct_2_9663F620BC91CEFB<TEnum>*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9663F620BC91CEFB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};

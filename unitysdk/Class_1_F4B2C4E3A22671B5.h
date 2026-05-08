#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/Foundation/Tuple_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4B2C4E3A22671B5_METHOD_1_AA21E515015B85FE_OFFSET UNITYSDK_OFFSET(0xE87BFB0)
#define CLASS_1_F4B2C4E3A22671B5_METHOD_1_DFE3441061D09D8B_OFFSET UNITYSDK_OFFSET(0xE87BFA0)
#define CLASS_1_F4B2C4E3A22671B5__CTOR_OFFSET UNITYSDK_OFFSET(0xE87BB80)

inline static constexpr unsigned int Class_1_F4B2C4E3A22671B5_TypeDefinitionIndex = 58855;

class Class_1_F4B2C4E3A22671B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Enum_3_9FBDB47166F97B2B a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_9FBDB47166F97B2B, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4B2C4E3A22671B5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* Method_1_DFE3441061D09D8B()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B2C4E3A22671B5_METHOD_1_DFE3441061D09D8B_OFFSET))(this);
	}

	::System::Void Method_1_AA21E515015B85FE(::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + CLASS_1_F4B2C4E3A22671B5_METHOD_1_AA21E515015B85FE_OFFSET))(this, a1);
	}
};

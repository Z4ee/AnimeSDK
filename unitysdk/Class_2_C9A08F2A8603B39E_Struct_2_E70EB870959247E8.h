#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_8.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x801EE0)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_EQUALS_OFFSET UNITYSDK_OFFSET(0x801E00)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x801EF0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8_TypeDefinitionIndex = 74868;

struct alignas(8) Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::Enum_3_F80BFD5B986D5503_8 Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x30

	::System::Boolean Equals(::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Struct_2_E70EB870959247E8))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_E70EB870959247E8_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

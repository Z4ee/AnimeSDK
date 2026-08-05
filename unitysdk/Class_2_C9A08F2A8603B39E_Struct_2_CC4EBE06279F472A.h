#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A93187421020321F;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x801C80)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_EQUALS_OFFSET UNITYSDK_OFFSET(0x801C50)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x801D70)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A_TypeDefinitionIndex = 74875;

struct alignas(8) Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A
{
	::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* Field_2_1; // 0x10
	::Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE Field_2_0; // 0x18

	::System::Boolean Equals(::Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Struct_2_CC4EBE06279F472A))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_CC4EBE06279F472A_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

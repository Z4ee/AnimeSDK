#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x77B750)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_EQUALS_OFFSET UNITYSDK_OFFSET(0x77B690)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x77B760)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40_TypeDefinitionIndex = 51650;

struct alignas(8) Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Boolean Equals(::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_AF2E1D815DB2CF40_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

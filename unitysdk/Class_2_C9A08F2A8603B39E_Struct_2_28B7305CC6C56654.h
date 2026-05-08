#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A93187421020321F;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x715CD0)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_EQUALS_OFFSET UNITYSDK_OFFSET(0x715CA0)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x715DC0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654_TypeDefinitionIndex = 51649;

struct alignas(8) Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654
{
	::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* Field_2_0; // 0x10
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_1; // 0x18

	::System::Boolean Equals(::Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Struct_2_28B7305CC6C56654))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_28B7305CC6C56654_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EE0106BAC68200BB_STRUCT_2_B1B896BDADFBB2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x75F0B0)

inline static constexpr unsigned int Class_2_EE0106BAC68200BB_Struct_2_B1B896BDADFBB2E5_TypeDefinitionIndex = 55109;

struct alignas(8) Class_2_EE0106BAC68200BB_Struct_2_B1B896BDADFBB2E5
{
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x18
	::Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB Field_2_2; // 0x20

	::System::Void _ctor(::Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EE0106BAC68200BB_Enum_3_6E4FEE55A8C64FCB))((::PBYTE)hIl2Cpp + CLASS_2_EE0106BAC68200BB_STRUCT_2_B1B896BDADFBB2E5__CTOR_OFFSET))(this, a1);
	}
};

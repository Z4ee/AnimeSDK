#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381_METHOD_1_00E95FA340C63433_OFFSET UNITYSDK_OFFSET(0xEA92D50)
#define CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381__CTOR_OFFSET UNITYSDK_OFFSET(0xEA92D40)

inline static constexpr unsigned int Class_3_124B5F7CB54D16F5_Class_1_F9514849C9BF2381_TypeDefinitionIndex = 45584;

class Class_3_124B5F7CB54D16F5_Class_1_F9514849C9BF2381 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_00E95FA340C63433(::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2))((::PBYTE)hIl2Cpp + CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381_METHOD_1_00E95FA340C63433_OFFSET))(this, a1);
	}
};

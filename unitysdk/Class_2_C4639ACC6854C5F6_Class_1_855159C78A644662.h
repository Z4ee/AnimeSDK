#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_C4639ACC6854C5F6;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C4639ACC6854C5F6_CLASS_1_855159C78A644662__CTOR_OFFSET UNITYSDK_OFFSET(0x18C03410)

inline static constexpr unsigned int Class_2_C4639ACC6854C5F6_Class_1_855159C78A644662_TypeDefinitionIndex = 84016;

class Class_2_C4639ACC6854C5F6_Class_1_855159C78A644662 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_0; // 0x18
	::Class_2_C4639ACC6854C5F6* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4639ACC6854C5F6_CLASS_1_855159C78A644662__CTOR_OFFSET))(this);
	}
};

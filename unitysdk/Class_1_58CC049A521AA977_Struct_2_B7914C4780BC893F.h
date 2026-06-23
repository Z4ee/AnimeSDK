#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_58CC049A521AA977_STRUCT_2_B7914C4780BC893F_METHOD_2_87E19CC4B739A03A_OFFSET UNITYSDK_OFFSET(0x5EFA00)
#define CLASS_1_58CC049A521AA977_STRUCT_2_B7914C4780BC893F__CTOR_OFFSET UNITYSDK_OFFSET(0x5EF960)

inline static constexpr unsigned int Class_1_58CC049A521AA977_Struct_2_B7914C4780BC893F_TypeDefinitionIndex = 85949;

struct alignas(8) Class_1_58CC049A521AA977_Struct_2_B7914C4780BC893F
{
	::System::Collections::Generic::Stack_1<::System::Collections::IEnumerator*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::IEnumerator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_STRUCT_2_B7914C4780BC893F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E19CC4B739A03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_STRUCT_2_B7914C4780BC893F_METHOD_2_87E19CC4B739A03A_OFFSET))(this);
	}
};

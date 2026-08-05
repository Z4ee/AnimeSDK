#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_4.h"
#include "unitysdk/System/Object.h"

class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_044AC9D510AE7D68_CLASS_1_DEAF57DB97862585_METHOD_1_3ED26E09127762F0_OFFSET UNITYSDK_OFFSET(0x1DB56DE0)
#define CLASS_1_044AC9D510AE7D68_CLASS_1_DEAF57DB97862585__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB56DD0)

inline static constexpr unsigned int Class_1_044AC9D510AE7D68_Class_1_DEAF57DB97862585_TypeDefinitionIndex = 91906;

class Class_1_044AC9D510AE7D68_Class_1_DEAF57DB97862585 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::Class_3_6F28FFD006F2B451* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044AC9D510AE7D68_CLASS_1_DEAF57DB97862585__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3ED26E09127762F0(::Struct_2_A725E4562D03EA4E_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A725E4562D03EA4E_4))((::PBYTE)hIl2Cpp + CLASS_1_044AC9D510AE7D68_CLASS_1_DEAF57DB97862585_METHOD_1_3ED26E09127762F0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_2.h"
#include "unitysdk/System/Object.h"

class Class_2_A09FCF98BA7C7265;
class Class_2_F0F41486FFD01756;
class Class_3_412776396A6B9A05_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_502973979CAA5623_CLASS_1_0AC0F0546D0CC9E4_METHOD_1_1B1FD38D43242EC1_OFFSET UNITYSDK_OFFSET(0x1CCB8190)
#define CLASS_1_502973979CAA5623_CLASS_1_0AC0F0546D0CC9E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB8180)

inline static constexpr unsigned int Class_1_502973979CAA5623_Class_1_0AC0F0546D0CC9E4_TypeDefinitionIndex = 88862;

class Class_1_502973979CAA5623_Class_1_0AC0F0546D0CC9E4 : public ::System::Object
{
public:
	::Class_3_412776396A6B9A05_1* Field_1_0; // 0x10
	::Class_2_F0F41486FFD01756* Field_1_1; // 0x18
	::Class_2_A09FCF98BA7C7265* Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502973979CAA5623_CLASS_1_0AC0F0546D0CC9E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B1FD38D43242EC1(::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>*))((::PBYTE)hIl2Cpp + CLASS_1_502973979CAA5623_CLASS_1_0AC0F0546D0CC9E4_METHOD_1_1B1FD38D43242EC1_OFFSET))(this, a1);
	}
};

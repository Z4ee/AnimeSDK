#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_502973979CAA5623_CLASS_1_38EE927928DDE73E_METHOD_1_15A8040EF1E6BDF2_OFFSET UNITYSDK_OFFSET(0x1CCB8040)
#define CLASS_1_502973979CAA5623_CLASS_1_38EE927928DDE73E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB8030)

inline static constexpr unsigned int Class_1_502973979CAA5623_Class_1_38EE927928DDE73E_TypeDefinitionIndex = 88863;

class Class_1_502973979CAA5623_Class_1_38EE927928DDE73E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502973979CAA5623_CLASS_1_38EE927928DDE73E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_15A8040EF1E6BDF2(::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_2>*))((::PBYTE)hIl2Cpp + CLASS_1_502973979CAA5623_CLASS_1_38EE927928DDE73E_METHOD_1_15A8040EF1E6BDF2_OFFSET))(this, a1);
	}
};

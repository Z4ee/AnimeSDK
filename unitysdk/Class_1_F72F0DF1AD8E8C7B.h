#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_28;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x171F1B90)
#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_88E647B67ABF78BD_OFFSET UNITYSDK_OFFSET(0x171F2850)
#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_D03A29DB2C447FBA_OFFSET UNITYSDK_OFFSET(0x171F2580)
#define CLASS_1_F72F0DF1AD8E8C7B__CTOR_OFFSET UNITYSDK_OFFSET(0x171F1B80)

inline static constexpr unsigned int Class_1_F72F0DF1AD8E8C7B_TypeDefinitionIndex = 54249;

class Class_1_F72F0DF1AD8E8C7B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_33E2FA8E6403B93D_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_28*>* Method_1_88E647B67ABF78BD(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_28*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_88E647B67ABF78BD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_28*>* Method_1_D03A29DB2C447FBA(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_28*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_D03A29DB2C447FBA_OFFSET))(a1);
	}
};

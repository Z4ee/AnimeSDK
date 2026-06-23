#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_30;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B79FE8F811C2C15_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1340E120)
#define CLASS_1_2B79FE8F811C2C15_METHOD_1_9A90FBD3782C8504_OFFSET UNITYSDK_OFFSET(0x1340DB80)
#define CLASS_1_2B79FE8F811C2C15_METHOD_1_D03A29DB2C447FBA_OFFSET UNITYSDK_OFFSET(0x1340DE50)
#define CLASS_1_2B79FE8F811C2C15__CTOR_OFFSET UNITYSDK_OFFSET(0x1340DB70)

inline static constexpr unsigned int Class_1_2B79FE8F811C2C15_TypeDefinitionIndex = 73980;

class Class_1_2B79FE8F811C2C15 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B79FE8F811C2C15__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>* Method_1_9A90FBD3782C8504(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B79FE8F811C2C15_METHOD_1_9A90FBD3782C8504_OFFSET))(a1);
	}

	static ::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B79FE8F811C2C15_METHOD_1_33E2FA8E6403B93D_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>* Method_1_D03A29DB2C447FBA(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B79FE8F811C2C15_METHOD_1_D03A29DB2C447FBA_OFFSET))(a1);
	}
};

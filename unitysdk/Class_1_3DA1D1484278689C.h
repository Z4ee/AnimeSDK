#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_DDEA15C15400616B;
class Class_3_C66DEDBB208C643C;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DA1D1484278689C_METHOD_1_101A641E261C7E9B_OFFSET UNITYSDK_OFFSET(0x189CD0E0)
#define CLASS_1_3DA1D1484278689C_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0x189CD3A0)
#define CLASS_1_3DA1D1484278689C_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x189CCEE0)
#define CLASS_1_3DA1D1484278689C__CTOR_OFFSET UNITYSDK_OFFSET(0x189CCE20)

inline static constexpr unsigned int Class_1_3DA1D1484278689C_TypeDefinitionIndex = 34686;

class Class_1_3DA1D1484278689C : public ::System::Object
{
public:
	::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* Field_1_1; // 0x18
	::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x28
	::Class_3_C66DEDBB208C643C* Field_1_4; // 0x30
	::Class_1_3DA1D1484278689C_ReceiveMode Field_1_5; // 0x38

	::System::Void _ctor(::Class_3_C66DEDBB208C643C* a1, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* a2, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C66DEDBB208C643C*, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>*, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_DDEA15C15400616B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDEA15C15400616B*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_841D90BDB3E94FF6(::Class_1_78A7ED2C7E071DF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78A7ED2C7E071DF9*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::Class_1_78A7ED2C7E071DF9* Method_1_101A641E261C7E9B(::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* a1)
	{
		return ((::Class_1_78A7ED2C7E071DF9*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_101A641E261C7E9B_OFFSET))(this, a1);
	}
};

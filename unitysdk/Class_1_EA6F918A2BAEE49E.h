#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA6F918A2BAEE49E_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x156AA560)
#define CLASS_1_EA6F918A2BAEE49E_METHOD_1_CA43E3A13B558858_OFFSET UNITYSDK_OFFSET(0x156AA380)
#define CLASS_1_EA6F918A2BAEE49E_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x156AA2A0)
#define CLASS_1_EA6F918A2BAEE49E__CTOR_OFFSET UNITYSDK_OFFSET(0x156AA250)

inline static constexpr unsigned int Class_1_EA6F918A2BAEE49E_TypeDefinitionIndex = 65368;

class Class_1_EA6F918A2BAEE49E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* BLICIKDLKOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6F918A2BAEE49E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_2670985A37556FEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_1_EA6F918A2BAEE49E_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA43E3A13B558858(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA6F918A2BAEE49E_METHOD_1_CA43E3A13B558858_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6F918A2BAEE49E_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};

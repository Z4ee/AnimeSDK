#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B072F3932DB9488D_1_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x15CC5840)
#define CLASS_1_B072F3932DB9488D_1_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x15CC5760)
#define CLASS_1_B072F3932DB9488D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC5880)

inline static constexpr unsigned int Class_1_B072F3932DB9488D_1_TypeDefinitionIndex = 71957;

class Class_1_B072F3932DB9488D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* JENBLIPHHMO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B072F3932DB9488D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_B072F3932DB9488D_1_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B072F3932DB9488D_1_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};

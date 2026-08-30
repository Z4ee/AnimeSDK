#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27B56D19ACB88C10;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B072F3932DB9488D_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1C117AF0)
#define CLASS_1_B072F3932DB9488D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1405B0)

inline static constexpr unsigned int Class_1_B072F3932DB9488D_TypeDefinitionIndex = 35826;

class Class_1_B072F3932DB9488D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_27B56D19ACB88C10*>* KKOHGABGELH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B072F3932DB9488D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_27B56D19ACB88C10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27B56D19ACB88C10*))((::PBYTE)hIl2Cpp + CLASS_1_B072F3932DB9488D_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};

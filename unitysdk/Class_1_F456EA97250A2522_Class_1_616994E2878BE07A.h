#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F456EA97250A2522_CLASS_1_616994E2878BE07A_METHOD_1_F85D449F309A859E_OFFSET UNITYSDK_OFFSET(0x11E69900)
#define CLASS_1_F456EA97250A2522_CLASS_1_616994E2878BE07A__CTOR_OFFSET UNITYSDK_OFFSET(0x11E698F0)

inline static constexpr unsigned int Class_1_F456EA97250A2522_Class_1_616994E2878BE07A_TypeDefinitionIndex = 39781;

class Class_1_F456EA97250A2522_Class_1_616994E2878BE07A : public ::System::Object
{
public:
	::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Boolean>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522_CLASS_1_616994E2878BE07A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F85D449F309A859E(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522_CLASS_1_616994E2878BE07A_METHOD_1_F85D449F309A859E_OFFSET))(this, a1);
	}
};

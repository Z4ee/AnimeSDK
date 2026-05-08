#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_079DD42376760A5C___C_METHOD_1_71E03FFB54AF3649_OFFSET UNITYSDK_OFFSET(0x12BB1DB0)
#define CLASS_5_079DD42376760A5C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB1D60)
#define CLASS_5_079DD42376760A5C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1DA0)

inline static constexpr unsigned int Class_5_079DD42376760A5C___c_TypeDefinitionIndex = 59318;

class Class_5_079DD42376760A5C___c : public ::System::Object
{
public:
	static ::Class_5_079DD42376760A5C___c** StaticGet___9()
	{
		return (::Class_5_079DD42376760A5C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_079DD42376760A5C___c_TypeDefinitionIndex)->GetStaticField(0x2FD30);
	}
	static ::System::Func_2<::Class_5_A6F8D19602712D95*, ::System::Boolean>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_5_A6F8D19602712D95*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_079DD42376760A5C___c_TypeDefinitionIndex)->GetStaticField(0x2FD38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71E03FFB54AF3649(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C_METHOD_1_71E03FFB54AF3649_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E9E7743CAF4E16BD;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_2F4236517D57925C___C_METHOD_1_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0xE87A730)
#define CLASS_3_2F4236517D57925C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE87A6E0)
#define CLASS_3_2F4236517D57925C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE87A720)

inline static constexpr unsigned int Class_3_2F4236517D57925C___c_TypeDefinitionIndex = 79964;

class Class_3_2F4236517D57925C___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_E9E7743CAF4E16BD*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_E9E7743CAF4E16BD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2F4236517D57925C___c_TypeDefinitionIndex)->GetStaticField(0x46E20);
	}
	static ::Class_3_2F4236517D57925C___c** StaticGet___9()
	{
		return (::Class_3_2F4236517D57925C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2F4236517D57925C___c_TypeDefinitionIndex)->GetStaticField(0x46E28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2F4236517D57925C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F4236517D57925C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFF96E989AC38879(::Class_3_E9E7743CAF4E16BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E9E7743CAF4E16BD*))((::PBYTE)hIl2Cpp + CLASS_3_2F4236517D57925C___C_METHOD_1_BFF96E989AC38879_OFFSET))(this, a1);
	}
};

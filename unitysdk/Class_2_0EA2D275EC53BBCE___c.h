#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_0EA2D275EC53BBCE___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x146387E0)
#define CLASS_2_0EA2D275EC53BBCE___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14638820)
#define CLASS_2_0EA2D275EC53BBCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14638790)
#define CLASS_2_0EA2D275EC53BBCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146387D0)

inline static constexpr unsigned int Class_2_0EA2D275EC53BBCE___c_TypeDefinitionIndex = 44683;

class Class_2_0EA2D275EC53BBCE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__7_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA2D275EC53BBCE___c_TypeDefinitionIndex)->GetStaticField(0x4D120);
	}
	static ::Class_2_0EA2D275EC53BBCE___c** StaticGet___9()
	{
		return (::Class_2_0EA2D275EC53BBCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA2D275EC53BBCE___c_TypeDefinitionIndex)->GetStaticField(0x4D128);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA2D275EC53BBCE___c_TypeDefinitionIndex)->GetStaticField(0x4D130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0EA2D275EC53BBCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA2D275EC53BBCE___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA2D275EC53BBCE___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA2D275EC53BBCE___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

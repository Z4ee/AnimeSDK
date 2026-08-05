#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F0B613BC774A598_1;
class Class_2_208CC9941471731A_339;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6B9BA8441E94A95A___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x141A7490)
#define CLASS_1_6B9BA8441E94A95A___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x141A7470)
#define CLASS_1_6B9BA8441E94A95A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141A7420)
#define CLASS_1_6B9BA8441E94A95A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141A7460)

inline static constexpr unsigned int Class_1_6B9BA8441E94A95A___c_TypeDefinitionIndex = 85421;

class Class_1_6B9BA8441E94A95A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_208CC9941471731A_339*, ::System::Int32>** StaticGet___9__50_1()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_339*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B9BA8441E94A95A___c_TypeDefinitionIndex)->GetStaticField(0x34710);
	}
	static ::Class_1_6B9BA8441E94A95A___c** StaticGet___9()
	{
		return (::Class_1_6B9BA8441E94A95A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B9BA8441E94A95A___c_TypeDefinitionIndex)->GetStaticField(0x34718);
	}
	static ::System::Func_2<::Class_1_5F0B613BC774A598_1*, ::System::Boolean>** StaticGet___9__46_0()
	{
		return (::System::Func_2<::Class_1_5F0B613BC774A598_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B9BA8441E94A95A___c_TypeDefinitionIndex)->GetStaticField(0x34720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B9BA8441E94A95A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B9BA8441E94A95A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_339* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_339*))((::PBYTE)hIl2Cpp + CLASS_1_6B9BA8441E94A95A___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_5F0B613BC774A598_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F0B613BC774A598_1*))((::PBYTE)hIl2Cpp + CLASS_1_6B9BA8441E94A95A___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};

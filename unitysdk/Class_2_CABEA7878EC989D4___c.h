#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9D33A2E94B3E53DC;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_CABEA7878EC989D4___C_METHOD_1_6D9928F240CC3649_OFFSET UNITYSDK_OFFSET(0x1B9C36C0)
#define CLASS_2_CABEA7878EC989D4___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x1B9C36A0)
#define CLASS_2_CABEA7878EC989D4___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1B9C35F0)
#define CLASS_2_CABEA7878EC989D4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9C35A0)
#define CLASS_2_CABEA7878EC989D4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C35E0)

inline static constexpr unsigned int Class_2_CABEA7878EC989D4___c_TypeDefinitionIndex = 49280;

class Class_2_CABEA7878EC989D4___c : public ::System::Object
{
public:
	static ::Class_2_CABEA7878EC989D4___c** StaticGet___9()
	{
		return (::Class_2_CABEA7878EC989D4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CABEA7878EC989D4___c_TypeDefinitionIndex)->GetStaticField(0x41700);
	}
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CABEA7878EC989D4___c_TypeDefinitionIndex)->GetStaticField(0x41708);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CABEA7878EC989D4___c_TypeDefinitionIndex)->GetStaticField(0x41710);
	}
	static ::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CABEA7878EC989D4___c_TypeDefinitionIndex)->GetStaticField(0x41718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CABEA7878EC989D4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABEA7878EC989D4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABEA7878EC989D4___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_CABEA7878EC989D4___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::System::String* Method_1_6D9928F240CC3649()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABEA7878EC989D4___C_METHOD_1_6D9928F240CC3649_OFFSET))(this);
	}
};

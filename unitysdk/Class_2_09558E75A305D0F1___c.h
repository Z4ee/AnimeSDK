#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E21E2F8DEAA5F4C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_09558E75A305D0F1___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16527BA0)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x16527B90)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x16527BE0)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x16527DF0)
#define CLASS_2_09558E75A305D0F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16527B40)
#define CLASS_2_09558E75A305D0F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16527B80)

inline static constexpr unsigned int Class_2_09558E75A305D0F1___c_TypeDefinitionIndex = 71852;

class Class_2_09558E75A305D0F1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__42_14()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BE80);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__41_9()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BE88);
	}
	static ::Class_2_09558E75A305D0F1___c** StaticGet___9()
	{
		return (::Class_2_09558E75A305D0F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BE90);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__42_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BE98);
	}
	static ::System::Action_1<::Class_3_7E21E2F8DEAA5F4C*>** StaticGet___9__42_23()
	{
		return (::System::Action_1<::Class_3_7E21E2F8DEAA5F4C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BEA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_7E21E2F8DEAA5F4C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E21E2F8DEAA5F4C*))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};

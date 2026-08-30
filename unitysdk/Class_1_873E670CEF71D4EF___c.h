#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_873E670CEF71D4EF;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_873E670CEF71D4EF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D113A0)
#define CLASS_1_873E670CEF71D4EF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D113D0)
#define CLASS_1_873E670CEF71D4EF___C__INITIALIZE_B__4_0_OFFSET UNITYSDK_OFFSET(0x18D113E0)
#define CLASS_1_873E670CEF71D4EF___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_0_OFFSET UNITYSDK_OFFSET(0x18D11400)
#define CLASS_1_873E670CEF71D4EF___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_1_OFFSET UNITYSDK_OFFSET(0x18D11430)
#define CLASS_1_873E670CEF71D4EF___C___LISTENLEVELVAR_B__25_0_OFFSET UNITYSDK_OFFSET(0x18D11460)

inline static constexpr unsigned int Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex = 76645;

class Class_1_873E670CEF71D4EF___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_873E670CEF71D4EF*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_1_873E670CEF71D4EF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex)->GetStaticField(0x63A90);
	}
	static ::System::Action_3<::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__13_0()
	{
		return (::System::Action_3<::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex)->GetStaticField(0x63A98);
	}
	static ::System::Action_3<::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__13_1()
	{
		return (::System::Action_3<::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex)->GetStaticField(0x63AA0);
	}
	static ::Class_1_873E670CEF71D4EF___c** StaticGet___9()
	{
		return (::Class_1_873E670CEF71D4EF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex)->GetStaticField(0x63AA8);
	}
	static ::System::Action_3<::Class_1_873E670CEF71D4EF*, ::System::Int32, ::System::String*>** StaticGet___9__25_0()
	{
		return (::System::Action_3<::Class_1_873E670CEF71D4EF*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_873E670CEF71D4EF___c_TypeDefinitionIndex)->GetStaticField(0x63AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__4_0(::Class_1_873E670CEF71D4EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_873E670CEF71D4EF*))((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C__INITIALIZE_B__4_0_OFFSET))(this, a1);
	}

	::System::Void __DeployGravityFieldRingTrigger_b__13_0(::Class_1_873E670CEF71D4EF* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __DeployGravityFieldRingTrigger_b__13_1(::Class_1_873E670CEF71D4EF* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_873E670CEF71D4EF*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __ListenLevelVar_b__25_0(::Class_1_873E670CEF71D4EF* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_873E670CEF71D4EF*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_873E670CEF71D4EF___C___LISTENLEVELVAR_B__25_0_OFFSET))(this, a1, a2, a3);
	}
};

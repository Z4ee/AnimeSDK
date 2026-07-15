#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_71117DDA8AC6CF50;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_71117DDA8AC6CF50___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C2520)
#define CLASS_1_71117DDA8AC6CF50___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165C2550)
#define CLASS_1_71117DDA8AC6CF50___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0x165C2560)
#define CLASS_1_71117DDA8AC6CF50___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0x165C2590)
#define CLASS_1_71117DDA8AC6CF50___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x165C2610)

inline static constexpr unsigned int Class_1_71117DDA8AC6CF50___c_TypeDefinitionIndex = 73206;

class Class_1_71117DDA8AC6CF50___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
	{
		return (::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71117DDA8AC6CF50___c_TypeDefinitionIndex)->GetStaticField(0x680B0);
	}
	static ::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71117DDA8AC6CF50___c_TypeDefinitionIndex)->GetStaticField(0x680B8);
	}
	static ::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71117DDA8AC6CF50___c_TypeDefinitionIndex)->GetStaticField(0x680C0);
	}
	static ::Class_1_71117DDA8AC6CF50___c** StaticGet___9()
	{
		return (::Class_1_71117DDA8AC6CF50___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71117DDA8AC6CF50___c_TypeDefinitionIndex)->GetStaticField(0x680C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_0(::Class_1_71117DDA8AC6CF50* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __DeploySpikeTrapTrigger_b__9_1(::Class_1_71117DDA8AC6CF50* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71117DDA8AC6CF50*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __ListenLevelVar_b__23_0(::Class_1_71117DDA8AC6CF50* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71117DDA8AC6CF50*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_506D57F42A72C81E;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_506D57F42A72C81E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C74A0)
#define CLASS_2_506D57F42A72C81E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181C74D0)
#define CLASS_2_506D57F42A72C81E___C__GET__TRIGGERFILTER_B__8_0_OFFSET UNITYSDK_OFFSET(0x181C7530)
#define CLASS_2_506D57F42A72C81E___C___CREATETRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0x181C74E0)
#define CLASS_2_506D57F42A72C81E___C___CREATETRIGGER_B__6_1_OFFSET UNITYSDK_OFFSET(0x181C7510)

inline static constexpr unsigned int Class_2_506D57F42A72C81E___c_TypeDefinitionIndex = 73199;

class Class_2_506D57F42A72C81E___c : public ::System::Object
{
public:
	static ::Class_2_506D57F42A72C81E___c** StaticGet___9()
	{
		return (::Class_2_506D57F42A72C81E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_506D57F42A72C81E___c_TypeDefinitionIndex)->GetStaticField(0x3E330);
	}
	static ::System::Func_3<::Class_2_506D57F42A72C81E*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_3<::Class_2_506D57F42A72C81E*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_506D57F42A72C81E___c_TypeDefinitionIndex)->GetStaticField(0x3E338);
	}
	static ::System::Action_3<::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__6_1()
	{
		return (::System::Action_3<::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_506D57F42A72C81E___c_TypeDefinitionIndex)->GetStaticField(0x3E340);
	}
	static ::System::Action_3<::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__6_0()
	{
		return (::System::Action_3<::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_506D57F42A72C81E___c_TypeDefinitionIndex)->GetStaticField(0x3E348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_506D57F42A72C81E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506D57F42A72C81E___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__6_0(::Class_2_506D57F42A72C81E* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_506D57F42A72C81E___C___CREATETRIGGER_B__6_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __CreateTrigger_b__6_1(::Class_2_506D57F42A72C81E* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_506D57F42A72C81E*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_506D57F42A72C81E___C___CREATETRIGGER_B__6_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean _get__TriggerFilter_b__8_0(::Class_2_506D57F42A72C81E* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_506D57F42A72C81E*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_506D57F42A72C81E___C__GET__TRIGGERFILTER_B__8_0_OFFSET))(this, a1, a2);
	}
};

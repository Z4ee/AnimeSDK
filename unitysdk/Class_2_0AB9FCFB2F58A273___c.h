#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0AB9FCFB2F58A273;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_0AB9FCFB2F58A273___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4C66C0)
#define CLASS_2_0AB9FCFB2F58A273___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C66F0)
#define CLASS_2_0AB9FCFB2F58A273___C__GET__TRIGGERFILTER_B__8_0_OFFSET UNITYSDK_OFFSET(0xB4C6750)
#define CLASS_2_0AB9FCFB2F58A273___C___CREATETRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0xB4C6700)
#define CLASS_2_0AB9FCFB2F58A273___C___CREATETRIGGER_B__6_1_OFFSET UNITYSDK_OFFSET(0xB4C6730)

inline static constexpr unsigned int Class_2_0AB9FCFB2F58A273___c_TypeDefinitionIndex = 76676;

class Class_2_0AB9FCFB2F58A273___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__6_1()
	{
		return (::System::Action_3<::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0AB9FCFB2F58A273___c_TypeDefinitionIndex)->GetStaticField(0x41A40);
	}
	static ::Class_2_0AB9FCFB2F58A273___c** StaticGet___9()
	{
		return (::Class_2_0AB9FCFB2F58A273___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0AB9FCFB2F58A273___c_TypeDefinitionIndex)->GetStaticField(0x41A48);
	}
	static ::System::Func_3<::Class_2_0AB9FCFB2F58A273*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_3<::Class_2_0AB9FCFB2F58A273*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0AB9FCFB2F58A273___c_TypeDefinitionIndex)->GetStaticField(0x41A50);
	}
	static ::System::Action_3<::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__6_0()
	{
		return (::System::Action_3<::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0AB9FCFB2F58A273___c_TypeDefinitionIndex)->GetStaticField(0x41A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__6_0(::Class_2_0AB9FCFB2F58A273* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___C___CREATETRIGGER_B__6_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __CreateTrigger_b__6_1(::Class_2_0AB9FCFB2F58A273* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0AB9FCFB2F58A273*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___C___CREATETRIGGER_B__6_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean _get__TriggerFilter_b__8_0(::Class_2_0AB9FCFB2F58A273* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0AB9FCFB2F58A273*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___C__GET__TRIGGERFILTER_B__8_0_OFFSET))(this, a1, a2);
	}
};

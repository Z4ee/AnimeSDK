#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_EB4F2B679195C18B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11533100)
#define CLASS_4_EB4F2B679195C18B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11533140)
#define CLASS_4_EB4F2B679195C18B___C___EVALUATECUSTOMTALK_B__9_0_OFFSET UNITYSDK_OFFSET(0x115331F0)
#define CLASS_4_EB4F2B679195C18B___C___EVALUATECUSTOMTALK_B__9_1_OFFSET UNITYSDK_OFFSET(0x11533240)
#define CLASS_4_EB4F2B679195C18B___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET UNITYSDK_OFFSET(0x11533150)
#define CLASS_4_EB4F2B679195C18B___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET UNITYSDK_OFFSET(0x115331A0)

inline static constexpr unsigned int Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex = 63164;

class Class_4_EB4F2B679195C18B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex)->GetStaticField(0x40D40);
	}
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex)->GetStaticField(0x40D48);
	}
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::UInt32>** StaticGet___9__9_1()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex)->GetStaticField(0x40D50);
	}
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex)->GetStaticField(0x40D58);
	}
	static ::Class_4_EB4F2B679195C18B___c** StaticGet___9()
	{
		return (::Class_4_EB4F2B679195C18B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EB4F2B679195C18B___c_TypeDefinitionIndex)->GetStaticField(0x40D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __EvaluateModifierContainer_b__6_0(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET))(this, target);
	}

	::System::Int32 __EvaluateSpawnAllyNpcHipplenMini_b__7_0(::Class_2_49CAB3DE74280C58* e)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET))(this, e);
	}

	::System::Int32 __EvaluateCustomTalk_b__9_0(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C___EVALUATECUSTOMTALK_B__9_0_OFFSET))(this, target);
	}

	::System::UInt32 __EvaluateCustomTalk_b__9_1(::Class_2_49CAB3DE74280C58* target)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B___C___EVALUATECUSTOMTALK_B__9_1_OFFSET))(this, target);
	}
};

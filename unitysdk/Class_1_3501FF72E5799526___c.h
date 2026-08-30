#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3501FF72E5799526;
class Class_2_B8E38BF47138A2E5;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_3501FF72E5799526___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1567BAD0)
#define CLASS_1_3501FF72E5799526___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1567BB10)
#define CLASS_1_3501FF72E5799526___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1567BB40)
#define CLASS_1_3501FF72E5799526___C___REGISTERLOADCALLBACK_B__17_0_OFFSET UNITYSDK_OFFSET(0x1567BB20)

inline static constexpr unsigned int Class_1_3501FF72E5799526___c_TypeDefinitionIndex = 76348;

class Class_1_3501FF72E5799526___c : public ::System::Object
{
public:
	static ::Class_1_3501FF72E5799526___c** StaticGet___9()
	{
		return (::Class_1_3501FF72E5799526___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3501FF72E5799526___c_TypeDefinitionIndex)->GetStaticField(0x20E50);
	}
	static ::System::Action_2<::Class_1_3501FF72E5799526*, ::Class_2_B8E38BF47138A2E5*>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::Class_1_3501FF72E5799526*, ::Class_2_B8E38BF47138A2E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3501FF72E5799526___c_TypeDefinitionIndex)->GetStaticField(0x20E58);
	}
	static ::System::Action_3<::Class_1_3501FF72E5799526*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Action_3<::Class_1_3501FF72E5799526*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3501FF72E5799526___c_TypeDefinitionIndex)->GetStaticField(0x20E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3501FF72E5799526___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3501FF72E5799526___C__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterLoadCallback_b__17_0(::Class_1_3501FF72E5799526* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3501FF72E5799526*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_3501FF72E5799526___C___REGISTERLOADCALLBACK_B__17_0_OFFSET))(this, a1, a2);
	}

	::System::Void __ListenLevelVar_b__23_0(::Class_1_3501FF72E5799526* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3501FF72E5799526*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3501FF72E5799526___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, a1, a2, a3);
	}
};

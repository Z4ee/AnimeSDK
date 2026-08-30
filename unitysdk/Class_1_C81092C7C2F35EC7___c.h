#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C81092C7C2F35EC7;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_C81092C7C2F35EC7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1728AF00)
#define CLASS_1_C81092C7C2F35EC7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1728AF40)
#define CLASS_1_C81092C7C2F35EC7___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1728AF50)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex = 76277;

class Class_1_C81092C7C2F35EC7___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex)->GetStaticField(0x1FDD0);
	}
	static ::Class_1_C81092C7C2F35EC7___c** StaticGet___9()
	{
		return (::Class_1_C81092C7C2F35EC7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex)->GetStaticField(0x1FDD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__9_0(::Class_1_C81092C7C2F35EC7* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, a1, a2, a3);
	}
};

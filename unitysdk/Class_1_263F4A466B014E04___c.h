#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_263F4A466B014E04;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_263F4A466B014E04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187637A0)
#define CLASS_1_263F4A466B014E04___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187637D0)
#define CLASS_1_263F4A466B014E04___C___LISTENLEVELVAR_B__18_0_OFFSET UNITYSDK_OFFSET(0x187637E0)

inline static constexpr unsigned int Class_1_263F4A466B014E04___c_TypeDefinitionIndex = 76614;

class Class_1_263F4A466B014E04___c : public ::System::Object
{
public:
	static ::Class_1_263F4A466B014E04___c** StaticGet___9()
	{
		return (::Class_1_263F4A466B014E04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_263F4A466B014E04___c_TypeDefinitionIndex)->GetStaticField(0x22490);
	}
	static ::System::Action_3<::Class_1_263F4A466B014E04*, ::System::Int32, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_3<::Class_1_263F4A466B014E04*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_263F4A466B014E04___c_TypeDefinitionIndex)->GetStaticField(0x22498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_263F4A466B014E04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263F4A466B014E04___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__18_0(::Class_1_263F4A466B014E04* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_263F4A466B014E04*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_263F4A466B014E04___C___LISTENLEVELVAR_B__18_0_OFFSET))(this, a1, a2, a3);
	}
};

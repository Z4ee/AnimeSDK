#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0809B69116070258;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_0809B69116070258___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12492890)
#define CLASS_1_0809B69116070258___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124928C0)
#define CLASS_1_0809B69116070258___C___LISTENLEVELVAR_B__18_0_OFFSET UNITYSDK_OFFSET(0x124928D0)

inline static constexpr unsigned int Class_1_0809B69116070258___c_TypeDefinitionIndex = 70793;

class Class_1_0809B69116070258___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_0809B69116070258*, ::System::Int32, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_3<::Class_1_0809B69116070258*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0809B69116070258___c_TypeDefinitionIndex)->GetStaticField(0x5E3C0);
	}
	static ::Class_1_0809B69116070258___c** StaticGet___9()
	{
		return (::Class_1_0809B69116070258___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0809B69116070258___c_TypeDefinitionIndex)->GetStaticField(0x5E3C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0809B69116070258___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0809B69116070258___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__18_0(::Class_1_0809B69116070258* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0809B69116070258*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0809B69116070258___C___LISTENLEVELVAR_B__18_0_OFFSET))(this, self, entID, varName);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8AEA763885767113;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8AEA763885767113___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19907B30)
#define CLASS_2_8AEA763885767113___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19907B70)
#define CLASS_2_8AEA763885767113___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET UNITYSDK_OFFSET(0x19907B80)
#define CLASS_2_8AEA763885767113___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET UNITYSDK_OFFSET(0x19907C00)

inline static constexpr unsigned int Class_2_8AEA763885767113___c_TypeDefinitionIndex = 53110;

class Class_2_8AEA763885767113___c : public ::System::Object
{
public:
	static ::Class_2_8AEA763885767113___c** StaticGet___9()
	{
		return (::Class_2_8AEA763885767113___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AEA763885767113___c_TypeDefinitionIndex)->GetStaticField(0x511D0);
	}
	static ::System::Action_1<::Class_2_8AEA763885767113*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::Class_2_8AEA763885767113*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AEA763885767113___c_TypeDefinitionIndex)->GetStaticField(0x511D8);
	}
	static ::System::Action_1<::Class_2_8AEA763885767113*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_2_8AEA763885767113*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AEA763885767113___c_TypeDefinitionIndex)->GetStaticField(0x511E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8AEA763885767113___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AEA763885767113___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__OnPlayerCreateAction_b__9_0(::Class_2_8AEA763885767113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8AEA763885767113*))((::PBYTE)hIl2Cpp + CLASS_2_8AEA763885767113___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET))(this, a1);
	}

	::System::Void _get__OnPlayerDestroyAction_b__11_0(::Class_2_8AEA763885767113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8AEA763885767113*))((::PBYTE)hIl2Cpp + CLASS_2_8AEA763885767113___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET))(this, a1);
	}
};

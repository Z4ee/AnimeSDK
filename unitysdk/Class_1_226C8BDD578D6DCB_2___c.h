#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB_2;
class Class_2_9DD8A46984F1AFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BAFC0)
#define CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128BAFF0)
#define CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x128BB000)
#define CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x128BB0F0)
#define CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__20_0_OFFSET UNITYSDK_OFFSET(0x128BB110)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex = 70863;

class Class_1_226C8BDD578D6DCB_2___c : public ::System::Object
{
public:
	static ::Class_1_226C8BDD578D6DCB_2___c** StaticGet___9()
	{
		return (::Class_1_226C8BDD578D6DCB_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x21920);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x21928);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x21930);
	}
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>** StaticGet___9__20_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x21938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySwitchPlatformTrigger_b__8_0(::Class_1_226C8BDD578D6DCB_2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeploySwitchPlatformTrigger_b__8_1(::Class_1_226C8BDD578D6DCB_2* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_1_OFFSET))(this, self, ent, other);
	}

	::System::Void __ListenLevelVar_b__20_0(::Class_1_226C8BDD578D6DCB_2* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__20_0_OFFSET))(this, self, entID, varName);
	}
};

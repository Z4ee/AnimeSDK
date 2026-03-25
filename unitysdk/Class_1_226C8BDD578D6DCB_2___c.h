#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB_2;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1104EB20)
#define CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1104EB50)
#define CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1104EB60)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex = 62812;

class Class_1_226C8BDD578D6DCB_2___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>** StaticGet___9__15_0()
	{
		return (::System::Action_3<::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x2F880);
	}
	static ::Class_1_226C8BDD578D6DCB_2___c** StaticGet___9()
	{
		return (::Class_1_226C8BDD578D6DCB_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_226C8BDD578D6DCB_2___c_TypeDefinitionIndex)->GetStaticField(0x2F888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__15_0(::Class_1_226C8BDD578D6DCB_2* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_2*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_2___C___LISTENLEVELVAR_B__15_0_OFFSET))(this, self, entID, varName);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D1E41A156A4C6944___C_METHOD_1_53C26A39B96FE275_OFFSET UNITYSDK_OFFSET(0x134B5110)
#define CLASS_1_D1E41A156A4C6944___C_METHOD_1_CF54D1A276A16A63_OFFSET UNITYSDK_OFFSET(0x134B50B0)
#define CLASS_1_D1E41A156A4C6944___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134B5060)
#define CLASS_1_D1E41A156A4C6944___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134B50A0)

inline static constexpr unsigned int Class_1_D1E41A156A4C6944___c_TypeDefinitionIndex = 53447;

class Class_1_D1E41A156A4C6944___c : public ::System::Object
{
public:
	static ::Class_1_D1E41A156A4C6944___c** StaticGet___9()
	{
		return (::Class_1_D1E41A156A4C6944___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1E41A156A4C6944___c_TypeDefinitionIndex)->GetStaticField(0x38A90);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1E41A156A4C6944___c_TypeDefinitionIndex)->GetStaticField(0x38A98);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1E41A156A4C6944___c_TypeDefinitionIndex)->GetStaticField(0x38AA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF54D1A276A16A63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944___C_METHOD_1_CF54D1A276A16A63_OFFSET))(this, a1);
	}

	::System::Void Method_1_53C26A39B96FE275(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944___C_METHOD_1_53C26A39B96FE275_OFFSET))(this, a1);
	}
};

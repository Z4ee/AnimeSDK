#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_819E7966739ABB7B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160F61C0)
#define CLASS_2_819E7966739ABB7B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160F6200)
#define CLASS_2_819E7966739ABB7B___C___ONLANGUAGECHANGED_B__23_0_OFFSET UNITYSDK_OFFSET(0x160F6210)
#define CLASS_2_819E7966739ABB7B___C___ONLOGINFAILED_B__25_0_OFFSET UNITYSDK_OFFSET(0x160F62C0)

inline static constexpr unsigned int Class_2_819E7966739ABB7B___c_TypeDefinitionIndex = 58379;

class Class_2_819E7966739ABB7B___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__23_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_819E7966739ABB7B___c_TypeDefinitionIndex)->GetStaticField(0x2A530);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_819E7966739ABB7B___c_TypeDefinitionIndex)->GetStaticField(0x2A538);
	}
	static ::Class_2_819E7966739ABB7B___c** StaticGet___9()
	{
		return (::Class_2_819E7966739ABB7B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_819E7966739ABB7B___c_TypeDefinitionIndex)->GetStaticField(0x2A540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnLanguageChanged_b__23_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B___C___ONLANGUAGECHANGED_B__23_0_OFFSET))(this, a1);
	}

	::System::Void __OnLoginFailed_b__25_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B___C___ONLOGINFAILED_B__25_0_OFFSET))(this, a1);
	}
};

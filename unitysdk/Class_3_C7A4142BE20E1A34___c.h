#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_C7A4142BE20E1A34___C_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x120C8B00)
#define CLASS_3_C7A4142BE20E1A34___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120C8AB0)
#define CLASS_3_C7A4142BE20E1A34___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120C8AF0)

inline static constexpr unsigned int Class_3_C7A4142BE20E1A34___c_TypeDefinitionIndex = 41339;

class Class_3_C7A4142BE20E1A34___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C7A4142BE20E1A34___c_TypeDefinitionIndex)->GetStaticField(0x2EBA0);
	}
	static ::Class_3_C7A4142BE20E1A34___c** StaticGet___9()
	{
		return (::Class_3_C7A4142BE20E1A34___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C7A4142BE20E1A34___c_TypeDefinitionIndex)->GetStaticField(0x2EBA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C7A4142BE20E1A34___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A4142BE20E1A34___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A4142BE20E1A34___C_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}
};

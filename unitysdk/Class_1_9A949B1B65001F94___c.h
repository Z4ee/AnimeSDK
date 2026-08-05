#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMarcelNameWidgetController; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_9A949B1B65001F94___C_METHOD_1_F6AB2B6B1590C935_OFFSET UNITYSDK_OFFSET(0x17EA03F0)
#define CLASS_1_9A949B1B65001F94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA03A0)
#define CLASS_1_9A949B1B65001F94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA03E0)

inline static constexpr unsigned int Class_1_9A949B1B65001F94___c_TypeDefinitionIndex = 85395;

class Class_1_9A949B1B65001F94___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::MoleMole::UIMarcelNameWidgetController*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::MoleMole::UIMarcelNameWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A949B1B65001F94___c_TypeDefinitionIndex)->GetStaticField(0x3EDC0);
	}
	static ::Class_1_9A949B1B65001F94___c** StaticGet___9()
	{
		return (::Class_1_9A949B1B65001F94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A949B1B65001F94___c_TypeDefinitionIndex)->GetStaticField(0x3EDC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A949B1B65001F94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A949B1B65001F94___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F6AB2B6B1590C935(::MoleMole::UIMarcelNameWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMarcelNameWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_9A949B1B65001F94___C_METHOD_1_F6AB2B6B1590C935_OFFSET))(this, a1);
	}
};

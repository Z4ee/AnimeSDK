#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

class Class_1_37DF30C8B3AA0F39;
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }

#define CLASS_1_65AA22E73CD7E617_METHOD_1_02258CDBA920609F_OFFSET UNITYSDK_OFFSET(0x1A8D6B10)
#define CLASS_1_65AA22E73CD7E617_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A8D6AC0)
#define CLASS_1_65AA22E73CD7E617__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D6AB0)

inline static constexpr unsigned int Class_1_65AA22E73CD7E617_TypeDefinitionIndex = 54201;

class Class_1_65AA22E73CD7E617 : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::Enum_3_DBF2701137F18AA6 Field_1_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_37DF30C8B3AA0F39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37DF30C8B3AA0F39*))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::MoleMole::UIWidgetController* Method_1_02258CDBA920609F()
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617_METHOD_1_02258CDBA920609F_OFFSET))(this);
	}
};

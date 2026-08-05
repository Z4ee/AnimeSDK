#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_34B2CCDF40A4699D_CLASS_1_25C91C9D176F711B__CTOR_OFFSET UNITYSDK_OFFSET(0x175CA140)

inline static constexpr unsigned int Class_1_34B2CCDF40A4699D_Class_1_25C91C9D176F711B_TypeDefinitionIndex = 70808;

class Class_1_34B2CCDF40A4699D_Class_1_25C91C9D176F711B : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::MoleMole::UIBubbleTips* Field_1_0; // 0x18
	::System::String* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B2CCDF40A4699D_CLASS_1_25C91C9D176F711B__CTOR_OFFSET))(this);
	}
};

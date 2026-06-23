#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_4E6DA233D543AAD4_CLASS_1_25C91C9D176F711B__CTOR_OFFSET UNITYSDK_OFFSET(0x1406AA20)

inline static constexpr unsigned int Class_1_4E6DA233D543AAD4_Class_1_25C91C9D176F711B_TypeDefinitionIndex = 50562;

class Class_1_4E6DA233D543AAD4_Class_1_25C91C9D176F711B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::MoleMole::UIBubbleTips* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E6DA233D543AAD4_CLASS_1_25C91C9D176F711B__CTOR_OFFSET))(this);
	}
};

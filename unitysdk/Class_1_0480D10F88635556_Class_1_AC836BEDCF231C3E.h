#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define CLASS_1_0480D10F88635556_CLASS_1_AC836BEDCF231C3E_METHOD_1_C3B41D0F6250AD24_OFFSET UNITYSDK_OFFSET(0x127B16D0)
#define CLASS_1_0480D10F88635556_CLASS_1_AC836BEDCF231C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x127B16C0)

inline static constexpr unsigned int Class_1_0480D10F88635556_Class_1_AC836BEDCF231C3E_TypeDefinitionIndex = 72350;

class Class_1_0480D10F88635556_Class_1_AC836BEDCF231C3E : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::MoleMole::UIWindowController* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0480D10F88635556_CLASS_1_AC836BEDCF231C3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3B41D0F6250AD24(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_0480D10F88635556_CLASS_1_AC836BEDCF231C3E_METHOD_1_C3B41D0F6250AD24_OFFSET))(this, a1);
	}
};

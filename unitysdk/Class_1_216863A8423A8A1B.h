#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }

#define CLASS_1_216863A8423A8A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECE3C0)

inline static constexpr unsigned int Class_1_216863A8423A8A1B_TypeDefinitionIndex = 68415;

class Class_1_216863A8423A8A1B : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* Field_1_7; // 0x10
	::MoleMole::UIWidgetController* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216863A8423A8A1B__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssArpeggioTalentPageController; }
namespace MoleMole { class UIAbyssArpeggioTalentRowWidgetController; }

#define CLASS_1_A2FCB0C4C9740099__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6AB0)

inline static constexpr unsigned int Class_1_A2FCB0C4C9740099_TypeDefinitionIndex = 55087;

class Class_1_A2FCB0C4C9740099 : public ::System::Object
{
public:
	::MoleMole::UIAbyssArpeggioTalentRowWidgetController* Field_1_6; // 0x10
	::MoleMole::UIAbyssArpeggioTalentPageController* Field_1_1; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2FCB0C4C9740099__CTOR_OFFSET))(this);
	}
};

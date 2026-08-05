#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISDKLoginWidgetController; }

#define CLASS_1_5FFC3AED380C8D79_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x11CC1E80)
#define CLASS_1_5FFC3AED380C8D79__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC1E70)

inline static constexpr unsigned int Class_1_5FFC3AED380C8D79_TypeDefinitionIndex = 78334;

class Class_1_5FFC3AED380C8D79 : public ::System::Object
{
public:
	::MoleMole::UISDKLoginWidgetController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UISDKLoginWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_5FFC3AED380C8D79__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FFC3AED380C8D79_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}
};

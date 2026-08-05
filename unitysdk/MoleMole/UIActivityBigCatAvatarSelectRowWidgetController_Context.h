#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIACTIVITYBIGCATAVATARSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13873420)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatAvatarSelectRowWidgetController_Context_TypeDefinitionIndex = 90905;

	class UIActivityBigCatAvatarSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATAVATARSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_29F61A604A7569ED;
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UIBALLGAMEICONCARDROWWRAPPERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A6FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRowWrapperWidgetController_Context_TypeDefinitionIndex = 71301;

	class UIBallGameIconCardRowWrapperWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_153<::Class_2_29F61A604A7569ED*>* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWRAPPERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

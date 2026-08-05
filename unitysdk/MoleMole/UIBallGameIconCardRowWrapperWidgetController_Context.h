#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_45578855C7710D8B;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIBALLGAMEICONCARDROWWRAPPERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19357030)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRowWrapperWidgetController_Context_TypeDefinitionIndex = 74341;

	class UIBallGameIconCardRowWrapperWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_164<::Class_2_45578855C7710D8B*>* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWRAPPERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

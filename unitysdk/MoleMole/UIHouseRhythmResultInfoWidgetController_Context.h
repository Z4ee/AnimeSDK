#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE873F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmResultInfoWidgetController_Context_TypeDefinitionIndex = 86023;

	class UIHouseRhythmResultInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

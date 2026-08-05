#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2352DF1ADE2D65E3;
namespace MoleMole { class UIGeneralLimitItemRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALLIMITITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD3C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLimitItemRowWidgetController_Context_TypeDefinitionIndex = 86306;

	class UIGeneralLimitItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_2352DF1ADE2D65E3* Data; // 0x28
		::System::Action_1<::MoleMole::UIGeneralLimitItemRowWidgetController*>* OnClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLIMITITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

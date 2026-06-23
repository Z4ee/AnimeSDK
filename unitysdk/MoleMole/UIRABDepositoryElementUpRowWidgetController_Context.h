#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7177740ACDCD76B5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F68C1397F46993E4;

#define MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementUpRowWidgetController_Context_TypeDefinitionIndex = 44100;

	class UIRABDepositoryElementUpRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F68C1397F46993E4* BuddyData; // 0x28
		::System::Int32 AfterStar; // 0x30
		::System::Boolean Empty; // 0x34
		::Enum_3_7177740ACDCD76B5 AttrId; // 0x38
		::System::Int32 BeforeStar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

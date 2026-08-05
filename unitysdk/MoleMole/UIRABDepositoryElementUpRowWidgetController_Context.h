#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7177740ACDCD76B5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B9416AD3CF7CE7E5;

#define MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188634A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementUpRowWidgetController_Context_TypeDefinitionIndex = 60890;

	class UIRABDepositoryElementUpRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_B9416AD3CF7CE7E5* BuddyData; // 0x28
		::System::Int32 BeforeStar; // 0x30
		::System::Int32 AfterStar; // 0x34
		::System::Boolean Empty; // 0x38
		::Enum_3_7177740ACDCD76B5 AttrId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGORDERLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D646A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingOrderListRowWidgetController_Context_TypeDefinitionIndex = 63222;

	class UISummerTideTreasureSellingOrderListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::UISummerTideTreasureSellingOrderListRowWidgetController_Context*, ::System::Boolean>* IsSelect; // 0x28
		::System::Action_1<::MoleMole::UISummerTideTreasureSellingOrderListRowWidgetController_Context*>* OnClick; // 0x30
		::Foundation::ViewObject::ViewObjectHandle Order; // 0x38
		::System::Int32 Index; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGORDERLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

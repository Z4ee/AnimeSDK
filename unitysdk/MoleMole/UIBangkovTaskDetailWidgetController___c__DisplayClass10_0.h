#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovTaskDetailWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CREATETASKDETAILBANGKOVITEMTIPCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x15B50810)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B50800)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 86149;

	class UIBangkovTaskDetailWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTaskDetailWidgetController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTaskDetailBangkovItemTipCallback_b__0(::MoleMole::UIItemIconBtnWidgetController* c)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CREATETASKDETAILBANGKOVITEMTIPCALLBACK_B__0_OFFSET))(this, c);
		}
	};
}

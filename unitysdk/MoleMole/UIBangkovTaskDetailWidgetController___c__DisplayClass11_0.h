#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovTaskDetailWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS11_0__APPLYBANGKOVBAGONLYINFOTIPTOWISHLIST_B__0_OFFSET UNITYSDK_OFFSET(0x15B50900)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B508F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 86151;

	class UIBangkovTaskDetailWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTaskDetailWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyBangkovBagOnlyInfoTipToWishList_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS11_0__APPLYBANGKOVBAGONLYINFOTIPTOWISHLIST_B__0_OFFSET))(this, ctrl);
		}
	};
}

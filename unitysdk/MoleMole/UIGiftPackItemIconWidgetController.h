#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_196;
class Class_1_43BD383C98B4C0C5_52;
class Class_2_60638234271CCDB8_29;
class Class_2_A4C4BDD1D5D9FB66;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class GiftPackItemIconContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET UNITYSDK_OFFSET(0x162D0B00)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCONSOLEPRICEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x162D16D0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162D15C0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x162D11A0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162D1650)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162D0B60)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162D0F80)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET UNITYSDK_OFFSET(0x162D1860)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162D1950)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162D19B0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x162D1A40)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162D1AE0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162D1B70)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162D1C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGiftPackItemIconWidgetController_TypeDefinitionIndex = 43254;

	class UIGiftPackItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_29* _view; // 0x2E8
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x2F0
		::Class_0_16E4307DCC419505_196* _goodsData; // 0x2F8
		::MoleMole::GiftPackItemIconContext* _context; // 0x300
		::Class_1_43BD383C98B4C0C5_52* _viewProxy; // 0x308
		::Class_2_A4C4BDD1D5D9FB66* _goodUILogic; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_ButtonSelf()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnConsolePriceButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCONSOLEPRICEBUTTONCLICK_OFFSET))(this);
		}

		::System::Void ShowGoodsData(::Class_0_16E4307DCC419505_196* goodsData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_196*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET))(this, goodsData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

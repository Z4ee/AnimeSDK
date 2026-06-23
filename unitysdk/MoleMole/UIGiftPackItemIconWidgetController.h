#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_201;
class Class_1_43BD383C98B4C0C5_73;
class Class_2_60638234271CCDB8_61;
class Class_2_A4C4BDD1D5D9FB66;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class GiftPackItemIconContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET UNITYSDK_OFFSET(0x15A7A840)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCONSOLEPRICEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x15A7B410)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A7B300)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15A7AEE0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A7B390)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A7A8A0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A7ACC0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET UNITYSDK_OFFSET(0x15A7B5A0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7B690)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A7B6F0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15A7B780)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A7B820)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A7B8B0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A7B940)

namespace MoleMole
{
	inline static constexpr unsigned int UIGiftPackItemIconWidgetController_TypeDefinitionIndex = 59065;

	class UIGiftPackItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_61* _view; // 0x2F0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x2F8
		::Class_0_16E4307DCC419505_201* _goodsData; // 0x300
		::MoleMole::GiftPackItemIconContext* _context; // 0x308
		::Class_1_43BD383C98B4C0C5_73* _viewProxy; // 0x310
		::Class_2_A4C4BDD1D5D9FB66* _goodUILogic; // 0x318

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

		::System::Void ShowGoodsData(::Class_0_16E4307DCC419505_201* goodsData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET))(this, goodsData);
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

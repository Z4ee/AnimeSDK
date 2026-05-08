#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A199AA1B91A2E0C6;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x15EBA970)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x15EBB570)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EBA770)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15EBAB40)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EBB4C0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EBB510)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EBA800)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EBAAD0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15EBAD60)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETBAN_OFFSET UNITYSDK_OFFSET(0x15EBB6F0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETCLICKCB_OFFSET UNITYSDK_OFFSET(0x15EBB770)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15EBB5F0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x15EBB6A0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINMAKE_OFFSET UNITYSDK_OFFSET(0x15EBAD10)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x15EBB430)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBB7C0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x15EBB7D0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EBB7E0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15EBB870)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EBB910)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EBB920)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EBB9B0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EBBA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsItemIconWidgetController_TypeDefinitionIndex = 70779;

	class UIActivePropsItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 iniItemId; // 0x2E8
		::System::Int32 index; // 0x2EC
		::Class_2_C1865A61828EE67A* _uiRamenModel; // 0x2F0
		::System::Boolean _isInMakePanel; // 0x2F8
		::Class_2_A199AA1B91A2E0C6* _view; // 0x300
		::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>* selectAction; // 0x308
		::System::Boolean _canInteractive; // 0x310
		::System::Boolean _isBan; // 0x311

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Void SetSelect(::System::Boolean show, ::System::Boolean banBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETSELECT_OFFSET))(this, show, banBtn);
		}

		::System::Void SetBan(::System::Boolean isBan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETBAN_OFFSET))(this, isBan);
		}

		::System::Void SetClickCB(::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETCLICKCB_OFFSET))(this, cb);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetInMake(::System::Boolean isIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINMAKE_OFFSET))(this, isIn);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

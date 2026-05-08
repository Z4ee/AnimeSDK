#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2DFDAF0B881128C6_Class_1_AA3AA9145D9EE846;
class Class_2_9C033B45E38F886B;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_CLEARRARITYITEMLIST_OFFSET UNITYSDK_OFFSET(0x12764120)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x12763DE0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12763F00)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12763F90)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12764090)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12763D70)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12763E90)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12764360)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET UNITYSDK_OFFSET(0x127642A0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12764B90)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12764C70)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12764D00)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12764DA0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12764E30)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12764EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoSetDetailWidgetController_TypeDefinitionIndex = 55160;

	class UIVideoSetDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9C033B45E38F886B* _view; // 0x2B8
		::Class_2_2DFDAF0B881128C6_Class_1_AA3AA9145D9EE846* _suitData; // 0x2C0
		::Class_2_FDFE69FE7B72463B* _controlAnimation; // 0x2C8
		::System::Boolean _firstTimeShow; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rarityItemList; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetSuitData(::Class_2_2DFDAF0B881128C6_Class_1_AA3AA9145D9EE846* suitData, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2DFDAF0B881128C6_Class_1_AA3AA9145D9EE846*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET))(this, suitData, force);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ClearRarityItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_CLEARRARITYITEMLIST_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

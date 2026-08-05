#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8F1270868BBD4A4B.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_459;
class Class_2_D40DAE97CB89A74B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x16D66D50)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCLICKMOVIE_OFFSET UNITYSDK_OFFSET(0x16D66DA0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D66890)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D669A0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D66920)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D666D0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D66730)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESELECT_OFFSET UNITYSDK_OFFSET(0x16D66EC0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESTATE_OFFSET UNITYSDK_OFFSET(0x16D66B40)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D66F30)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D66F40)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D66FD0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D67070)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D67100)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D67190)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaMovieWidgetController_TypeDefinitionIndex = 64576;

	class UICinemaMovieWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D40DAE97CB89A74B* _view; // 0x2F0
		::Class_0_16E4307DCC419505_459* singleLevelData; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::Class_2_D40DAE97CB89A74B* GetView()
		{
			return ((::Class_2_D40DAE97CB89A74B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCLICKMOVIE_OFFSET))(this);
		}

		::System::Void SetMovieState(::Enum_3_8F1270868BBD4A4B state)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_8F1270868BBD4A4B))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESTATE_OFFSET))(this, state);
		}

		::System::Void SetMovieSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

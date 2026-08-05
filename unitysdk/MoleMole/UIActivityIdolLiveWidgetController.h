#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityIdolLiveWidgetController_IdolLiveStatus.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_6671F8F50D5B97D2;
namespace MoleMole { class UIActivityIconLiveBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETCURLIVESTATUS_OFFSET UNITYSDK_OFFSET(0x11DA8010)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETLIVESTATUS_OFFSET UNITYSDK_OFFSET(0x11DA7C40)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTACTIVITY_OFFSET UNITYSDK_OFFSET(0x11DA7800)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11DA7990)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOGUIDEANDTRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x11DA8060)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOROOTACTIVITYGUIDE_OFFSET UNITYSDK_OFFSET(0x11DA83D0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11DA7F00)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONTABCLICK_OFFSET UNITYSDK_OFFSET(0x11DA7E90)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11DA7F90)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11DA79A0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11DA7B20)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11DA84C0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA9100)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA90A0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11DA91C0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11DA9250)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11DA92E0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11DA9370)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIdolLiveWidgetController_TypeDefinitionIndex = 80164;

	class UIActivityIdolLiveWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__timeConfigKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityIdolLiveWidgetController_TypeDefinitionIndex)->GetStaticField(0x4AA70);
		}
		::Class_2_6671F8F50D5B97D2* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::MoleMole::UIItemIconBtnSmallWidgetController* _rewardIconWidget; // 0x2D0
		::MoleMole::UIActivityIconLiveBtnWidgetController* _tabWidget1; // 0x2D8
		::MoleMole::UIActivityIconLiveBtnWidgetController* _tabWidget2; // 0x2E0
		::System::Int32 _curSelectIndex; // 0x2E8
		::System::Action* OnSelectActivity; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::Class_1_D375C91CCE5D3999* get_CurSelectActivity()
		{
			return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTACTIVITY_OFFSET))(this);
		}

		::System::Int32 get_CurSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus GetCurLiveStatus()
		{
			return ((::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETCURLIVESTATUS_OFFSET))(this);
		}

		::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus GetLiveStatus(::System::Int32 index)
		{
			return ((::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETLIVESTATUS_OFFSET))(this, index);
		}

		::System::Void GoGuideAndTryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOGUIDEANDTRYTAKEREWARD_OFFSET))(this);
		}

		::System::Void GoRootActivityGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOROOTACTIVITYGUIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONTABCLICK_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

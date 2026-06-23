#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_629;
class Class_2_47BEEACD66EA947F;
class Class_2_60638234271CCDB8_102;
class Class_2_E621E51D351EB960;
class Class_2_E621E51D351EB960_1;
namespace MoleMole { class UIAbyssS2EventContext; }
namespace MoleMole { class UIAbyssS2EventInfoWidgetController; }
namespace MoleMole { class UIAbyssS2EventListWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_ISLISTOPEN_OFFSET UNITYSDK_OFFSET(0x12BEDA60)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12BED130)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONABYSSS2EVENTSELECT_OFFSET UNITYSDK_OFFSET(0x12BEE1D0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x12BED950)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BED140)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONMAINBTNCLICK_OFFSET UNITYSDK_OFFSET(0x12BEDA90)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BED8E0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BED1D0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BED5C0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET UNITYSDK_OFFSET(0x12BEDBB0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHLISTVIEW_OFFSET UNITYSDK_OFFSET(0x12BEDF10)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12BED750)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEE2C0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BEE2D0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BEE360)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BEE370)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BEE380)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventPageController_TypeDefinitionIndex = 57884;

	class UIAbyssS2EventPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_102* _view; // 0x318
		::System::Int32 _entranceID; // 0x320
		::Class_2_E621E51D351EB960* _abyssModel; // 0x328
		::Class_2_E621E51D351EB960_1* _abyssS2Model; // 0x330
		::Class_2_47BEEACD66EA947F* _yorozuyaModel; // 0x338
		::MoleMole::UIAbyssS2EventContext* _context; // 0x340
		::Class_2_208CC9941471731A_629* _entranceConfig; // 0x348
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* _dungeonConfigs; // 0x350
		::Class_2_0A55B5A82A61DAFA* _currSelectQuestConfig; // 0x358
		::Class_2_14E7CE92E8A3183F* _currSelectDungeonConfig; // 0x360
		::MoleMole::UIAbyssS2EventListWidgetController* _listWidget; // 0x368
		::MoleMole::UIAbyssS2EventInfoWidgetController* _infoWidget; // 0x370
		::System::Boolean _isListInit; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONMAINBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHLISTVIEW_OFFSET))(this);
		}

		::System::Void RefreshInfoView(::Class_2_14E7CE92E8A3183F* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_14E7CE92E8A3183F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET))(this, config);
		}

		::System::Void OnAbyssS2EventSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONABYSSS2EVENTSELECT_OFFSET))(this, args);
		}

		::System::Boolean get_IsListOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_ISLISTOPEN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

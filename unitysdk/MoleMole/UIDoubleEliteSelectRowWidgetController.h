#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916;
class Class_2_7D5DE5682E00706F;
class Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D91B50)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16D91C60)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D90CE0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D91BE0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D90B20)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_SETCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0x16D90DA0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D91CD0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D91CE0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16D91D70)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D91E00)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D91EA0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D91F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSelectRowWidgetController_TypeDefinitionIndex = 83443;

	class UIDoubleEliteSelectRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7D5DE5682E00706F* _view; // 0x2F0
		::Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_7* _lockView; // 0x2F8
		::Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_7* _unlockView; // 0x300
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetChapterInfo(::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916* chapterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_SETCHAPTERINFO_OFFSET))(this, chapterInfo);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

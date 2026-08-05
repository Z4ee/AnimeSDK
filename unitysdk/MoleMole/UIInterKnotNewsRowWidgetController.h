#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_612;
class Class_2_79F6D62CE30E3F8E_4;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x179D63C0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179D6540)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONGET_OFFSET UNITYSDK_OFFSET(0x179D7C00)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONMISSIONMODIFY_OFFSET UNITYSDK_OFFSET(0x179D7BB0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179D66F0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179D62B0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x179D7590)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x179D6770)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x179D7350)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x179D71B0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179D7F50)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179D7F60)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179D7FF0)
#define MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179D8080)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsRowWidgetController_TypeDefinitionIndex = 56508;

	class UIInterKnotNewsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_4* _view; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* knowledgeList; // 0x2F8
		::System::Int32 index; // 0x300
		::System::Int32 groupID; // 0x304
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_612*>* childQuestTemplates; // 0x308
		::System::Boolean isLock; // 0x310
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* rewardList; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void OnMissionModify(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONMISSIONMODIFY_OFFSET))(this, args);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_ONGET_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, empty);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

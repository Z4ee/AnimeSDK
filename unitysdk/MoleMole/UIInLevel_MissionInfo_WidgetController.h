#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1A3197598F874EB7;
class Class_2_C5648417729068B0;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ISCOULDSHOW_OFFSET UNITYSDK_OFFSET(0x157201C0)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15720090)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15720140)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1571FF60)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_SETBYSABDATA_OFFSET UNITYSDK_OFFSET(0x157208A0)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_SETQUESTBYID_OFFSET UNITYSDK_OFFSET(0x15720280)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x15720770)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15720C30)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15720CB0)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15720D40)
#define MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15720DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_MissionInfo_WidgetController_TypeDefinitionIndex = 81064;

	class UIInLevel_MissionInfo_WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::Color Name_Color_UnTrigger; // 0x2C0
		::Class_2_C5648417729068B0* _view; // 0x2D0
		::UnityEngine::Color Name_Color_Default; // 0x2D8
		::Class_2_1A3197598F874EB7* _questModel; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean IsCouldShow(::System::Int32 qID, ::Class_2_F69D29AB796376C2*& templateExt)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_2_F69D29AB796376C2*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_ISCOULDSHOW_OFFSET))(qID, templateExt);
		}

		::System::Void SetQuestByID(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_SETQUESTBYID_OFFSET))(this, id);
		}

		::System::Void SetBySABData(::Struct_2_5B421F8FFABD4CA3 sabData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER_SETBYSABDATA_OFFSET))(this, sabData);
		}

		::System::Boolean _CheckChallengeFinish(::System::Int32 questID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET))(this, questID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_MISSIONINFO_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

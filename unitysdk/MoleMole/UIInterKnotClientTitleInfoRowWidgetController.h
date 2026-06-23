#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_710;
class Class_2_2FF629CF4A5DE934;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_CLICKSELECT_OFFSET UNITYSDK_OFFSET(0x169A4620)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169A3930)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169A39C0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169A37D0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETARROW_OFFSET UNITYSDK_OFFSET(0x169A4500)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETBYID_OFFSET UNITYSDK_OFFSET(0x169A3A90)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETCB_OFFSET UNITYSDK_OFFSET(0x169A3A40)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETEPISODE_OFFSET UNITYSDK_OFFSET(0x169A4330)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET UNITYSDK_OFFSET(0x169A42C0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x169A3EE0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SHOWTARGET_OFFSET UNITYSDK_OFFSET(0x169A40A0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x169A47A0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169A4740)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169A47C0)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169A4850)
#define MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169A48E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientTitleInfoRowWidgetController_TypeDefinitionIndex = 81964;

	class UIInterKnotClientTitleInfoRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_noSelectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotClientTitleInfoRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x111D0);
		}
		static ::UnityEngine::Vector3* StaticGet_selectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotClientTitleInfoRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x111DC);
		}
		::Class_2_2FF629CF4A5DE934* _view; // 0x2C0
		::System::Action_1<::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*>* _clickCallback; // 0x2C8
		::System::Int32 _questId; // 0x2D0
		::System::Boolean _isSelect; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetCB(::System::Action_1<::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETCB_OFFSET))(this, cb);
		}

		::System::Void SetById(::Class_2_208CC9941471731A_710* spConfig, ::System::Int32 questId, ::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_710*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETBYID_OFFSET))(this, spConfig, questId, select);
		}

		::System::Void SetEpisode(::System::String* epilogueText, ::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETEPISODE_OFFSET))(this, epilogueText, select);
		}

		::System::Void SetShowContent(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET))(this, show);
		}

		::System::Void SetArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SETARROW_OFFSET))(this);
		}

		::System::Void ClickSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_CLICKSELECT_OFFSET))(this);
		}

		::System::Void ShowInfo(::System::String* str, ::System::Boolean showTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SHOWINFO_OFFSET))(this, str, showTitle);
		}

		::System::Void ShowTarget(::System::Boolean show, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER_SHOWTARGET_OFFSET))(this, show, str);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTTITLEINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

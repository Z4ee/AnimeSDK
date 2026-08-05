#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_1079;
class Class_2_86FD0075D1E5CD44_3;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B0C9B0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B0CF60)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x15B0CD20)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0CEE0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0C850)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_PLAYFADEANI_OFFSET UNITYSDK_OFFSET(0x15B0CB30)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET UNITYSDK_OFFSET(0x15B0CA40)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0D020)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B0D030)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B0D0C0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0D160)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0D1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaMapInfoWidgetController_TypeDefinitionIndex = 86425;

	class UIYorozuyaMapInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_86FD0075D1E5CD44_3* _view; // 0x2F0
		::Class_2_208CC9941471731A_1079* _mData; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefleshView(::Class_2_208CC9941471731A_1079* sceneCfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1079*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET))(this, sceneCfg);
		}

		::System::Single PlayFadeAni(::System::Boolean isIn)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_PLAYFADEANI_OFFSET))(this, isIn);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSELECT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

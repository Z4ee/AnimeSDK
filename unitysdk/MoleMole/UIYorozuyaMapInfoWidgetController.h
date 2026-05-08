#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_302;
class Class_2_86FD0075D1E5CD44;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x113389C0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11338F60)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x11338D20)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11338EE0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11338860)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_PLAYFADEANI_OFFSET UNITYSDK_OFFSET(0x11338B40)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET UNITYSDK_OFFSET(0x11338A50)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x113390A0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x113390B0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11339140)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x113391E0)
#define MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11339270)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaMapInfoWidgetController_TypeDefinitionIndex = 43505;

	class UIYorozuyaMapInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_86FD0075D1E5CD44* _view; // 0x2E8
		::Class_2_208CC9941471731A_302* _mData; // 0x2F0

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

		::System::Void RefleshView(::Class_2_208CC9941471731A_302* sceneCfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_302*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAMAPINFOWIDGETCONTROLLER_REFLESHVIEW_OFFSET))(this, sceneCfg);
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

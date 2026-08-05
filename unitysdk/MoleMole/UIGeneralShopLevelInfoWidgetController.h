#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_93B82063FE922515_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_CLICKSELECT_OFFSET UNITYSDK_OFFSET(0x172F53C0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x172F53B0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172F4E40)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x172F50A0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172F50F0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172F4ED0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172F5030)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETARROW_OFFSET UNITYSDK_OFFSET(0x172F51E0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x172F5350)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETCB_OFFSET UNITYSDK_OFFSET(0x172F5300)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET UNITYSDK_OFFSET(0x172F5170)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x172F5540)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172F54E0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172F5560)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x172F55F0)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172F5600)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172F5690)
#define MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172F5720)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralShopLevelInfoWidgetController_TypeDefinitionIndex = 63807;

	class UIGeneralShopLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_selectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralShopLevelInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x113B0);
		}
		static ::UnityEngine::Vector3* StaticGet_noSelectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralShopLevelInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x113BC);
		}
		::Class_2_93B82063FE922515_1* _view; // 0x2C0
		::System::Boolean _isSelect; // 0x2C8
		::System::Action_1<::MoleMole::UIGeneralShopLevelInfoWidgetController*>* _clickCallback; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetShowContent(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET))(this, show);
		}

		::System::Void SetCB(::System::Action_1<::MoleMole::UIGeneralShopLevelInfoWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGeneralShopLevelInfoWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETCB_OFFSET))(this, cb);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_GET_ISSELECT_OFFSET))(this);
		}

		::System::Void ClickSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_CLICKSELECT_OFFSET))(this);
		}

		::System::Void SetArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER_SETARROW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPLEVELINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

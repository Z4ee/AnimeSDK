#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_93B82063FE922515_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_CLICKSELECT_OFFSET UNITYSDK_OFFSET(0x149E3960)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E3400)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149E3660)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E36B0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E3490)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149E35F0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETARROW_OFFSET UNITYSDK_OFFSET(0x149E37A0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x149E3910)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETCB_OFFSET UNITYSDK_OFFSET(0x149E38C0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET UNITYSDK_OFFSET(0x149E3730)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x149E3AE0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149E3A80)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149E3B00)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149E3B90)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149E3BA0)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149E3C30)
#define MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149E3CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralShopDescWidgetController_TypeDefinitionIndex = 40761;

	class UIGeneralShopDescWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_selectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralShopDescWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE00);
		}
		static ::UnityEngine::Vector3* StaticGet_noSelectArrow()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralShopDescWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE0C);
		}
		::Class_2_93B82063FE922515_1* _view; // 0x2B8
		::System::Boolean _isSelect; // 0x2C0
		::System::Action_1<::MoleMole::UIGeneralShopDescWidgetController*>* _clickCallback; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetShowContent(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETSHOWCONTENT_OFFSET))(this, show);
		}

		::System::Void SetCB(::System::Action_1<::MoleMole::UIGeneralShopDescWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGeneralShopDescWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETCB_OFFSET))(this, cb);
		}

		::System::Void SetByTemplate(::System::Object* template_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}

		::System::Void ClickSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_CLICKSELECT_OFFSET))(this);
		}

		::System::Void SetArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER_SETARROW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSHOPDESCWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_315;
class Class_2_56E4C72FCCB943A7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EB6380)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19EB5E90)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19EB6490)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EB6410)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EB5CE0)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19EB60B0)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET UNITYSDK_OFFSET(0x19EB6170)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x19EB61C0)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EB6C30)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB6C20)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EB6D40)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19EB6DD0)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19EB6E60)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EB6F00)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EB6F90)
#define MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19EB7020)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowSpecialAreaItemWidgetController_TypeDefinitionIndex = 88171;

	class UIHollowSpecialAreaItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_CowTypeStringList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowSpecialAreaItemWidgetController_TypeDefinitionIndex)->GetStaticField(0x32ED0);
		}
		::Class_2_56E4C72FCCB943A7* _view; // 0x2F0
		::Class_2_208CC9941471731A_315* m_cfg; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshRedPointByData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET))(this, args);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

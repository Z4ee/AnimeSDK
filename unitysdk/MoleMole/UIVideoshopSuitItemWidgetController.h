#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_198;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_CLEARVIEW_OFFSET UNITYSDK_OFFSET(0x11A10710)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x11A10220)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INVOKECLICKACTION_OFFSET UNITYSDK_OFFSET(0x11A10EC0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A10370)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A10400)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A10B00)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A101B0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x11A10A80)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11A107C0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x11A10B80)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCURSELECTSUITID_OFFSET UNITYSDK_OFFSET(0x11A10BD0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x11A10C80)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A10F50)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A10F60)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A10FF0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A11090)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A11120)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopSuitItemWidgetController_TypeDefinitionIndex = 63502;

	class UIVideoshopSuitItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_198* _view; // 0x2F0
		::System::Boolean _isUp; // 0x2F8
		::System::UInt32 _suitID; // 0x2FC
		::System::Action_1<::System::UInt32>* _clickAction; // 0x300
		::System::Int32 _index; // 0x308
		::System::UInt32 _curSelectSuitID; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClickAction(::System::Action_1<::System::UInt32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void SetCurSelectSuitID(::System::UInt32 suitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCURSELECTSUITID_OFFSET))(this, suitID);
		}

		::System::Void RefreshView(::System::UInt32 suitID, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, suitID, isUp);
		}

		::System::Void SetWishlistTargetAvatarInfo(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET))(this, active);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InvokeClickAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INVOKECLICKACTION_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void ClearView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_CLEARVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

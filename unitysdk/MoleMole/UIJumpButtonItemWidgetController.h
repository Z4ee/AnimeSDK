#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A862B1AB621733B6;
class Class_2_B209BD9CC7A9C533_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCLICKJUMP_OFFSET UNITYSDK_OFFSET(0x183124B0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18311F70)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183121D0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18312080)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18312000)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18311EA0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETCUSTOMACTION_OFFSET UNITYSDK_OFFSET(0x18312420)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET UNITYSDK_OFFSET(0x18312360)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183127C0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183127D0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18312860)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18312900)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18312910)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183129A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIJumpButtonItemWidgetController_TypeDefinitionIndex = 49106;

	class UIJumpButtonItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_B209BD9CC7A9C533_1* _view; // 0x2F0
		::Class_1_A862B1AB621733B6* _jumpAccessData; // 0x2F8
		::System::Action* _customClickAction; // 0x300
		::System::UInt32 _soundItemJumpScopeId; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetJumpAccessData(::Class_1_A862B1AB621733B6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A862B1AB621733B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET))(this, data);
		}

		::System::Void SetCustomAction(::System::String* text, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETCUSTOMACTION_OFFSET))(this, text, onClick);
		}

		::System::Void OnClickJump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCLICKJUMP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

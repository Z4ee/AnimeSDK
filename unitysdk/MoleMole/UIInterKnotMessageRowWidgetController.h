#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_495;
class Class_2_9808C97F4341700A;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A023B0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A02440)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A02350)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET UNITYSDK_OFFSET(0x19A02F20)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x19A02A30)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A024C0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A03040)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A02F90)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A03080)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A03110)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A031A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMessageRowWidgetController_TypeDefinitionIndex = 50884;

	class UIInterKnotMessageRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_NormalFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x471C0);
		}
		static ::System::String** StaticGet_PlayerFadeInAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x471C8);
		}
		::Class_2_9808C97F4341700A* _view; // 0x2C0
		::System::String* _currentFadeInAnim; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* reply, ::System::Int32 floor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, reply, floor);
		}

		::System::Void RefreshView_1(::Class_2_208CC9941471731A_495* template_, ::System::Int32 customFloor, ::System::Boolean replyAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_495*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, template_, customFloor, replyAnimation);
		}

		::System::Void PlayInterKnotMessageRowFadeInAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_19E2B946422FA426;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_GETCOLORFROMEXTENSION_OFFSET UNITYSDK_OFFSET(0x1041E180)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1041D8C0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1041DB50)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1041D950)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1041D630)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYCLICKANIM_OFFSET UNITYSDK_OFFSET(0x1041E220)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYFADEOUTANIMWHENCLICKOTHERICON_OFFSET UNITYSDK_OFFSET(0x1041E2A0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0x1041E320)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1041E3B0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1041E3A0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1041E3C0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1041E450)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1041E4F0)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1041E580)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchAppIconWidgetController_TypeDefinitionIndex = 62461;

	class UIWorkBenchAppIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::UnityEngine::Material** StaticGet__greyMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0x311E0);
		}
		static ::UnityEngine::Material** StaticGet__defaultLogoMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0x311E8);
		}
		static ::System::Int32* StaticGet__greyMatRefCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchAppIconWidgetController_TypeDefinitionIndex)->GetStaticField(0xB250);
		}
		::Class_2_19E2B946422FA426* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void PlayClickAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYCLICKANIM_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnimWhenClickOtherIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYFADEOUTANIMWHENCLICKOTHERICON_OFFSET))(this);
		}

		::System::Void PlayResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_PLAYRESETANIM_OFFSET))(this);
		}

		::UnityEngine::Color GetColorFromExtension(::System::String* colorName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_GETCOLORFROMEXTENSION_OFFSET))(this, colorName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

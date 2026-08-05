#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183D22D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2310)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__PLAYBLACKMASKFADEIN_B__295_0_OFFSET UNITYSDK_OFFSET(0x183D24A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__PLAYSPECIALBLACKMASKFADEIN_B__294_0_OFFSET UNITYSDK_OFFSET(0x183D2390)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__RESURRECTTIMELINEINFO_B__241_0_OFFSET UNITYSDK_OFFSET(0x183D2320)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c_TypeDefinitionIndex = 87088;

	class UIComicPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIComicPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIComicPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIComicPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C10);
		}
		static ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>** StaticGet___9__241_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIComicPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C18);
		}
		static ::System::Action** StaticGet___9__295_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIComicPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C20);
		}
		static ::System::Action** StaticGet___9__294_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIComicPageController___c_TypeDefinitionIndex)->GetStaticField(0x32C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResurrectTimelineInfo_b__241_0(::UnityEngine::Timeline::TimelineClip* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__RESURRECTTIMELINEINFO_B__241_0_OFFSET))(this, x);
		}

		::System::Void _PlaySpecialBlackMaskFadeIn_b__294_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__PLAYSPECIALBLACKMASKFADEIN_B__294_0_OFFSET))(this);
		}

		::System::Void _PlayBlackMaskFadeIn_b__295_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__PLAYBLACKMASKFADEIN_B__295_0_OFFSET))(this);
		}
	};
}

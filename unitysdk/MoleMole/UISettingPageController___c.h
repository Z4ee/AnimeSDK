#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F3BD40)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3BD80)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x15F3BD90)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_3_OFFSET UNITYSDK_OFFSET(0x15F3BF70)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_4_OFFSET UNITYSDK_OFFSET(0x15F3BEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageController___c_TypeDefinitionIndex = 48674;

	class UISettingPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISettingPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISettingPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A5C0);
		}
		static ::System::Action** StaticGet___9__12_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A5C8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A5D0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISettingPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A5D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_0_OFFSET))(this);
		}

		::System::Void _InitView_b__12_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_4_OFFSET))(this);
		}

		::System::Void _InitView_b__12_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___C__INITVIEW_B__12_3_OFFSET))(this);
		}
	};
}

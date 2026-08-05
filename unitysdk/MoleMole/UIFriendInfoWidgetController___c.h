#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1938EA90)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1938EAD0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__INITFRIENDINFOPAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1938EAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInfoWidgetController___c_TypeDefinitionIndex = 74254;

	class UIFriendInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFriendInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49050);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__INITFRIENDINFOPAGE_B__10_0_OFFSET))(this);
		}
	};
}

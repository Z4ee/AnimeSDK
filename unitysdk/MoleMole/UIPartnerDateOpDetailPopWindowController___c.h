#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6A930)
#define MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6A970)
#define MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__INITVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x15D6A980)
#define MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_G__CANTOGGLE_8_0_OFFSET UNITYSDK_OFFSET(0x15D6AA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateOpDetailPopWindowController___c_TypeDefinitionIndex = 44806;

	class UIPartnerDateOpDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDateOpDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32A00);
		}
		static ::MoleMole::UIPartnerDateOpDetailPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIPartnerDateOpDetailPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDateOpDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__INITVIEW_B__7_0_OFFSET))(this);
		}

		::System::Boolean _RefreshView_g__CanToggle_8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEOPDETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_G__CANTOGGLE_8_0_OFFSET))(this);
		}
	};
}

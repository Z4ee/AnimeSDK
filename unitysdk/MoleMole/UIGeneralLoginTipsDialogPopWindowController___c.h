#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D9B720)
#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B760)
#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__ONSHOWLOGINTIPS_B__16_0_OFFSET UNITYSDK_OFFSET(0x17D9B770)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsDialogPopWindowController___c_TypeDefinitionIndex = 56841;

	class UIGeneralLoginTipsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::MoleMole::UIGeneralTipsWidgetController*>** StaticGet___9__16_0()
		{
			return (::System::Predicate_1<::MoleMole::UIGeneralTipsWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralLoginTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EB10);
		}
		static ::MoleMole::UIGeneralLoginTipsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralLoginTipsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralLoginTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EB18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShowLoginTips_b__16_0(::MoleMole::UIGeneralTipsWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__ONSHOWLOGINTIPS_B__16_0_OFFSET))(this, match);
		}
	};
}

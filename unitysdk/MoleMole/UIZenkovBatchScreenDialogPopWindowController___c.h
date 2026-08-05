#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0D280)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0D2C0)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONCLICKCLOSE_B__46_0_OFFSET UNITYSDK_OFFSET(0x15B0D2D0)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONSELLSUCCESS_B__54_0_OFFSET UNITYSDK_OFFSET(0x15B0D2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex = 45421;

	class UIZenkovBatchScreenDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIZenkovBatchScreenDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovBatchScreenDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4DB00);
		}
		static ::System::Action** StaticGet___9__46_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4DB08);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__54_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4DB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickClose_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONCLICKCLOSE_B__46_0_OFFSET))(this);
		}

		::System::Int32 _OnSellSuccess_b__54_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONSELLSUCCESS_B__54_0_OFFSET))(this, a, b);
		}
	};
}

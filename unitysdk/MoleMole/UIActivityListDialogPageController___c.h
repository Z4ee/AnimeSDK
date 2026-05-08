#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E43C90)
#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E43CD0)
#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__SHOWTAB_B__1_0_OFFSET UNITYSDK_OFFSET(0x17E43CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityListDialogPageController___c_TypeDefinitionIndex = 47234;

	class UIActivityListDialogPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityListDialogPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityListDialogPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EAC0);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTab_b__1_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__SHOWTAB_B__1_0_OFFSET))(this, t);
		}
	};
}

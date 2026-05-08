#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15296F50)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15296F90)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__INITVIEW_B__22_0_OFFSET UNITYSDK_OFFSET(0x15296FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex = 59042;

	class UIInterKnotPostDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotPostDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotPostDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x449B0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x449B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__22_0(::System::Int32 newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__INITVIEW_B__22_0_OFFSET))(this, newState);
		}
	};
}

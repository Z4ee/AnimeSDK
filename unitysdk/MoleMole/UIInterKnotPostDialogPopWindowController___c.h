#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B1D90)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169B1DD0)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__INITVIEW_B__22_0_OFFSET UNITYSDK_OFFSET(0x169B1DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex = 71204;

	class UIInterKnotPostDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46C50);
		}
		static ::MoleMole::UIInterKnotPostDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotPostDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46C58);
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

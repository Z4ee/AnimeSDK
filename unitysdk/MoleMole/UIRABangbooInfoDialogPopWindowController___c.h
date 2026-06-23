#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1789E3A0)
#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1789E3E0)
#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__REFRESHNOTIFICATIONS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1789E3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex = 68687;

	class UIRABangbooInfoDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43470);
		}
		static ::MoleMole::UIRABangbooInfoDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABangbooInfoDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshNotifications_b__17_0(::System::UInt32 item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__REFRESHNOTIFICATIONS_B__17_0_OFFSET))(this, item);
		}
	};
}

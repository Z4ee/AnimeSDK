#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D0FEC0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0FF00)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__25_0_OFFSET UNITYSDK_OFFSET(0x15D0FF20)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__ONUIOPEN_B__18_3_OFFSET UNITYSDK_OFFSET(0x15D0FF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSwitchBtnPanelChildWindowController___c_TypeDefinitionIndex = 46283;

	class UIInLevelSwitchBtnPanelChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__18_3()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32920);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32928);
		}
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__18_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__ONUIOPEN_B__18_3_OFFSET))(this, args);
		}

		::System::Boolean _InitSwitchAvatarComponent_b__25_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__25_0_OFFSET))(this);
		}
	};
}

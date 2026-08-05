#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B258AC0)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B258B00)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__ONCLICKTAKEREWARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x1B258B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex = 44985;

	class UIActivityOBGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A180);
		}
		static ::MoleMole::UIActivityOBGiftPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityOBGiftPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTakeReward_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__ONCLICKTAKEREWARD_B__14_0_OFFSET))(this);
		}
	};
}

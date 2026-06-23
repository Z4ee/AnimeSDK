#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5A900)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5A940)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__ONCLICKTAKEREWARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x18C5A950)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex = 40833;

	class UIActivityOBGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityOBGiftPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityOBGiftPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37810);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37818);
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

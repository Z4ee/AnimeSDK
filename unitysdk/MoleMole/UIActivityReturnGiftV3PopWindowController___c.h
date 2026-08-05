#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F37D0)
#define MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CLICKGETREWARD_B__2_1_OFFSET UNITYSDK_OFFSET(0x196F3820)
#define MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196F3810)
#define MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__REFRESHLEFTINFO_B__19_0_OFFSET UNITYSDK_OFFSET(0x196F3830)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnGiftV3PopWindowController___c_TypeDefinitionIndex = 56587;

	class UIActivityReturnGiftV3PopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__19_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftV3PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36AA0);
		}
		static ::System::Action** StaticGet___9__2_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftV3PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36AA8);
		}
		static ::MoleMole::UIActivityReturnGiftV3PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnGiftV3PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftV3PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickGetReward_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__CLICKGETREWARD_B__2_1_OFFSET))(this);
		}

		::System::Void _RefreshLeftInfo_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTV3POPWINDOWCONTROLLER___C__REFRESHLEFTINFO_B__19_0_OFFSET))(this);
		}
	};
}

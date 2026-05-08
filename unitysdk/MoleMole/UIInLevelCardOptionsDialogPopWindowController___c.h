#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B58910)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B58950)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INITINLEVELCARDOBJ_B__9_2_OFFSET UNITYSDK_OFFSET(0x14B58A90)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x14B58960)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex = 79806;

	class UIInLevelCardOptionsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelCardOptionsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelCardOptionsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E80);
		}
		static ::System::Action** StaticGet___9__9_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E88);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__4_0_OFFSET))(this);
		}

		::System::Void _InitInlevelCardObj_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INITINLEVELCARDOBJ_B__9_2_OFFSET))(this);
		}
	};
}

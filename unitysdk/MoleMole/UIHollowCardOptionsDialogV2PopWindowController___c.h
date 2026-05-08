#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1525CCC0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1525CD00)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__SHOWCOMBINEEFFECT_B__30_0_OFFSET UNITYSDK_OFFSET(0x1525CD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController___c_TypeDefinitionIndex = 51589;

	class UIHollowCardOptionsDialogV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35190);
		}
		static ::MoleMole::UIHollowCardOptionsDialogV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardOptionsDialogV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCombineEffect_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__SHOWCOMBINEEFFECT_B__30_0_OFFSET))(this);
		}
	};
}

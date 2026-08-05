#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14103E00)
#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14103E40)
#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__ONCLICKBATCHSALE_B__30_0_OFFSET UNITYSDK_OFFSET(0x14103E50)
#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__ONCLICKBATCHSALE_B__30_1_OFFSET UNITYSDK_OFFSET(0x14104190)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTrashcandaPopWindowController___c_TypeDefinitionIndex = 54778;

	class UIZenkovTrashcandaPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__30_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTrashcandaPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x371A0);
		}
		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTrashcandaPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x371A8);
		}
		static ::MoleMole::UIZenkovTrashcandaPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovTrashcandaPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTrashcandaPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x371B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBatchSale_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__ONCLICKBATCHSALE_B__30_0_OFFSET))(this);
		}

		::System::Void _OnClickBatchSale_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__ONCLICKBATCHSALE_B__30_1_OFFSET))(this);
		}
	};
}

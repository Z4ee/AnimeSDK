#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13005790)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130057D0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__ONGOMAPBUTTON_B__18_1_OFFSET UNITYSDK_OFFSET(0x130057E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeCraftsmanQuestPageController___c_TypeDefinitionIndex = 60787;

	class UIRopeCraftsmanQuestPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRopeCraftsmanQuestPageController___c_TypeDefinitionIndex)->GetStaticField(0x42DF0);
		}
		static ::MoleMole::UIRopeCraftsmanQuestPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRopeCraftsmanQuestPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRopeCraftsmanQuestPageController___c_TypeDefinitionIndex)->GetStaticField(0x42DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoMapButton_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___C__ONGOMAPBUTTON_B__18_1_OFFSET))(this);
		}
	};
}

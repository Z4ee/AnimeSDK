#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17201230)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17201270)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__REFRESHBUTTON_B__10_1_OFFSET UNITYSDK_OFFSET(0x17201280)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex = 55532;

	class UIHandBookProxyQuestItemWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookProxyQuestItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookProxyQuestItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41420);
		}
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshButton_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__REFRESHBUTTON_B__10_1_OFFSET))(this);
		}
	};
}

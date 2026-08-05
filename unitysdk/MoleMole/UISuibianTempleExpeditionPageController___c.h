#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119F2840)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119F2880)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__ONUIINIT_B__18_4_OFFSET UNITYSDK_OFFSET(0x119F2890)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex = 62508;

	class UISuibianTempleExpeditionPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x37000);
		}
		static ::MoleMole::UISuibianTempleExpeditionPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleExpeditionPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x37008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__ONUIINIT_B__18_4_OFFSET))(this);
		}
	};
}

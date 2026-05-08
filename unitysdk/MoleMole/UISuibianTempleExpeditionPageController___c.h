#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1523EB60)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1523EBA0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__ONUIINIT_B__18_4_OFFSET UNITYSDK_OFFSET(0x1523EBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex = 56072;

	class UISuibianTempleExpeditionPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleExpeditionPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleExpeditionPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x32B50);
		}
		static ::System::Action** StaticGet___9__18_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x32B58);
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

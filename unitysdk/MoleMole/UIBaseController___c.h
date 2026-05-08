#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C0450)
#define MOLEMOLE_UIBASECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0490)
#define MOLEMOLE_UIBASECONTROLLER___C__GOTOMAINPAGE_B__187_0_OFFSET UNITYSDK_OFFSET(0x158C04A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c_TypeDefinitionIndex = 70942;

	class UIBaseController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__187_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBaseController___c_TypeDefinitionIndex)->GetStaticField(0x3C9F0);
		}
		static ::MoleMole::UIBaseController___c** StaticGet___9()
		{
			return (::MoleMole::UIBaseController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBaseController___c_TypeDefinitionIndex)->GetStaticField(0x3C9F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainPage_b__187_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__GOTOMAINPAGE_B__187_0_OFFSET))(this);
		}
	};
}

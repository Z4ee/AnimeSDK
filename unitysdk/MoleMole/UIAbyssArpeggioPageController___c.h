#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1872A9F0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1872AA30)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x1872AA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController___c_TypeDefinitionIndex = 68404;

	class UIAbyssArpeggioPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssArpeggioPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssArpeggioPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x44FA0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x44FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET))(this);
		}
	};
}

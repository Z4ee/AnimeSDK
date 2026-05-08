#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E6D320)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6D360)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x15E6D370)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController___c_TypeDefinitionIndex = 46258;

	class UIAbyssArpeggioPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x41E30);
		}
		static ::MoleMole::UIAbyssArpeggioPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssArpeggioPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x41E38);
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

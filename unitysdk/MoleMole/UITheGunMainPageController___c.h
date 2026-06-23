#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156CAAE0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156CAB20)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__GOTOMAINCITY_B__28_0_OFFSET UNITYSDK_OFFSET(0x156CABF0)
#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__ONCLICKMAIN_B__25_0_OFFSET UNITYSDK_OFFSET(0x156CAB30)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController___c_TypeDefinitionIndex = 58510;

	class UITheGunMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITheGunMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x48A40);
		}
		static ::MoleMole::UITheGunMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITheGunMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITheGunMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x48A48);
		}
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITheGunMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x48A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMain_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__ONCLICKMAIN_B__25_0_OFFSET))(this);
		}

		::System::Void _GotoMainCity_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER___C__GOTOMAINCITY_B__28_0_OFFSET))(this);
		}
	};
}

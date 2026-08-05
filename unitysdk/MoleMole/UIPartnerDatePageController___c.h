#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__BIND_B__13_3_OFFSET UNITYSDK_OFFSET(0x168EF180)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168EF130)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168EF170)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c_TypeDefinitionIndex = 74036;

	class UIPartnerDatePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIPartnerDatePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIPartnerDatePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDatePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A700);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIPartnerDatePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__13_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__BIND_B__13_3_OFFSET))(this);
		}
	};
}

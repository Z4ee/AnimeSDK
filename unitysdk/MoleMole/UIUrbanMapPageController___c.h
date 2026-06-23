#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383C230)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1383C270)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__ONUICLOSE_B__17_0_OFFSET UNITYSDK_OFFSET(0x1383C280)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageController___c_TypeDefinitionIndex = 64767;

	class UIUrbanMapPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIUrbanMapPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIUrbanMapPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapPageController___c_TypeDefinitionIndex)->GetStaticField(0x453C0);
		}
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapPageController___c_TypeDefinitionIndex)->GetStaticField(0x453C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIClose_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___C__ONUICLOSE_B__17_0_OFFSET))(this);
		}
	};
}

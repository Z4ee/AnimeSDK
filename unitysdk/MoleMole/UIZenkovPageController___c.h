#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EF650)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162EF690)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENBUILDINGFROMCONTEXT_B__15_0_OFFSET UNITYSDK_OFFSET(0x162EF6A0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENBUILDINGFROMCONTEXT_B__15_1_OFFSET UNITYSDK_OFFSET(0x162EF7D0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENMISSIONPAGEFROMCONTEXT_B__17_0_OFFSET UNITYSDK_OFFSET(0x162EF7E0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENMISSIONPAGEFROMCONTEXT_B__17_1_OFFSET UNITYSDK_OFFSET(0x162EF910)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPageController___c_TypeDefinitionIndex = 76757;

	class UIZenkovPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController___c_TypeDefinitionIndex)->GetStaticField(0x402B0);
		}
		static ::MoleMole::UIZenkovPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController___c_TypeDefinitionIndex)->GetStaticField(0x402B8);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController___c_TypeDefinitionIndex)->GetStaticField(0x402C0);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController___c_TypeDefinitionIndex)->GetStaticField(0x402C8);
		}
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController___c_TypeDefinitionIndex)->GetStaticField(0x402D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryOpenBuildingFromContext_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENBUILDINGFROMCONTEXT_B__15_0_OFFSET))(this);
		}

		::System::Void _TryOpenBuildingFromContext_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENBUILDINGFROMCONTEXT_B__15_1_OFFSET))(this);
		}

		::System::Void _TryOpenMissionPageFromContext_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENMISSIONPAGEFROMCONTEXT_B__17_0_OFFSET))(this);
		}

		::System::Void _TryOpenMissionPageFromContext_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___C__TRYOPENMISSIONPAGEFROMCONTEXT_B__17_1_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1376E070)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1376E0C0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_1_OFFSET UNITYSDK_OFFSET(0x1376E190)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_2_OFFSET UNITYSDK_OFFSET(0x1376E260)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1376E0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext___c_TypeDefinitionIndex = 56030;

	class UIRoleInfoPageContext___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleInfoPageContext___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageContext___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x32AB0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x32AB8);
		}
		static ::System::Action** StaticGet___9__11_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x32AC0);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x32AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Construct_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_0_OFFSET))(this);
		}

		::System::Void _Construct_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_1_OFFSET))(this);
		}

		::System::Void _Construct_b__11_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_2_OFFSET))(this);
		}
	};
}

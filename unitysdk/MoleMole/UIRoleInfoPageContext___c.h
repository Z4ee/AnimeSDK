#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75EA0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_0_OFFSET UNITYSDK_OFFSET(0x15E75EF0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_1_OFFSET UNITYSDK_OFFSET(0x15E75FB0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__11_2_OFFSET UNITYSDK_OFFSET(0x15E76070)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext___c_TypeDefinitionIndex = 58641;

	class UIRoleInfoPageContext___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleInfoPageContext___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageContext___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x36F60);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x36F68);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x36F70);
		}
		static ::System::Action** StaticGet___9__11_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x36F78);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E71F40)
#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CONSTRUCT_B__17_0_OFFSET UNITYSDK_OFFSET(0x12E71F90)
#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E71F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext___c_TypeDefinitionIndex = 73485;

	class UIRoleInfoDataContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoDataContext___c_TypeDefinitionIndex)->GetStaticField(0x3CDE0);
		}
		static ::MoleMole::UIRoleInfoDataContext___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoDataContext___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoDataContext___c_TypeDefinitionIndex)->GetStaticField(0x3CDE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Construct_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CONSTRUCT_B__17_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E6E380)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6E3C0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__EXITPREPPAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x15E6E3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex = 62938;

	class UICinemaInviteRoleWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICinemaInviteRoleWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICinemaInviteRoleWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49F30);
		}
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPrepPage_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__EXITPREPPAGE_B__16_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_190;
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179BBB80)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179BBBC0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__72_0_OFFSET UNITYSDK_OFFSET(0x179BBBD0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__77_0_OFFSET UNITYSDK_OFFSET(0x179BBC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex = 45382;

	class UIRoleInfoSkillChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__77_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40090);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_190*>** StaticGet___9__72_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_190*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40098);
		}
		static ::MoleMole::UIRoleInfoSkillChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoSkillChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x400A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailView_b__72_0(::Class_2_208CC9941471731A_190* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_190*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__72_0_OFFSET))(this, x);
		}

		::System::Void _RefreshUnlockCondition_b__77_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__77_0_OFFSET))(this);
		}
	};
}

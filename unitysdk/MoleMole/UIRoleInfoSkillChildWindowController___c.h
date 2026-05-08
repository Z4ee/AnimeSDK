#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1457D880)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1457D8C0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__70_0_OFFSET UNITYSDK_OFFSET(0x1457D8D0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__75_0_OFFSET UNITYSDK_OFFSET(0x1457D980)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex = 79292;

	class UIRoleInfoSkillChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleInfoSkillChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoSkillChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CDF0);
		}
		static ::System::Action** StaticGet___9__75_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CDF8);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__70_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailView_b__70_0(::Class_2_208CC9941471731A_296* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__70_0_OFFSET))(this, x);
		}

		::System::Void _RefreshUnlockCondition_b__75_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__75_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_532;
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1668DCC0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1668DD00)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__73_0_OFFSET UNITYSDK_OFFSET(0x1668DD10)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__78_0_OFFSET UNITYSDK_OFFSET(0x1668DDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex = 77496;

	class UIRoleInfoSkillChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleInfoSkillChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoSkillChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F480);
		}
		static ::System::Action** StaticGet___9__78_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F488);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_532*>** StaticGet___9__73_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_532*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailView_b__73_0(::Class_2_208CC9941471731A_532* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_532*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__73_0_OFFSET))(this, x);
		}

		::System::Void _RefreshUnlockCondition_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__78_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10ED4B30)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED4B70)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__ONSKILLBTNCLICK_B__21_0_OFFSET UNITYSDK_OFFSET(0x10ED4B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex = 74934;

	class UIStrategyGuideRoleInfoPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIStrategyGuideRoleInfoPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIStrategyGuideRoleInfoPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC40);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4EC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkillBtnClick_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__ONSKILLBTNCLICK_B__21_0_OFFSET))(this);
		}
	};
}

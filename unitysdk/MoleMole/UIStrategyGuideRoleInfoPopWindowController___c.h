#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DBA670)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBA6B0)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__ONSKILLBTNCLICK_B__21_0_OFFSET UNITYSDK_OFFSET(0x14DBA6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex = 77516;

	class UIStrategyGuideRoleInfoPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45E30);
		}
		static ::MoleMole::UIStrategyGuideRoleInfoPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIStrategyGuideRoleInfoPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45E38);
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

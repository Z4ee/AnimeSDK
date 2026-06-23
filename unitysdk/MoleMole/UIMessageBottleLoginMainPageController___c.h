#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E9FEB0)
#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9FEF0)
#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__TRIGGERQUESTPROGRESSKICK_B__13_0_OFFSET UNITYSDK_OFFSET(0x16E9FF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex = 46667;

	class UIMessageBottleLoginMainPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMessageBottleLoginMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMessageBottleLoginMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x41630);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x41638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerQuestProgressKick_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__TRIGGERQUESTPROGRESSKICK_B__13_0_OFFSET))(this);
		}
	};
}

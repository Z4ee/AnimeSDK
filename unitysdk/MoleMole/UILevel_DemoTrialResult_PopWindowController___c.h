#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16418400)
#define MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16418440)
#define MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__ONPOPSHOWED_B__5_2_OFFSET UNITYSDK_OFFSET(0x16418450)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_DemoTrialResult_PopWindowController___c_TypeDefinitionIndex = 71725;

	class UILevel_DemoTrialResult_PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILevel_DemoTrialResult_PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILevel_DemoTrialResult_PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevel_DemoTrialResult_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3ABB0);
		}
		static ::System::Action** StaticGet___9__5_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevel_DemoTrialResult_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3ABB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_DEMOTRIALRESULT_POPWINDOWCONTROLLER___C__ONPOPSHOWED_B__5_2_OFFSET))(this);
		}
	};
}

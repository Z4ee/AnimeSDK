#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DA7A70)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA7AB0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRCONFIRM_B__18_0_OFFSET UNITYSDK_OFFSET(0x14DA7AC0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRFAILED_B__21_0_OFFSET UNITYSDK_OFFSET(0x14DA7D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController___c_TypeDefinitionIndex = 59643;

	class UIRepairPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRepairPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRepairPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42140);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42148);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowRepairConfirm_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRCONFIRM_B__18_0_OFFSET))(this);
		}

		::System::Void _ShowRepairFailed_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRFAILED_B__21_0_OFFSET))(this);
		}
	};
}

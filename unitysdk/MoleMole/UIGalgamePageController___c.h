#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD1B80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__107_0_OFFSET UNITYSDK_OFFSET(0x18AD1C00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD1BC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__PLAYARGUENPCENTERACTIONS_B__28_0_OFFSET UNITYSDK_OFFSET(0x18AD1BD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__PLAYNPCENTERACTIONS_B__532_3_OFFSET UNITYSDK_OFFSET(0x18AD1C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c_TypeDefinitionIndex = 62782;

	class UIGalgamePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFA0);
		}
		static ::MoleMole::UIGalgamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGalgamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFA8);
		}
		static ::System::Action** StaticGet___9__107_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFB0);
		}
		static ::System::Action** StaticGet___9__532_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__PLAYARGUENPCENTERACTIONS_B__28_0_OFFSET))(this);
		}

		::System::Void _CheckMaincityBGM_b__107_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__CHECKMAINCITYBGM_B__107_0_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__532_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__PLAYNPCENTERACTIONS_B__532_3_OFFSET))(this);
		}
	};
}

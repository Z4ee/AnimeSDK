#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186F6950)
#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186F6990)
#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__13_0_OFFSET UNITYSDK_OFFSET(0x186F69A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex = 51715;

	class UIInLevelSkillButtonSoloAidChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelSkillButtonSoloAidChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelSkillButtonSoloAidChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37BD0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitSwitchAvatarComponent_b__13_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__13_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176082D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CHANGECAMERAMODE_B__11_0_OFFSET UNITYSDK_OFFSET(0x17608320)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17608310)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController___c_TypeDefinitionIndex = 43776;

	class UIBaseScenePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBaseScenePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBaseScenePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBaseScenePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A1B0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBaseScenePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeCameraMode_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CHANGECAMERAMODE_B__11_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A72640)
#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A72680)
#define MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__ONCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0x16A72690)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex = 64547;

	class UIPhotoWallWatchModeWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIPhotoWallWatchModeWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIPhotoWallWatchModeWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AEC0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoWallWatchModeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLWATCHMODEWIDGETCONTROLLER___C__ONCLICK_B__11_0_OFFSET))(this);
		}
	};
}

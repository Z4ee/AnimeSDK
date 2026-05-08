#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_238;

#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152CB320)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwakenItemWidgetControllerContext_TypeDefinitionIndex = 75078;

	class UIActivityAvatarAwakenItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_238* TutorialCfg; // 0x28
		::Class_2_208CC9941471731A_238* Cfg; // 0x30
		::System::Boolean IsFocused; // 0x38
		::UnityEngine::Color Color; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

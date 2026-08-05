#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_709;

#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173CC3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwakenItemWidgetControllerContext_TypeDefinitionIndex = 62528;

	class UIActivityAvatarAwakenItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_709* TutorialCfg; // 0x28
		::Class_2_208CC9941471731A_709* Cfg; // 0x30
		::UnityEngine::Color Color; // 0x38
		::System::Boolean IsFocused; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

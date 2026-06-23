#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157C5A40)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowContext_TypeDefinitionIndex = 85033;

	class UITransitionPanelPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean notSetAudioPlayMix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

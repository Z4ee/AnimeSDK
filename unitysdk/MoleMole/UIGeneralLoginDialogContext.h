#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MoleMole { class UILoginPageController; }

#define MOLEMOLE_UIGENERALLOGINDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16870A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginDialogContext_TypeDefinitionIndex = 48387;

	class UIGeneralLoginDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UILoginPageController* loginPage; // 0x28
		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* container; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

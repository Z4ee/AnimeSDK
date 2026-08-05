#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MoleMole { class UILoginPageController; }

#define MOLEMOLE_UIGENERALLOGINDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18406C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginDialogContext_TypeDefinitionIndex = 40815;

	class UIGeneralLoginDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* container; // 0x28
		::MoleMole::UILoginPageController* loginPage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

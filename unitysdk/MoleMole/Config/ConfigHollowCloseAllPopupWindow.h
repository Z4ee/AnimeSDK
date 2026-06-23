#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x158A9AD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x158A9B90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCloseAllPopupWindow_TypeDefinitionIndex = 86718;

	class ConfigHollowCloseAllPopupWindow : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x1A039930)
#define MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A039EE0)
#define MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x1A039F00)

namespace MoleMole
{
	inline static constexpr unsigned int LayoutPlatformSettingContext_TypeDefinitionIndex = 65121;

	class LayoutPlatformSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::EUILayoutPlatform LayoutPlatform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTPLATFORMSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}

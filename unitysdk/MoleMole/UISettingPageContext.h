#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1302E7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageContext_TypeDefinitionIndex = 70602;

	class UISettingPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ESystemSettingType ShowPageType; // 0x28
		::System::Boolean PopRoulettSetting; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

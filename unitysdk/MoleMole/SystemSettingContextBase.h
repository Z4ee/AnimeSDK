#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0x145090E0)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0x145090A0)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x14509000)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x14509040)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x145072F0)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingContextBase_TypeDefinitionIndex = 82899;

	class SystemSettingContextBase : public ::System::Object
	{
	public:
		::System::String* OptionTextCode; // 0x10
		::System::String* OptionText; // 0x18
		::System::Boolean HideOnUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsShowOnUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET))(this);
		}

		::System::String* GetOverrideOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET))(this);
		}

		::System::String* GetOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOPTIONTEXTKEY_OFFSET))(this);
		}
	};
}

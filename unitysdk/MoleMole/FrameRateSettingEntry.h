#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_FRAMERATESETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1780F750)
#define MOLEMOLE_FRAMERATESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1780F740)
#define MOLEMOLE_FRAMERATESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1780F760)

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateSettingEntry_TypeDefinitionIndex = 51874;

	class FrameRateSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATESETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}

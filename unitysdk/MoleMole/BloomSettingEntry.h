#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_BLOOMSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x14840AF0)
#define MOLEMOLE_BLOOMSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x14840AE0)
#define MOLEMOLE_BLOOMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14840B00)

namespace MoleMole
{
	inline static constexpr unsigned int BloomSettingEntry_TypeDefinitionIndex = 50229;

	class BloomSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLOOMSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_DISTORTIONSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x19D6EC90)
#define MOLEMOLE_DISTORTIONSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19D6EC80)
#define MOLEMOLE_DISTORTIONSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6ECA0)

namespace MoleMole
{
	inline static constexpr unsigned int DistortionSettingEntry_TypeDefinitionIndex = 47816;

	class DistortionSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}

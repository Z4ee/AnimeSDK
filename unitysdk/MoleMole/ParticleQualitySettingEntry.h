#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_PARTICLEQUALITYSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1081E190)
#define MOLEMOLE_PARTICLEQUALITYSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1081E180)
#define MOLEMOLE_PARTICLEQUALITYSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1081E1A0)

namespace MoleMole
{
	inline static constexpr unsigned int ParticleQualitySettingEntry_TypeDefinitionIndex = 77277;

	class ParticleQualitySettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTICLEQUALITYSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTICLEQUALITYSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTICLEQUALITYSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}

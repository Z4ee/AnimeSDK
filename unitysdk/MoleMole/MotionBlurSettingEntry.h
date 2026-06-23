#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_MOTIONBLURSETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1264CB30)
#define MOLEMOLE_MOTIONBLURSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1264CB20)
#define MOLEMOLE_MOTIONBLURSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1264CB40)

namespace MoleMole
{
	inline static constexpr unsigned int MotionBlurSettingEntry_TypeDefinitionIndex = 60981;

	class MotionBlurSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOTIONBLURSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOTIONBLURSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOTIONBLURSETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}

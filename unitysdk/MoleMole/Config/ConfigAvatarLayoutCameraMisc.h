#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGAVATARLAYOUTCAMERAMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x134F5A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarLayoutCameraMisc_TypeDefinitionIndex = 58142;

	class ConfigAvatarLayoutCameraMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single SwitchAvatarBlendOutDuration; // 0x58
		::System::String* SwitchAvatarBlendOutCurveKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARLAYOUTCAMERAMISC__CTOR_OFFSET))(this);
		}
	};
}

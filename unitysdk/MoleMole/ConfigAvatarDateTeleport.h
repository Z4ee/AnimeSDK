#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPosRot; }

#define MOLEMOLE_CONFIGAVATARDATETELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D31280)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAvatarDateTeleport_TypeDefinitionIndex = 63215;

	class ConfigAvatarDateTeleport : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPosRot* posRot; // 0x58
		::System::Single MaxSwitchPositionSearchLimitRadius; // 0x60
		::System::Single MaxSwitchPositionHeightDiff; // 0x64
		::System::Single MaxSwitchPositionSearchDistance; // 0x68
		::System::Single StartSwitchPositionTurnCheckDistance; // 0x6C
		::System::Single StartSwitchPositionTurnAngle; // 0x70
		::System::Single defaultFadeInDuration; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGAVATARDATETELEPORT__CTOR_OFFSET))(this);
		}
	};
}

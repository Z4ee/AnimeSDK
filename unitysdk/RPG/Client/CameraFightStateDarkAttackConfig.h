#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CAMERAFIGHTSTATEDARKATTACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BA560)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateDarkAttackConfig_TypeDefinitionIndex = 65045;

	class CameraFightStateDarkAttackConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::System::Single MultiTargetAttackMaxAngle; // 0x20
		::UnityEngine::Vector3 NamedOrSomatoDynamicAnchorOffsetScale; // 0x24
		::UnityEngine::Vector3 NamedOrSomatoDynamicAimOffsetScale; // 0x30
		::System::Boolean MultiTargetAttackAnchorOffsetOpen; // 0x3C
		::System::Single MultiTargetAttackAnchorOffsetX; // 0x40
		::System::Single MultiTargetAttackAnchorOffsetMinAngle; // 0x44
		::System::Single MultiTargetAttackAnchorOffsetMaxAngle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEDARKATTACKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

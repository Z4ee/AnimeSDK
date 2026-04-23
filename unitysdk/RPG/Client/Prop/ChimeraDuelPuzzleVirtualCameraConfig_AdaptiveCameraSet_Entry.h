#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xADD6B30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry_TypeDefinitionIndex = 71811;

	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry : public ::System::Object
	{
	public:
		::System::Int32 AspectWidth; // 0x10
		::System::Int32 AspectHeight; // 0x14
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_ENTRY__CTOR_OFFSET))(this);
		}
	};
}

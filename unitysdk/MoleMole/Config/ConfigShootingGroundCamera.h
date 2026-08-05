#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D9D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundCamera_TypeDefinitionIndex = 44388;

	class ConfigShootingGroundCamera : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NormalOffset; // 0x10
		::System::Single NormalOffsetBlendInDuration; // 0x1C
		::System::String* NormalOffsetBlendInCurve; // 0x20
		::System::Single NormalOffsetBlendOutDuration; // 0x28
		::System::String* NormalOffsetBlendOutCurve; // 0x30
		::UnityEngine::Vector3 ZoomOffset; // 0x38
		::System::Single ZoomOffsetBlendInDuration; // 0x44
		::System::String* ZoomOffsetBlendInCurve; // 0x48
		::System::Single ZoomOffsetBlendOutDuration; // 0x50
		::System::String* ZoomOffsetBlendOutCurve; // 0x58
		::System::Single LeftYawLimit; // 0x60
		::System::Single RightYawLimit; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDCAMERA__CTOR_OFFSET))(this);
		}
	};
}

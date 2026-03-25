#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKNPCVISIONCONFIG_METHOD_2_5AF98F108809A282_OFFSET UNITYSDK_OFFSET(0x178A4140)
#define RPG_GAMECORE_TRACKNPCVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A44D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcVisionConfig_TypeDefinitionIndex = 14897;

	class TrackNpcVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VisionID; // 0x10
		::System::Single DistanceRange; // 0x18
		::System::Single YawAngleRange; // 0x1C
		::System::Single PitchAngleLimitMin; // 0x20
		::System::Single PitchAngleLimitMax; // 0x24
		::System::UInt32 Priority; // 0x28
		::System::String* RayStartPointName; // 0x30
		::System::String* RayEndPointName; // 0x38
		::RPG::GameCore::VisionZoneTag ZoneTag; // 0x40
		::System::Boolean UseForVision; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5AF98F108809A282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCVISIONCONFIG_METHOD_2_5AF98F108809A282_OFFSET))(a1, a2);
		}
	};
}

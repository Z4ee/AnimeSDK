#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D1EBD0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D1CC50)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D1EC30)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D1CCD0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1F350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShake_TypeDefinitionIndex = 43135;

	class ConfigCameraShake : public ::System::Object
	{
	public:
		// static const ::System::String* CONFIG_PATH; // 0x0
		::System::String* ShakeCenterAttachPoint; // 0x10
		::System::String* CurveKey; // 0x18
		::System::String* StandardConfigKey; // 0x20
		::System::String* CustomCurveKey; // 0x28
		::System::String* FadeOutCurve; // 0x30
		::System::String* FadeInCurve; // 0x38
		::MoleMole::Config::AttackPropConfigType CameraShakePropConfigEnum; // 0x40
		::System::Single DistanceToPlane; // 0x44
		::System::Boolean RealtimeVibration; // 0x48
		::System::Boolean IngoreTimeScale; // 0x49
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x4C
		::MoleMole::Config::DissipationMode DissipationMode; // 0x50
		::System::Single FadeOutDuration; // 0x54
		::System::Single ImpactRadius; // 0x58
		::MoleMole::Config::ShakeType ShakeType; // 0x5C
		::System::Single DissipationDistance; // 0x60
		::System::Single AngleVertical; // 0x64
		::System::Single NoiseAngle; // 0x68
		::System::Single FadeInDuration; // 0x6C
		::System::Single ShakeTotalTime; // 0x70
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x74
		::System::Single Frequency; // 0x78
		::System::Single NoiseRatio; // 0x7C
		::System::Single RadiusLength; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

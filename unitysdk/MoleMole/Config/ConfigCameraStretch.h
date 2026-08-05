#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1436AFE0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143684C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1436B040)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x14368540)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1436BB10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_TypeDefinitionIndex = 57462;

	class ConfigCameraStretch : public ::System::Object
	{
	public:
		::System::String* EndCurveKey; // 0x10
		::System::String* StartCurveKey; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* RuntimeCamFollowYPoints; // 0x20
		::System::Single RotationZ; // 0x28
		::System::Boolean IgnoreLocalAvatar; // 0x2C
		::System::Boolean IsAppliedEleRatio; // 0x2D
		::System::Boolean IsAppliedEndEleAngle; // 0x2E
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x30
		::System::Single RuntimeCamFollowYOffsetRatio; // 0x34
		::System::Boolean IsEleAngleAbsoluted; // 0x38
		::System::Boolean IngorePriorityInEndTime; // 0x39
		::System::Boolean IgnoreWorldTimeScale; // 0x3A
		::System::Boolean IsEndEleAngleAbsoluted; // 0x3B
		::System::Single ElevationAngleMin; // 0x3C
		::System::Single RecoilTime; // 0x40
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x44
		::System::Single EndElevationAngleMax; // 0x48
		::System::Boolean ApplyAthPtsCamFollowYOffset; // 0x4C
		::System::Boolean ApplyRuntimeCamFollowYOffset; // 0x4D
		::System::Boolean CamOffsetLocalCoords; // 0x4E
		::System::Boolean IgnoreOwnerTimeScale; // 0x4F
		::System::Single ElevationAngleMax; // 0x50
		::System::Single HoldTime; // 0x54
		::System::Single DelayTime; // 0x58
		::System::Single PosOffsetZ; // 0x5C
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x60
		::System::Single EndElevationAngleMin; // 0x64
		::System::Single RadiusRatio; // 0x68
		::System::Single StretchTime; // 0x6C
		::System::Single PosOffsetX; // 0x70
		::System::Single PosOffsetY; // 0x74
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

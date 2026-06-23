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

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1589C310)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15899830)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1589C370)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158998B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1589CE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_TypeDefinitionIndex = 69807;

	class ConfigCameraStretch : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* RuntimeCamFollowYPoints; // 0x10
		::System::String* EndCurveKey; // 0x18
		::System::String* StartCurveKey; // 0x20
		::System::Single HoldTime; // 0x28
		::System::Single ElevationAngleMin; // 0x2C
		::System::Boolean IgnoreLocalAvatar; // 0x30
		::System::Boolean IsEndEleAngleAbsoluted; // 0x31
		::System::Boolean IsAppliedEndEleAngle; // 0x32
		::System::Boolean IgnoreOwnerTimeScale; // 0x33
		::System::Boolean IngorePriorityInEndTime; // 0x34
		::System::Boolean ApplyAthPtsCamFollowYOffset; // 0x35
		::System::Boolean IsEleAngleAbsoluted; // 0x36
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x38
		::System::Single EndElevationAngleMax; // 0x3C
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x40
		::System::Single DelayTime; // 0x44
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x48
		::System::Single PosOffsetX; // 0x4C
		::System::Single StretchTime; // 0x50
		::System::Single RecoilTime; // 0x54
		::System::Single ElevationAngleMax; // 0x58
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x5C
		::System::Single RadiusRatio; // 0x60
		::System::Single PosOffsetZ; // 0x64
		::System::Single EndElevationAngleMin; // 0x68
		::System::Single RuntimeCamFollowYOffsetRatio; // 0x6C
		::System::Single RotationZ; // 0x70
		::System::Boolean IgnoreWorldTimeScale; // 0x74
		::System::Boolean CamOffsetLocalCoords; // 0x75
		::System::Boolean ApplyRuntimeCamFollowYOffset; // 0x76
		::System::Boolean IsAppliedEleRatio; // 0x77
		::System::Single PosOffsetY; // 0x78

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

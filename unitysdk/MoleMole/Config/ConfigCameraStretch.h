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

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A85B50)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16A83060)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A85BB0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16A830E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A86680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_TypeDefinitionIndex = 57480;

	class ConfigCameraStretch : public ::System::Object
	{
	public:
		::System::String* EndCurveKey; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* RuntimeCamFollowYPoints; // 0x18
		::System::String* StartCurveKey; // 0x20
		::System::Single RadiusRatio; // 0x28
		::System::Single EndElevationAngleMax; // 0x2C
		::System::Single ElevationAngleMax; // 0x30
		::System::Single RuntimeCamFollowYOffsetRatio; // 0x34
		::System::Single RotationZ; // 0x38
		::System::Single DelayTime; // 0x3C
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x40
		::System::Single StretchTime; // 0x44
		::System::Boolean IsEndEleAngleAbsoluted; // 0x48
		::System::Boolean IsEleAngleAbsoluted; // 0x49
		::System::Boolean IgnoreLocalAvatar; // 0x4A
		::System::Single HoldTime; // 0x4C
		::System::Boolean CamOffsetLocalCoords; // 0x50
		::System::Boolean IgnoreWorldTimeScale; // 0x51
		::System::Boolean ApplyAthPtsCamFollowYOffset; // 0x52
		::System::Boolean ApplyRuntimeCamFollowYOffset; // 0x53
		::System::Single RecoilTime; // 0x54
		::System::Single EndElevationAngleMin; // 0x58
		::System::Boolean IsAppliedEleRatio; // 0x5C
		::System::Boolean IgnoreOwnerTimeScale; // 0x5D
		::System::Boolean IngorePriorityInEndTime; // 0x5E
		::System::Boolean IsAppliedEndEleAngle; // 0x5F
		::System::Single PosOffsetZ; // 0x60
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x64
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x68
		::System::Single ElevationAngleMin; // 0x6C
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x70
		::System::Single PosOffsetX; // 0x74
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

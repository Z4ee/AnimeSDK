#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1752C240)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1752AC70)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1752C2F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1752AD40)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1752C780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStory_TypeDefinitionIndex = 50743;

	class ConfigCameraStory : public ::System::Object
	{
	public:
		::System::String* ExitCurveKey; // 0x10
		::System::String* EnterCurveKey; // 0x18
		::System::Single ExitTime; // 0x20
		::System::Single EnterTime; // 0x24
		::System::Single AvaiableFanAngle; // 0x28
		::System::Single CameraYOffset; // 0x2C
		::System::Single TargetElevationRatio; // 0x30
		::System::Single MaxElevationRatio; // 0x34
		::System::Single TargetBackRotateAngle; // 0x38
		::System::Single MinElevationRatio; // 0x3C
		::System::Single CameraFov; // 0x40
		::System::Single AvatarBackRotateAngle; // 0x44
		::System::Single ViewDistance; // 0x48
		::System::Single FollowPositionRatio; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

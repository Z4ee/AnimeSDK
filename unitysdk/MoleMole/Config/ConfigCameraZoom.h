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

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD53D60)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD52640)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD53DC0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD526C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD54300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZoom_TypeDefinitionIndex = 53404;

	class ConfigCameraZoom : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::String* EndCurveKey; // 0x18
		::MoleMole::Config::ConfigDataPriority DataPriority; // 0x20
		::System::Boolean IngorePriorityInEndTime; // 0x24
		::System::Boolean IgnoreWorldTimeScale; // 0x25
		::System::Boolean IgnoreLocalAvatar; // 0x26
		::System::Boolean IgnoreOwnerTimeScale; // 0x27
		::System::Single LastTime; // 0x28
		::System::Single StartTime; // 0x2C
		::MoleMole::Config::CameraConfigDataStacking StackingType; // 0x30
		::System::Single Fov; // 0x34
		::MoleMole::Config::ValueVariationType FovVariationType; // 0x38
		::System::Single DelayTime; // 0x3C
		::System::Single EndTime; // 0x40
		::MoleMole::Config::ConfigDataPlayStacking PlayStackingType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}

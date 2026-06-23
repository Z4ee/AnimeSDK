#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF5690)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF58C0)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF56F0)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF5940)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitWallCameraShakeConfig_TypeDefinitionIndex = 65298;

	class HitWallCameraShakeConfig : public ::System::Object
	{
	public:
		::System::String* CameraShakeKey; // 0x10
		::System::Single CameraShakeProtectCD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}

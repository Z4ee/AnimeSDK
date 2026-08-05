#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigCameraLockTargetBase.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116FC280)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116FBDD0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_METHOD_2_591F73C1C45E9D80_OFFSET UNITYSDK_OFFSET(0x116FC2E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x116FBE50)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x116FC4C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTarget_TypeDefinitionIndex = 78674;

	class ConfigCameraLockTarget : public ::MoleMole::Config::ConfigCameraLockTargetBase
	{
	public:
		::System::Single BackRotateAngle; // 0x18
		::System::Single ExternalFanAngle; // 0x1C
		::Enum_3_8252736F97D4CFA3_2 LockTargetDirection; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_591F73C1C45E9D80(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_METHOD_2_591F73C1C45E9D80_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
		}
	};
}

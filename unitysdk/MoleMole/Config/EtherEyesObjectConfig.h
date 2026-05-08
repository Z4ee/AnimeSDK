#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x70AE40)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x70ADB0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_METHOD_2_723D4849983651D2_OFFSET UNITYSDK_OFFSET(0x70AED0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x70AEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectConfig_TypeDefinitionIndex = 51277;

	struct alignas(4) EtherEyesObjectConfig
	{
		::MoleMole::Config::EtherEyesObjectType EtherEyesObjectType; // 0x10
		::System::Boolean canInteract; // 0x14
		::UnityEngine::Vector3 ZoomLockOffset; // 0x18
		::System::Boolean UseSpecialHighLightEffect; // 0x24

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_723D4849983651D2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_METHOD_2_723D4849983651D2_OFFSET))(this, a1, a2);
		}
	};
}

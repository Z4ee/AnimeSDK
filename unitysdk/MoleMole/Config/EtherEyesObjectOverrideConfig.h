#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6B3D70)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6B3CE0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_METHOD_2_B3B892B7B0ACCBE5_OFFSET UNITYSDK_OFFSET(0x6B3DD0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x6B3DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectOverrideConfig_TypeDefinitionIndex = 67369;

	struct alignas(1) EtherEyesObjectOverrideConfig
	{
		::System::Boolean UseButtonHighlight; // 0x10
		::System::Boolean UseSpecialMaterial; // 0x11
		::System::Boolean UseHighLightEffect; // 0x12

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_B3B892B7B0ACCBE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_METHOD_2_B3B892B7B0ACCBE5_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}

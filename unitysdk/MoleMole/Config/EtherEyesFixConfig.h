#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x74A1B0)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x74A120)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_METHOD_2_782A6BFBCB1628EC_OFFSET UNITYSDK_OFFSET(0x74A210)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x74A220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesFixConfig_TypeDefinitionIndex = 54938;

	struct alignas(8) EtherEyesFixConfig
	{
		::System::String* clipNameForward; // 0x10
		::System::String* clipNameBackward; // 0x18
		::System::Boolean supportLoop; // 0x20
		::System::Boolean overrideInteractPoint; // 0x21
		::System::String* soundEventForward; // 0x28
		::System::String* soundEventBackward; // 0x30

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_782A6BFBCB1628EC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_METHOD_2_782A6BFBCB1628EC_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}

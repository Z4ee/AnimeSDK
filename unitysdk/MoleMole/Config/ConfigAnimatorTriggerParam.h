#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x759760)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7596D0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_METHOD_2_ADFCC0DC85F98B9C_OFFSET UNITYSDK_OFFSET(0x7597F0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7597C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorTriggerParam_TypeDefinitionIndex = 73794;

	struct alignas(8) ConfigAnimatorTriggerParam
	{
		::System::String* Key; // 0x10

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_ADFCC0DC85F98B9C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_METHOD_2_ADFCC0DC85F98B9C_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class TriggerCreationData; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x86EE70)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x86EDE0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x86EEE0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_METHOD_2_E4D020DE71A7D4FC_OFFSET UNITYSDK_OFFSET(0x86EED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerCreationData_TypeDefinitionIndex = 48701;

	struct alignas(8) ConfigTriggerCreationData
	{
		::System::String* ColliderName; // 0x10
		::MoleMole::Config::TriggerCreationData* ColliderData; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_E4D020DE71A7D4FC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_METHOD_2_E4D020DE71A7D4FC_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}

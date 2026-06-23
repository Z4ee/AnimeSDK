#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_59EE1BC3756905F1.h"
#include "unitysdk/Enum_3_83895AC6F8410267.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97DF30)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE97DAE0)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xE97DB60)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG_METHOD_1_89B2FC95210CA3EA_OFFSET UNITYSDK_OFFSET(0xE97DF90)
#define MOLEMOLE_CONFIG_NPCMONTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE97E240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NpcMontageConfig_TypeDefinitionIndex = 47686;

	class NpcMontageConfig : public ::System::Object
	{
	public:
		::System::Int32 MontageID; // 0x10
		::Enum_3_83895AC6F8410267 MontageLayer; // 0x14
		::Enum_3_59EE1BC3756905F1 MontageEndBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_89B2FC95210CA3EA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCMONTAGECONFIG_METHOD_1_89B2FC95210CA3EA_OFFSET))(this, a1, a2);
		}
	};
}

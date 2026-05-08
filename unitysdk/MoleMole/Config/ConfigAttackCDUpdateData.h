#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D337E0)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D33420)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x12D334A0)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x12D33840)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D339E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackCDUpdateData_TypeDefinitionIndex = 64799;

	class ConfigAttackCDUpdateData : public ::System::Object
	{
	public:
		::System::Single AliveMonsterThreshold; // 0x10
		::System::Single UpdateSpeedMulti; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C45FD80)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C45F9E0)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1C45FA60)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x1C45FDE0)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45FF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigQuestBuddyPair_TypeDefinitionIndex = 54623;

	class ConfigQuestBuddyPair : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 RobotBuddyID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
		}
	};
}

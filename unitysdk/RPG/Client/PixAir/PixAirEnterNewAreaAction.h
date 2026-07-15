#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF9832A6EE2A67F_1;
class Class_1_D40936EF3BF54118_65;
namespace RPG::Client::PixAir { class PixAirGameSession; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_RECORDCHANGE_OFFSET UNITYSDK_OFFSET(0x19EC82D0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC8D80)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDBASICCHANGE_OFFSET UNITYSDK_OFFSET(0x19EC88B0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDSLOTNUMCHANGE_OFFSET UNITYSDK_OFFSET(0x19EC8D20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterNewAreaAction_TypeDefinitionIndex = 75249;

	class PixAirEnterNewAreaAction : public ::System::Object
	{
	public:
		::System::Int32 AddMaxHp; // 0x10
		::System::Int32 AddCoin; // 0x14
		::System::Int32 AddSlotNum; // 0x18
		::System::Int32 _TempSlotNum; // 0x1C
		::System::Int32 _TempCoin; // 0x20
		::System::Int32 _TempMaxHp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__CTOR_OFFSET))(this);
		}

		::System::Void RecordChange(::Class_1_D40936EF3BF54118_65* a1, ::RPG::Client::PixAir::PixAirGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_65*, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_RECORDCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordBasicChange(::Enum_3_63CDB6C405C8FD68 a1, ::Class_1_4AF9832A6EE2A67F_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63CDB6C405C8FD68, ::Class_1_4AF9832A6EE2A67F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDBASICCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordSlotNumChange(::Enum_3_63CDB6C405C8FD68 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63CDB6C405C8FD68, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDSLOTNUMCHANGE_OFFSET))(this, a1, a2);
		}
	};
}

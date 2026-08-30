#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1195;
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONBUFF_CREATETEMPBUFF_OFFSET UNITYSDK_OFFSET(0x1B2C2A60)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_BUFFROW_OFFSET UNITYSDK_OFFSET(0x1B2C2F10)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B2C3330)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B2C3260)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2C3310)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1B2C31B0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_REMAINUSEDTIME_OFFSET UNITYSDK_OFFSET(0x1B2C3190)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B2C3340)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2C3320)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_REMAINUSEDTIME_OFFSET UNITYSDK_OFFSET(0x1B2C31A0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SYNC_OFFSET UNITYSDK_OFFSET(0x1B2C2F80)
#define RPG_CLIENT_TREASUREDUNGEONBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C2B70)
#define RPG_CLIENT_TREASUREDUNGEONBUFF__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x1B2C2B80)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonBuff_TypeDefinitionIndex = 68179;

	class TreasureDungeonBuff : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::RPG::GameCore::TreasureDungeonBuffConfigRow* _BuffRow; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::UInt32 _RemainUsedTime_k__BackingField; // 0x28
		::System::UInt32 _BuffID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureDungeonBuff* CreateTempBuff(::System::UInt32 a1)
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_CREATETEMPBUFF_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_1195* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF__REFRESHTEXT_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonBuffConfigRow* get_BuffRow()
		{
			return ((::RPG::GameCore::TreasureDungeonBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_BUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_RemainUsedTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_REMAINUSEDTIME_OFFSET))(this);
		}

		::System::Void set_RemainUsedTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_REMAINUSEDTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_DESC_OFFSET))(this, a1);
		}
	};
}

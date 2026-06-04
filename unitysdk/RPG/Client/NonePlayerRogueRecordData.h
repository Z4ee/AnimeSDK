#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_884FF7AB0BB45750;

#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xC2E4B20)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xC2E4B30)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC2E4B40)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E4B90)

namespace RPG::Client
{
	inline static constexpr unsigned int NonePlayerRogueRecordData_TypeDefinitionIndex = 60081;

	class NonePlayerRogueRecordData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_884FF7AB0BB45750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_884FF7AB0BB45750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET))(this, a1);
		}
	};
}

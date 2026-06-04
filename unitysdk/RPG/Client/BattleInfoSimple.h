#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F9FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleInfoSimple_TypeDefinitionIndex = 57997;

	class BattleInfoSimple : public ::System::Object
	{
	public:
		::System::Boolean IsReconnect; // 0x10
		::System::UInt32 RetCode; // 0x14
		::System::UInt32 StageID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET))(this);
		}
	};
}

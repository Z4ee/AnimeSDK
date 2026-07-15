#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x174B6780)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleInfoSimple_TypeDefinitionIndex = 59263;

	class BattleInfoSimple : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::UInt32 RetCode; // 0x14
		::System::Boolean IsReconnect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET))(this);
		}
	};
}

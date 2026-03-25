#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x91B9A80)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleInfoSimple_TypeDefinitionIndex = 50348;

	class BattleInfoSimple : public ::System::Object
	{
	public:
		::System::UInt32 RetCode; // 0x10
		::System::UInt32 StageID; // 0x14
		::System::Boolean IsReconnect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEINFOSIMPLE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_0F76144571501212;

#define RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDB9C650)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB9C630)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBossRecordData_TypeDefinitionIndex = 64335;

	class PlayerBossRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET))(this, a1);
		}
	};
}

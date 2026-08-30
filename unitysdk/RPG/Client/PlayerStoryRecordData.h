#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_0F76144571501212;

#define RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDBB4580)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDBA30D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStoryRecordData_TypeDefinitionIndex = 64334;

	class PlayerStoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET))(this, a1);
		}
	};
}

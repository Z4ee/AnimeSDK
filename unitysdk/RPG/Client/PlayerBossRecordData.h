#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_4E16FFD583F3B1DC_1;

#define RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC495A90)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC495980)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xC4964F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBossRecordData_TypeDefinitionIndex = 60069;

	class PlayerBossRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4E16FFD583F3B1DC_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E16FFD583F3B1DC_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_4E16FFD583F3B1DC_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E16FFD583F3B1DC_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, a1);
		}
	};
}

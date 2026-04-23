#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_F5046AC8E8B0D181;

#define RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAD69FF0)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD69F80)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0xAD6A0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStoryRecordData_TypeDefinitionIndex = 59137;

	class PlayerStoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F5046AC8E8B0D181* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F5046AC8E8B0D181*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_F5046AC8E8B0D181* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F5046AC8E8B0D181*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}
	};
}

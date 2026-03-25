#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_F381659723E3F143;

#define RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FEF320)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE2FC0)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9FEF420)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStoryRecordData_TypeDefinitionIndex = 52185;

	class PlayerStoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F381659723E3F143* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_F381659723E3F143* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}
	};
}

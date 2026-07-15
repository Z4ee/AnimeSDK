#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_0F76144571501212;

#define RPG_CLIENT_PLAYERMEMORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19384FE0)
#define RPG_CLIENT_PLAYERMEMORYRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193812C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerMemoryRecordData_TypeDefinitionIndex = 61352;

	class PlayerMemoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMEMORYRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMEMORYRECORDDATA_SYNC_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EXPEDITIONBATTLEAVATARSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88ADA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleAvatarSaveData_TypeDefinitionIndex = 63900;

	class ExpeditionBattleAvatarSaveData : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Boolean IsTrial; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEAVATARSAVEDATA__CTOR_OFFSET))(this);
		}
	};
}

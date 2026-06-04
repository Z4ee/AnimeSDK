#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKTEAMLEADER_METHOD_3_0BCBE7970C1E9D18_OFFSET UNITYSDK_OFFSET(0x198AD830)
#define RPG_GAMECORE_LOCKTEAMLEADER_METHOD_3_11C9DEFD8B582618_OFFSET UNITYSDK_OFFSET(0x198AD8C0)
#define RPG_GAMECORE_LOCKTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x198AD890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockTeamLeader_TypeDefinitionIndex = 20388;

	class LockTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BCBE7970C1E9D18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER_METHOD_3_0BCBE7970C1E9D18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11C9DEFD8B582618(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER_METHOD_3_11C9DEFD8B582618_OFFSET))(a1, a2);
		}
	};
}

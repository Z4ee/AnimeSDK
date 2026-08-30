#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKTEAMLEADER_METHOD_3_446AE6F0DA9737AB_OFFSET UNITYSDK_OFFSET(0x1D61E610)
#define RPG_GAMECORE_UNLOCKTEAMLEADER_METHOD_3_FA2E22D51A839407_OFFSET UNITYSDK_OFFSET(0x1D61E5C0)
#define RPG_GAMECORE_UNLOCKTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61E600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockTeamLeader_TypeDefinitionIndex = 21360;

	class UnLockTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA2E22D51A839407(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER_METHOD_3_FA2E22D51A839407_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_446AE6F0DA9737AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER_METHOD_3_446AE6F0DA9737AB_OFFSET))(a1, a2);
		}
	};
}

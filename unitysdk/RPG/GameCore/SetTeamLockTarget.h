#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTEAMLOCKTARGET_METHOD_3_287B754919770E7D_OFFSET UNITYSDK_OFFSET(0x176E3B10)
#define RPG_GAMECORE_SETTEAMLOCKTARGET_METHOD_3_E140920797034C41_OFFSET UNITYSDK_OFFSET(0x176E3A90)
#define RPG_GAMECORE_SETTEAMLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x176E3AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamLockTarget_TypeDefinitionIndex = 20894;

	class SetTeamLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E140920797034C41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET_METHOD_3_E140920797034C41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_287B754919770E7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET_METHOD_3_287B754919770E7D_OFFSET))(a1, a2);
		}
	};
}

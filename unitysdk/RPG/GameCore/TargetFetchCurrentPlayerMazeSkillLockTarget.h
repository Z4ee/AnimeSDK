#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_545D5B89BDE5712C_OFFSET UNITYSDK_OFFSET(0x18EE3E40)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_E7099F9DDE3ADD6E_OFFSET UNITYSDK_OFFSET(0x18EDC800)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentPlayerMazeSkillLockTarget_TypeDefinitionIndex = 22872;

	class TargetFetchCurrentPlayerMazeSkillLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_545D5B89BDE5712C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_545D5B89BDE5712C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E7099F9DDE3ADD6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_E7099F9DDE3ADD6E_OFFSET))(a1, a2);
		}
	};
}

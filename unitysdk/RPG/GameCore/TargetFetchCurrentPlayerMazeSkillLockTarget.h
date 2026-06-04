#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_545D5B89BDE5712C_OFFSET UNITYSDK_OFFSET(0x19D0C6B0)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_704DF0AEE54E257E_OFFSET UNITYSDK_OFFSET(0x19D0C770)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_E7099F9DDE3ADD6E_OFFSET UNITYSDK_OFFSET(0x19CF8BB0)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_F0D68D6622D7315E_OFFSET UNITYSDK_OFFSET(0x19D05370)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF8B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentPlayerMazeSkillLockTarget_TypeDefinitionIndex = 22569;

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

		static ::System::Void Method_4_F0D68D6622D7315E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_F0D68D6622D7315E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_704DF0AEE54E257E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_704DF0AEE54E257E_OFFSET))(a1, a2);
		}
	};
}

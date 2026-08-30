#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_5AA90FE4F88E691F_OFFSET UNITYSDK_OFFSET(0x1D5AAA30)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_704DF0AEE54E257E_OFFSET UNITYSDK_OFFSET(0x1D5AAB30)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_DF884970194A25AB_OFFSET UNITYSDK_OFFSET(0x1D5AAB10)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_E7099F9DDE3ADD6E_OFFSET UNITYSDK_OFFSET(0x1D5AAAB0)
#define RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AAAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentPlayerMazeSkillLockTarget_TypeDefinitionIndex = 23612;

	class TargetFetchCurrentPlayerMazeSkillLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5AA90FE4F88E691F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_5AA90FE4F88E691F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E7099F9DDE3ADD6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_E7099F9DDE3ADD6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF884970194A25AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_DF884970194A25AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_704DF0AEE54E257E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTPLAYERMAZESKILLLOCKTARGET_METHOD_4_704DF0AEE54E257E_OFFSET))(a1, a2);
		}
	};
}

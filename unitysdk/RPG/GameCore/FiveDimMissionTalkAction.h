#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class SimpleTalkListConfig; }

#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_3_94BA3D35A8D82850_OFFSET UNITYSDK_OFFSET(0x1890C840)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_3_DA6A9A7F51324A61_OFFSET UNITYSDK_OFFSET(0x1890C7D0)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1890C820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissionTalkAction_TypeDefinitionIndex = 17822;

	class FiveDimMissionTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SimpleTalkListConfig* TalkListConfig; // 0x10
		::RPG::GameCore::LittleGameEvent* TalkFinishEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA6A9A7F51324A61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissionTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissionTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_3_DA6A9A7F51324A61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94BA3D35A8D82850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_3_94BA3D35A8D82850_OFFSET))(a1, a2);
		}
	};
}

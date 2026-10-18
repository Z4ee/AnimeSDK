#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class SimpleTalkListConfig; }

#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_4_392B811150F60905_OFFSET UNITYSDK_OFFSET(0x1D6C9740)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_4_E0C47C9BB578B51E_OFFSET UNITYSDK_OFFSET(0x1D6C9700)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissionTalkAction_TypeDefinitionIndex = 18759;

	class FiveDimMissionTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SimpleTalkListConfig* TalkListConfig; // 0x10
		::RPG::GameCore::LittleGameEvent* TalkFinishEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0C47C9BB578B51E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissionTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissionTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_4_E0C47C9BB578B51E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_392B811150F60905(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_METHOD_4_392B811150F60905_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_15D8E5668D71AFC9_OFFSET UNITYSDK_OFFSET(0x19E37A80)
#define RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_BE7554F214704A10_OFFSET UNITYSDK_OFFSET(0x19E37A00)
#define RPG_GAMECORE_UNLOADBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E37A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadBattleEvent_TypeDefinitionIndex = 21724;

	class UnloadBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE7554F214704A10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_BE7554F214704A10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_15D8E5668D71AFC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_15D8E5668D71AFC9_OFFSET))(a1, a2);
		}
	};
}

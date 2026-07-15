#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_15D8E5668D71AFC9_OFFSET UNITYSDK_OFFSET(0x1B884B30)
#define RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_E4019336B924F442_OFFSET UNITYSDK_OFFSET(0x1B884AF0)
#define RPG_GAMECORE_UNLOADBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B884B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadBattleEvent_TypeDefinitionIndex = 22151;

	class UnloadBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4019336B924F442(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_E4019336B924F442_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_15D8E5668D71AFC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_METHOD_3_15D8E5668D71AFC9_OFFSET))(a1, a2);
		}
	};
}

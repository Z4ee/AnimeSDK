#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStageBattleEventMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_METHOD_3_1CDF49FD239D8F47_OFFSET UNITYSDK_OFFSET(0x19C347B0)
#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_METHOD_3_73AFA0BA699222F2_OFFSET UNITYSDK_OFFSET(0x19C34610)
#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C346F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicStageBattleEvent_TypeDefinitionIndex = 21505;

	class SetDynamicStageBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStageBattleEventMode Mode; // 0x18
		::System::UInt32 EventID; // 0x1C
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Delay; // 0x28
		::RPG::GameCore::DynamicFloat* Duration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73AFA0BA699222F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStageBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStageBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_METHOD_3_73AFA0BA699222F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CDF49FD239D8F47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStageBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStageBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_METHOD_3_1CDF49FD239D8F47_OFFSET))(a1, a2);
		}
	};
}

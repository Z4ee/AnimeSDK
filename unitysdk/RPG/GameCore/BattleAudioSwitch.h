#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEAUDIOSWITCH_METHOD_3_6824922161D89E76_OFFSET UNITYSDK_OFFSET(0x1CE6ADE0)
#define RPG_GAMECORE_BATTLEAUDIOSWITCH_METHOD_3_F9119CD090E4192B_OFFSET UNITYSDK_OFFSET(0x1CE6AE20)
#define RPG_GAMECORE_BATTLEAUDIOSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6AE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAudioSwitch_TypeDefinitionIndex = 22706;

	class BattleAudioSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* SwitchName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6824922161D89E76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH_METHOD_3_6824922161D89E76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9119CD090E4192B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH_METHOD_3_F9119CD090E4192B_OFFSET))(a1, a2);
		}
	};
}

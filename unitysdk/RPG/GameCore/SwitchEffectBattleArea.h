#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_A1671127875F7698_OFFSET UNITYSDK_OFFSET(0x1B435730)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_D98F74A8D356C321_OFFSET UNITYSDK_OFFSET(0x1B4356F0)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B435720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchEffectBattleArea_TypeDefinitionIndex = 22485;

	class SwitchEffectBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EffectPath; // 0x18
		::RPG::GameCore::BattleAreaSwitchStatus SwitchStatus; // 0x20
		::System::String* PriorityKey; // 0x28
		::System::Boolean WaitFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D98F74A8D356C321(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchEffectBattleArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchEffectBattleArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_D98F74A8D356C321_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1671127875F7698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_A1671127875F7698_OFFSET))(a1, a2);
		}
	};
}

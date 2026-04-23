#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_733DB8F848D60550_OFFSET UNITYSDK_OFFSET(0x18EBA180)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_CB2E21A1E23717C1_OFFSET UNITYSDK_OFFSET(0x18EBA200)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBA1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchEffectBattleArea_TypeDefinitionIndex = 22295;

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

		static ::System::Void Method_3_733DB8F848D60550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchEffectBattleArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchEffectBattleArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_733DB8F848D60550_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB2E21A1E23717C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_METHOD_3_CB2E21A1E23717C1_OFFSET))(a1, a2);
		}
	};
}

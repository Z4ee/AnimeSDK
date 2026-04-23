#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_3F1B006580294301_OFFSET UNITYSDK_OFFSET(0x187C8E40)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_87F283E74A55ED7B_OFFSET UNITYSDK_OFFSET(0x187C8CF0)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187C8DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMusicVisualBeatEffectState_TypeDefinitionIndex = 21187;

	class ChangeMusicVisualBeatEffectState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 InStateID; // 0x18
		::System::Boolean IsImmediate; // 0x1C
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87F283E74A55ED7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_87F283E74A55ED7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F1B006580294301(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_3F1B006580294301_OFFSET))(a1, a2);
		}
	};
}

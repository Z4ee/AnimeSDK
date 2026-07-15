#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_3F1B006580294301_OFFSET UNITYSDK_OFFSET(0x1B71AEA0)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_6448A72B4E662F11_OFFSET UNITYSDK_OFFSET(0x1B71AE20)
#define RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71AE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMusicVisualBeatEffectState_TypeDefinitionIndex = 21499;

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

		static ::System::Void Method_3_6448A72B4E662F11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_6448A72B4E662F11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F1B006580294301(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMUSICVISUALBEATEFFECTSTATE_METHOD_3_3F1B006580294301_OFFSET))(a1, a2);
		}
	};
}

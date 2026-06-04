#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT_METHOD_3_85EC573208EA891E_OFFSET UNITYSDK_OFFSET(0x19E17A80)
#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT_METHOD_3_AD776BA9EB4B1D2A_OFFSET UNITYSDK_OFFSET(0x19E17B50)
#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E17B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMiniEmoEffect_TypeDefinitionIndex = 20642;

	class TriggerMiniEmoEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::RPG::GameCore::MiniEmoEffectOverride* OverrideData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85EC573208EA891E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMiniEmoEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMiniEmoEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT_METHOD_3_85EC573208EA891E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD776BA9EB4B1D2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT_METHOD_3_AD776BA9EB4B1D2A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorLayerEmotionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_METHOD_3_402AD514CD5729E0_OFFSET UNITYSDK_OFFSET(0x178BF200)
#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_METHOD_3_5B6DDBEE8AA406B3_OFFSET UNITYSDK_OFFSET(0x178BF290)
#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x178BF260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimatorLayerEmotion_TypeDefinitionIndex = 18907;

	class TriggerAnimatorLayerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimatorLayerEmotionType Type; // 0x20
		::RPG::GameCore::DynamicString* EmotionKey; // 0x28
		::System::Single TransitTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_402AD514CD5729E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_METHOD_3_402AD514CD5729E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B6DDBEE8AA406B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_METHOD_3_5B6DDBEE8AA406B3_OFFSET))(a1, a2);
		}
	};
}

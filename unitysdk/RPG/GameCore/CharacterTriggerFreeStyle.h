#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_868F6DDBBF7DB280_OFFSET UNITYSDK_OFFSET(0x187D8C30)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_AA045AC38F2454B5_OFFSET UNITYSDK_OFFSET(0x187D8B90)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x187D90A0)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x187D8BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterTriggerFreeStyle_TypeDefinitionIndex = 20758;

	class CharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x20
		::System::Boolean ForceStart; // 0x28
		::System::Boolean FastStartWhenNotForceStart; // 0x29
		::System::Boolean AutoExitToDefault; // 0x2A
		::System::Boolean DisableAnimEvent; // 0x2B
		::System::String* StoryAvatarID; // 0x30
		::System::Single NormalizedTimeWait; // 0x38
		::System::Single NormalizedTimeStart; // 0x3C
		::System::Single NormalizedTransitionDuration; // 0x40
		::System::UInt32 StoryMotionID; // 0x44
		::System::String* LayerName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA045AC38F2454B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_AA045AC38F2454B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_868F6DDBBF7DB280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_868F6DDBBF7DB280_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_CE18697B63E52504()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_METHOD_3_CE18697B63E52504_OFFSET))(this);
		}
	};
}

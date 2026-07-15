#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERSOUND_METHOD_3_A81E5CC7C0E93756_OFFSET UNITYSDK_OFFSET(0x1B05FCC0)
#define RPG_GAMECORE_TRIGGERSOUND_METHOD_3_D01DD0BC6B2C2E08_OFFSET UNITYSDK_OFFSET(0x1B05FE80)
#define RPG_GAMECORE_TRIGGERSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05FE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSound_TypeDefinitionIndex = 19824;

	class TriggerSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* UniqueName; // 0x30
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Boolean IsPropLodLoop; // 0x40
		::System::Boolean IsEnableMusicCue; // 0x41
		::System::Boolean IsEnableGetPlayingPosition; // 0x42
		::System::Single EventCD; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A81E5CC7C0E93756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND_METHOD_3_A81E5CC7C0E93756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D01DD0BC6B2C2E08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND_METHOD_3_D01DD0BC6B2C2E08_OFFSET))(a1, a2);
		}
	};
}

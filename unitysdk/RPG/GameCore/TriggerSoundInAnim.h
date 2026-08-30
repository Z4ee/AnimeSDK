#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERSOUNDINANIM_METHOD_3_E59908B870ED60D9_OFFSET UNITYSDK_OFFSET(0x1D299DA0)
#define RPG_GAMECORE_TRIGGERSOUNDINANIM_METHOD_3_E7C9A0568E289A38_OFFSET UNITYSDK_OFFSET(0x1D299D50)
#define RPG_GAMECORE_TRIGGERSOUNDINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D299D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSoundInAnim_TypeDefinitionIndex = 22131;

	class TriggerSoundInAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::System::String* StopOnAnimStateExit; // 0x28
		::System::String* StopOnFreeStyleClipExit; // 0x30
		::System::Single StopTransitionDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDINANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7C9A0568E289A38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundInAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundInAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDINANIM_METHOD_3_E7C9A0568E289A38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E59908B870ED60D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundInAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundInAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDINANIM_METHOD_3_E59908B870ED60D9_OFFSET))(a1, a2);
		}
	};
}

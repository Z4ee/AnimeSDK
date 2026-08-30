#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERHITVIBRATION_METHOD_3_415F4A3BA98B96A5_OFFSET UNITYSDK_OFFSET(0x1D28F560)
#define RPG_GAMECORE_TRIGGERHITVIBRATION_METHOD_3_F0E8856B32367FA4_OFFSET UNITYSDK_OFFSET(0x1D28F510)
#define RPG_GAMECORE_TRIGGERHITVIBRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28F550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerHitVibration_TypeDefinitionIndex = 22141;

	class TriggerHitVibration : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::System::String* StopOnAnimStateExit; // 0x28
		::System::String* StopOnFreeStyleClipExit; // 0x30
		::System::Single StopTransitionDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0E8856B32367FA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitVibration*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitVibration*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION_METHOD_3_F0E8856B32367FA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_415F4A3BA98B96A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitVibration* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitVibration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION_METHOD_3_415F4A3BA98B96A5_OFFSET))(a1, a2);
		}
	};
}

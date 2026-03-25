#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STEPONPOSECONFIG_METHOD_2_8F7F4D0072747428_OFFSET UNITYSDK_OFFSET(0x1777C1A0)
#define RPG_GAMECORE_STEPONPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1777C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StepOnPoseConfig_TypeDefinitionIndex = 15015;

	class StepOnPoseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StepOnPoseStateGroup; // 0x10
		::System::String* StepOnPoseStateA; // 0x18
		::System::String* StepOnPoseStateB; // 0x20
		::System::String* StepOnPoseStateAtoB; // 0x28
		::System::String* StepOnPoseStateBtoA; // 0x30
		::System::String* StepOnPoseRTPC; // 0x38
		::System::String* OnStepOnPoseEvent; // 0x40
		::System::String* LeaveStepOnPoseEvent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STEPONPOSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F7F4D0072747428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StepOnPoseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StepOnPoseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STEPONPOSECONFIG_METHOD_2_8F7F4D0072747428_OFFSET))(a1, a2);
		}
	};
}

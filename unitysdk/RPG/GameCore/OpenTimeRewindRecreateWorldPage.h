#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimeRewindRecreateWorldTaskTrigger; }

#define RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE_METHOD_3_4A9FE83658CEFC1D_OFFSET UNITYSDK_OFFSET(0x1D2FE640)
#define RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE_METHOD_3_7088B9E29EEF8881_OFFSET UNITYSDK_OFFSET(0x1D2FE6D0)
#define RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FE6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindRecreateWorldPage_TypeDefinitionIndex = 20425;

	class OpenTimeRewindRecreateWorldPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* AnimStateName; // 0x20
		::RPG::GameCore::DynamicString* AnimSpeedParamName; // 0x28
		::RPG::GameCore::DynamicFloat* AnimSpeedBtnRelease; // 0x30
		::RPG::GameCore::DynamicFloat* AnimSpeedBtnPress; // 0x38
		::RPG::GameCore::DynamicString* NormalAudioEvent; // 0x40
		::RPG::GameCore::DynamicString* AcceleratedAudioEvent; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBtnPress; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBtnRelease; // 0x58
		::Il2CppArray<::RPG::GameCore::TimeRewindRecreateWorldTaskTrigger*>* TaskTriggers; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A9FE83658CEFC1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE_METHOD_3_4A9FE83658CEFC1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7088B9E29EEF8881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDRECREATEWORLDPAGE_METHOD_3_7088B9E29EEF8881_OFFSET))(a1, a2);
		}
	};
}

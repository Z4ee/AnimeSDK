#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT_METHOD_3_3E8888F579D1FF43_OFFSET UNITYSDK_OFFSET(0x18A879F0)
#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT_METHOD_3_7DE3FCF333B06897_OFFSET UNITYSDK_OFFSET(0x18A87B80)
#define RPG_GAMECORE_MANUALTRIGGERANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A87A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManualTriggerAnimEvent_TypeDefinitionIndex = 21793;

	class ManualTriggerAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimStateName; // 0x20
		::RPG::GameCore::DynamicFloat* AnimClipLength; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::System::Boolean SyncEffectTime; // 0x40
		::System::Boolean AdvanceOneFrame; // 0x41
		::RPG::GameCore::DynamicFloat* ExtraAdvanceTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E8888F579D1FF43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManualTriggerAnimEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManualTriggerAnimEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT_METHOD_3_3E8888F579D1FF43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7DE3FCF333B06897(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManualTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManualTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANUALTRIGGERANIMEVENT_METHOD_3_7DE3FCF333B06897_OFFSET))(a1, a2);
		}
	};
}

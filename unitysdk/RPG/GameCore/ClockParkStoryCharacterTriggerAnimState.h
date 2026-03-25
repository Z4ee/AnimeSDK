#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_METHOD_3_5FF0111E1C51CE68_OFFSET UNITYSDK_OFFSET(0x170BFDC0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_METHOD_3_7725889BB4B82295_OFFSET UNITYSDK_OFFSET(0x170BFE40)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170BFE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryCharacterTriggerAnimState_TypeDefinitionIndex = 19274;

	class ClockParkStoryCharacterTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::ClockParkStoryAnimState* AnimState; // 0x20
		::System::String* WaitAnimName; // 0x28
		::System::Single WaitAnimNormalized; // 0x30
		::System::String* WaittedTriggerString; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FF0111E1C51CE68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_METHOD_3_5FF0111E1C51CE68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7725889BB4B82295(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_METHOD_3_7725889BB4B82295_OFFSET))(a1, a2);
		}
	};
}

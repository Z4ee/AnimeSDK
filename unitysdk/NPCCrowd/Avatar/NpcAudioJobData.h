#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCAUDIOJOBDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xE02A450)
#define NPCCROWD_AVATAR_NPCAUDIOJOBDATA_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0xE02A4E0)
#define NPCCROWD_AVATAR_NPCAUDIOJOBDATA_RESET_OFFSET UNITYSDK_OFFSET(0xE02A660)
#define NPCCROWD_AVATAR_NPCAUDIOJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE02A6C0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NpcAudioJobData_TypeDefinitionIndex = 48334;

	class NpcAudioJobData : public ::System::Object
	{
	public:
		::System::String* TriggerEvent; // 0x10
		::UnityEngine::GameObject* AudioEmitter; // 0x18
		::Class_3_F2DAD7F45F518868* NpcComp; // 0x20
		::System::String* SoundActionKey; // 0x28
		::UnityEngine::Vector3 EmitterPosition; // 0x30
		::System::UInt32 EntityId; // 0x3C
		::System::Boolean Enabled; // 0x40
		::System::Boolean ShouldTriggerAudio; // 0x41
		::System::Boolean AudioEnableTrigger; // 0x42
		::System::Single AudioLastTriggerTime; // 0x44
		::UnityEngine::Vector3 Velocity; // 0x48
		::System::Single TriggerCooldown; // 0x54
		::System::Single MaxSpeed; // 0x58
		::System::Single TriggerDistanceSqr; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAUDIOJOBDATA__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Avatar::NpcAudioJobData* Allocate()
		{
			return ((::NPCCrowd::Avatar::NpcAudioJobData*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAUDIOJOBDATA_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::NPCCrowd::Avatar::NpcAudioJobData* jobData)
		{
			return ((::System::Void(*)(::NPCCrowd::Avatar::NpcAudioJobData*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAUDIOJOBDATA_DEALLOCATE_OFFSET))(jobData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAUDIOJOBDATA_RESET_OFFSET))(this);
		}
	};
}

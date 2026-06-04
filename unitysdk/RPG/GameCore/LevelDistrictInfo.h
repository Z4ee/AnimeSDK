#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DistrictSoundUsage.h"
#include "unitysdk/RPG/GameCore/DistrictType.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAreaSoundConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDISTRICTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19871F10)
#define RPG_GAMECORE_LEVELDISTRICTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19871E90)
#define RPG_GAMECORE_LEVELDISTRICTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19871EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDistrictInfo_TypeDefinitionIndex = 16416;

	class LevelDistrictInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Single RotX; // 0x38
		::System::Single RotZ; // 0x3C
		::RPG::MVector3 Scale; // 0x40
		::RPG::GameCore::LevelTriggerInfo* Trigger; // 0x50
		::System::Boolean LoadOnInitial; // 0x58
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* OnEnterAudioState; // 0x60
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* OnExitAudioState; // 0x68
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* OnEnterRTPC; // 0x70
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* OnExitRTPC; // 0x78
		::RPG::GameCore::DistrictAreaSoundConfig* OnEnterAreaSound; // 0x80
		::RPG::GameCore::DistrictAreaSoundConfig* TransitionSound; // 0x88
		::RPG::GameCore::DistrictSoundUsage SoundUsage; // 0x90
		::RPG::GameCore::DistrictType DistrictType; // 0x94
		::System::Boolean CanTriggerByFakeAvatar; // 0x98
		::System::String* RoomAuxBus; // 0xA0
		::System::String* BGMEmotion; // 0xA8
		::System::Boolean InRoomEmitter; // 0xB0
		::System::Single NPCCrowdRadius; // 0xB4
		::System::String* LevelGraph; // 0xB8
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISTRICTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDistrictInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDistrictInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISTRICTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDistrictInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDistrictInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDISTRICTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}

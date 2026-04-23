#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBATTLEAREAINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A3D300)
#define RPG_GAMECORE_LEVELBATTLEAREAINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3D2C0)
#define RPG_GAMECORE_LEVELBATTLEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3D2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleAreaInfo_TypeDefinitionIndex = 16386;

	class LevelBattleAreaInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* EnviroProfile; // 0x38
		::Il2CppArray<::System::String*>* Tags; // 0x40
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x48
		::System::String* AnchorPrefabPath; // 0x50
		::Il2CppArray<::System::String*>* AudioEnterEvent; // 0x58
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* AudioState; // 0x60
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* AudioRTPC; // 0x68
		::System::UInt32 PropsGroupID; // 0x70
		::Il2CppArray<::System::UInt32>* AudienceGroupIDList; // 0x78
		::Il2CppArray<::System::UInt32>* PrefetchMainMissionList; // 0x80
		::Il2CppArray<::System::UInt32>* PrefetchSubMissionList; // 0x88
		::System::String* OverrideBGMLow; // 0x90
		::System::String* OverrideBGMHigh; // 0x98
		::System::UInt32 UnifiedBattleAreaID; // 0xA0
		::System::Boolean IsOverrideUnifiedConfigAudio; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEAREAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelBattleAreaInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelBattleAreaInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEAREAINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelBattleAreaInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEAREAINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}

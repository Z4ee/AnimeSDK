#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class EntityVisiableInfo; }
namespace RPG::GameCore { class PerformanceCaptureNPC; }
namespace RPG::GameCore { class PerformanceOverrideCharacterOutfit; }
namespace RPG::GameCore { class PerformancePropVisiableInfo; }
namespace RPG::GameCore { class StageItemAlias; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_2185171878718EA4_OFFSET UNITYSDK_OFFSET(0x18A57FA0)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_928E03256D5FF253_OFFSET UNITYSDK_OFFSET(0x18A574B0)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_AE01D50A68947F72_OFFSET UNITYSDK_OFFSET(0x18A57570)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x18A57FB0)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A57520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPerformanceInitialize_TypeDefinitionIndex = 20706;

	class LevelPerformanceInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::String* AreaPrefabPath; // 0x20
		::System::Boolean IsLocal; // 0x28
		::System::Boolean MuteSFX; // 0x29
		::Il2CppArray<::RPG::GameCore::CreateCharacter*>* CreateCharacterList; // 0x30
		::Il2CppArray<::RPG::GameCore::PerformanceCaptureNPC*>* CaptureNPCList; // 0x38
		::System::Boolean HideNPC; // 0x40
		::Il2CppArray<::RPG::GameCore::EntityVisiableInfo*>* EntityVisiableList; // 0x48
		::System::Boolean HideMunicipalCrowd; // 0x50
		::System::Boolean HideMunicipalPedestrian; // 0x51
		::System::Boolean HideMunicipalAudience; // 0x52
		::System::Boolean HideMunicipalOther; // 0x53
		::System::Boolean HideMonster; // 0x54
		::System::Boolean HideProp; // 0x55
		::Il2CppArray<::RPG::GameCore::PerformancePropVisiableInfo*>* PropVisiableList; // 0x58
		::System::Boolean HideLocalPlayer; // 0x60
		::System::String* FirstCameraAnchor; // 0x68
		::System::Boolean UseNewStreamingSourceType; // 0x70
		::Il2CppArray<::System::String*>* StreamingSourcesInBlackMask; // 0x78
		::Il2CppArray<::System::String*>* StreamingSourcesAfterBlackMask; // 0x80
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* MarkStreamingItems; // 0x88
		::System::Boolean ResetEnvironment; // 0x90
		::System::Boolean ResetMonster; // 0x91
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* AudioStateList; // 0x98
		::Il2CppArray<::RPG::GameCore::PerformanceOverrideCharacterOutfit*>* OverrideCharacterOutfits; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoadBeginImmediately; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_928E03256D5FF253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPerformanceInitialize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPerformanceInitialize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_928E03256D5FF253_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE01D50A68947F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_AE01D50A68947F72_OFFSET))(a1, a2);
		}

		::System::Void Method_3_2185171878718EA4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_2185171878718EA4_OFFSET))(this);
		}

		::System::Void Method_3_C91E5170F9E36EED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_METHOD_3_C91E5170F9E36EED_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class DynamicLoadBlockData; }
namespace System { class String; }

#define RPG_GAMECORE_UNIFIEDBATTLEAREACONFIG_METHOD_2_FD408B355B224B38_OFFSET UNITYSDK_OFFSET(0x1D61E620)
#define RPG_GAMECORE_UNIFIEDBATTLEAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnifiedBattleAreaConfig_TypeDefinitionIndex = 17227;

	class UnifiedBattleAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::System::Single RotationY; // 0x1C
		::System::String* DefaultEnviroProfile; // 0x20
		::Il2CppArray<::System::String*>* AudioEnterEvent; // 0x28
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* AudioState; // 0x30
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* AudioRTPC; // 0x38
		::System::String* OverrideBGMHigh; // 0x40
		::System::String* OverrideBGMLow; // 0x48
		::Il2CppArray<::RPG::GameCore::DynamicLoadBlockData*>* BlockDataList; // 0x50
		::RPG::GameCore::EnviromentControlPriority EnvironmentPriority; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIFIEDBATTLEAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD408B355B224B38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnifiedBattleAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnifiedBattleAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIFIEDBATTLEAREACONFIG_METHOD_2_FD408B355B224B38_OFFSET))(a1, a2);
		}
	};
}

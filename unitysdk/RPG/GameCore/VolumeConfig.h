#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }

#define RPG_GAMECORE_VOLUMECONFIG_METHOD_2_CC7B259483DD5D90_OFFSET UNITYSDK_OFFSET(0x1B89F420)
#define RPG_GAMECORE_VOLUMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89F550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeConfig_TypeDefinitionIndex = 18396;

	class VolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2WithTAData*>* StageVolumeConfigListV2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CC7B259483DD5D90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VolumeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VolumeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIG_METHOD_2_CC7B259483DD5D90_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class SubStageMetaData; }

#define RPG_GAMECORE_STAGECONFIG_METHOD_3_17154E419AB61D9B_OFFSET UNITYSDK_OFFSET(0x18E8ACD0)
#define RPG_GAMECORE_STAGECONFIG_METHOD_3_FEB8F8BF0CE6CB7A_OFFSET UNITYSDK_OFFSET(0x18E89610)
#define RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E89600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageConfig_TypeDefinitionIndex = 18160;

	class StageConfig : public ::RPG::GameCore::StageBaseConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubStageMetaData*>* SubStages; // 0xB0
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0xB8
		::System::Boolean PVSEnableRegionFilter; // 0xC0
		::System::Boolean EnableNormDistanceLodTemplate; // 0xC1
		::System::Boolean EnableAudioGroundVoxel; // 0xC2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17154E419AB61D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_17154E419AB61D9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEB8F8BF0CE6CB7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_FEB8F8BF0CE6CB7A_OFFSET))(a1, a2);
		}
	};
}

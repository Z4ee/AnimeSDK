#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class SubStageMetaData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGECONFIG_METHOD_3_1D8D7CF0E0C08194_OFFSET UNITYSDK_OFFSET(0x1D0BE610)
#define RPG_GAMECORE_STAGECONFIG_METHOD_3_91FDC1F48573E730_OFFSET UNITYSDK_OFFSET(0x1D0BE650)
#define RPG_GAMECORE_STAGECONFIG_METHOD_3_AA3609C16455CCFE_OFFSET UNITYSDK_OFFSET(0x1D0BB440)
#define RPG_GAMECORE_STAGECONFIG_METHOD_3_DC865226D321D99E_OFFSET UNITYSDK_OFFSET(0x1D0BD8A0)
#define RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BB430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageConfig_TypeDefinitionIndex = 18913;

	class StageConfig : public ::RPG::GameCore::StageBaseConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubStageMetaData*>* SubStages; // 0xC0
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0xC8
		::System::Boolean PVSEnableRegionFilter; // 0xD0
		::System::Boolean EnableNormDistanceLodTemplate; // 0xD1
		::System::Boolean EnableAudioGroundVoxel; // 0xD2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D8D7CF0E0C08194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_1D8D7CF0E0C08194_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA3609C16455CCFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_AA3609C16455CCFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC865226D321D99E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_DC865226D321D99E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91FDC1F48573E730(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_3_91FDC1F48573E730_OFFSET))(a1, a2);
		}
	};
}

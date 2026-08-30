#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PassageConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace RPG::GameCore { class VolumeDistanceMap; }

#define RPG_GAMECORE_VOLUMECONFIGV2_METHOD_2_F1B15B0E5018F52C_OFFSET UNITYSDK_OFFSET(0x1D69DBA0)
#define RPG_GAMECORE_VOLUMECONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69DD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeConfigV2_TypeDefinitionIndex = 18921;

	class VolumeConfigV2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* StageVolumeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::PassageConfig*>* Passages; // 0x18
		::RPG::GameCore::VolumeDistanceMap* DistanceMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIGV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F1B15B0E5018F52C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VolumeConfigV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VolumeConfigV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIGV2_METHOD_2_F1B15B0E5018F52C_OFFSET))(a1, a2);
		}
	};
}

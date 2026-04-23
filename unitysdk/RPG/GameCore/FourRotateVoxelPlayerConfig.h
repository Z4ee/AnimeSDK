#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPlayerActionConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerEffectConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_METHOD_2_23A1B1415ECFD4BF_OFFSET UNITYSDK_OFFSET(0x1892E1C0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18930030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayerConfig_TypeDefinitionIndex = 15855;

	class FourRotateVoxelPlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FourRotateVoxelPlayerEffectConfig* EffectConfig; // 0x10
		::RPG::GameCore::FiveDimPlayerActionConfig* InteractConfig; // 0x18
		::RPG::GameCore::FiveDimPlayerActionConfig* DeadActions; // 0x20
		::RPG::GameCore::FiveDimPlayerActionConfig* ResetActions; // 0x28
		::RPG::GameCore::FiveDimPlayerActionConfig* MediumLandActions; // 0x30
		::RPG::GameCore::FiveDimPlayerActionConfig* HeavyLandActions; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23A1B1415ECFD4BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_METHOD_2_23A1B1415ECFD4BF_OFFSET))(a1, a2);
		}
	};
}

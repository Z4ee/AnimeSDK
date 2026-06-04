#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPlayerEffectConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_METHOD_2_1DAC972606450C06_OFFSET UNITYSDK_OFFSET(0x1976B250)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976B300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayerEffectConfig_TypeDefinitionIndex = 15908;

	class FourRotateVoxelPlayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimPlayerEffectConfig* FiveDimEffectConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1DAC972606450C06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPlayerEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPlayerEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_METHOD_2_1DAC972606450C06_OFFSET))(a1, a2);
		}
	};
}

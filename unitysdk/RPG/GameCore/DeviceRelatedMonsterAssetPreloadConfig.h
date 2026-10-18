#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_2D464A3B87E7D8AE_OFFSET UNITYSDK_OFFSET(0x1D5D1E70)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_4FCE79884906B4D4_OFFSET UNITYSDK_OFFSET(0x1D5D2180)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedMonsterAssetPreloadConfig_TypeDefinitionIndex = 16475;

	class DeviceRelatedMonsterAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::MonsterAssetPreloadConfig* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4FCE79884906B4D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_4FCE79884906B4D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D464A3B87E7D8AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_2D464A3B87E7D8AE_OFFSET))(a1, a2);
		}
	};
}

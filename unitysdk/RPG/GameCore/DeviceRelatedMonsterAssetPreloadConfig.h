#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_4DE8859558D61ACC_OFFSET UNITYSDK_OFFSET(0x171571F0)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_88A3123F0C84C86E_OFFSET UNITYSDK_OFFSET(0x171574F0)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171571E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedMonsterAssetPreloadConfig_TypeDefinitionIndex = 15083;

	class DeviceRelatedMonsterAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::MonsterAssetPreloadConfig* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88A3123F0C84C86E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_88A3123F0C84C86E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DE8859558D61ACC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_METHOD_3_4DE8859558D61ACC_OFFSET))(a1, a2);
		}
	};
}

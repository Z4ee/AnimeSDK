#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_METHOD_3_DA6D5D3DD89E4227_OFFSET UNITYSDK_OFFSET(0x18B55A50)
#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_METHOD_3_E14F076DE95C2190_OFFSET UNITYSDK_OFFSET(0x18B55A10)
#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B55A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterAssetPreloadConfig_TypeDefinitionIndex = 15589;

	class MonsterAssetPreloadConfig : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Boolean PreloadEffectPaths; // 0x18
		::System::Boolean PreloadOptionalEffectPaths; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E14F076DE95C2190(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_METHOD_3_E14F076DE95C2190_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA6D5D3DD89E4227(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_METHOD_3_DA6D5D3DD89E4227_OFFSET))(a1, a2);
		}
	};
}

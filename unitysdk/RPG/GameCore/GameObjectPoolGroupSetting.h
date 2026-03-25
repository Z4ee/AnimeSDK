#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_METHOD_2_F71A2711C8F52DFC_OFFSET UNITYSDK_OFFSET(0x17241980)
#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17241D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolGroupSetting_TypeDefinitionIndex = 15070;

	class GameObjectPoolGroupSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 AutoReleaseInstanceCount; // 0x10
		::System::Int32 BattleAutoReleaseInstanceCount; // 0x14
		::System::Boolean AutoReleaseCacheInstance; // 0x18
		::System::Int32 PoolAutoReleaseCacheInstanceThresh; // 0x1C
		::System::Single PoolAutoReleaseCacheInstanceRatio; // 0x20
		::System::Int32 BattlePoolAutoReleaseCacheInstanceThresh; // 0x24
		::System::Single BattlePoolAutoReleaseCacheInstanceRatio; // 0x28
		::System::Int32 DisablePreloadCache; // 0x2C
		::System::Int32 UnusedPoolCacheCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F71A2711C8F52DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameObjectPoolGroupSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameObjectPoolGroupSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_METHOD_2_F71A2711C8F52DFC_OFFSET))(a1, a2);
		}
	};
}

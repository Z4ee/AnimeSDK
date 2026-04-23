#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameObjectPoolSetting; }

#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_1DE617CE8B142C12_OFFSET UNITYSDK_OFFSET(0x1885E0E0)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_E93DF3D109B71934_OFFSET UNITYSDK_OFFSET(0x1885E710)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1885E0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedGameObjectPoolConfig_TypeDefinitionIndex = 15592;

	class DeviceRelatedGameObjectPoolConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::GameObjectPoolSetting* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E93DF3D109B71934(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_E93DF3D109B71934_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DE617CE8B142C12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_1DE617CE8B142C12_OFFSET))(a1, a2);
		}
	};
}

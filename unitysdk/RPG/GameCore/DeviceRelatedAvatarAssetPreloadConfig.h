#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_4DDD68D2A31FD705_OFFSET UNITYSDK_OFFSET(0x1885D300)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_874B1EF7036DF083_OFFSET UNITYSDK_OFFSET(0x1885D360)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1885D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedAvatarAssetPreloadConfig_TypeDefinitionIndex = 15590;

	class DeviceRelatedAvatarAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::AvatarAssetPreloadConfig* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DDD68D2A31FD705(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_4DDD68D2A31FD705_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_874B1EF7036DF083(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_874B1EF7036DF083_OFFSET))(a1, a2);
		}
	};
}

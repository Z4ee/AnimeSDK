#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_2814C3349C740B13_OFFSET UNITYSDK_OFFSET(0x1D022280)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_F7D6345E5FDDBAC5_OFFSET UNITYSDK_OFFSET(0x1D0222E0)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0222D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedAvatarAssetPreloadConfig_TypeDefinitionIndex = 16301;

	class DeviceRelatedAvatarAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::AvatarAssetPreloadConfig* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2814C3349C740B13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_2814C3349C740B13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7D6345E5FDDBAC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_METHOD_3_F7D6345E5FDDBAC5_OFFSET))(a1, a2);
		}
	};
}

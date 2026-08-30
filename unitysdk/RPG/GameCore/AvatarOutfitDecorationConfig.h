#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_METHOD_2_5F28DB4679A42A92_OFFSET UNITYSDK_OFFSET(0x1CE42260)
#define RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE42310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitDecorationConfig_TypeDefinitionIndex = 16414;

	class AvatarOutfitDecorationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabConfigPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F28DB4679A42A92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarOutfitDecorationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarOutfitDecorationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_METHOD_2_5F28DB4679A42A92_OFFSET))(a1, a2);
		}
	};
}

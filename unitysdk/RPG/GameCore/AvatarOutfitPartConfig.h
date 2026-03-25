#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG_METHOD_2_875EF3FB08E71C90_OFFSET UNITYSDK_OFFSET(0x16FA2230)
#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA2340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitPartConfig_TypeDefinitionIndex = 15193;

	class AvatarOutfitPartConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshConfigPath; // 0x10
		::System::String* MaterialKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_875EF3FB08E71C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarOutfitPartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarOutfitPartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG_METHOD_2_875EF3FB08E71C90_OFFSET))(a1, a2);
		}
	};
}

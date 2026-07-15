#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG_METHOD_2_E97EB58015959C55_OFFSET UNITYSDK_OFFSET(0x1A07C050)
#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07C1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitPartConfig_TypeDefinitionIndex = 15937;

	class AvatarOutfitPartConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshConfigPath; // 0x10
		::System::String* MaterialKey; // 0x18
		::System::Boolean IsStatic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E97EB58015959C55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarOutfitPartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarOutfitPartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG_METHOD_2_E97EB58015959C55_OFFSET))(a1, a2);
		}
	};
}

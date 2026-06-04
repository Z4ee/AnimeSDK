#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace RPG::GameCore { class AvatarOutfitPartConfig; }

#define RPG_GAMECORE_AVATAROUTFITMODELCONFIG_METHOD_2_E068529EE4FD8635_OFFSET UNITYSDK_OFFSET(0x1949C0C0)
#define RPG_GAMECORE_AVATAROUTFITMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1949C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitModelConfig_TypeDefinitionIndex = 15762;

	class AvatarOutfitModelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarOutfitPartConfig*>* PartConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarOutfitDecorationConfig*>* DecorationConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITMODELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E068529EE4FD8635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarOutfitModelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarOutfitModelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITMODELCONFIG_METHOD_2_E068529EE4FD8635_OFFSET))(a1, a2);
		}
	};
}

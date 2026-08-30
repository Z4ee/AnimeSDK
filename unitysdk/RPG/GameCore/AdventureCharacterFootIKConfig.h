#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1CBB85C0)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_METHOD_2_2EF6BEEE437C6169_OFFSET UNITYSDK_OFFSET(0x1CBB7970)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB85F0)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB85B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFootIKConfig_TypeDefinitionIndex = 17239;

	class AdventureCharacterFootIKConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::AdventureCharacterFootIKConfig** StaticGet__Default_k__BackingField()
		{
			return (::RPG::GameCore::AdventureCharacterFootIKConfig**)Il2CppClass::FromTypeDefinitionIndex(AdventureCharacterFootIKConfig_TypeDefinitionIndex)->GetStaticField(0x49660);
		}
		::System::Single BlendInTime; // 0x10
		::System::Single BlendOutTime; // 0x14
		::System::Single FootHeightOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_2EF6BEEE437C6169(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterFootIKConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterFootIKConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_METHOD_2_2EF6BEEE437C6169_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AdventureCharacterFootIKConfig* get_Default()
		{
			return ((::RPG::GameCore::AdventureCharacterFootIKConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_GET_DEFAULT_OFFSET))();
		}
	};
}

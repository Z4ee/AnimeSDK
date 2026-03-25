#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_METHOD_3_56B2DF77F703F129_OFFSET UNITYSDK_OFFSET(0x1706F570)
#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_METHOD_3_7D6E2CEB1A3DDF54_OFFSET UNITYSDK_OFFSET(0x1706F610)
#define RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1706F600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNavigationComponentConfig_TypeDefinitionIndex = 15168;

	class CharacterNavigationComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56B2DF77F703F129(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigationComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigationComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_METHOD_3_56B2DF77F703F129_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D6E2CEB1A3DDF54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigationComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigationComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATIONCOMPONENTCONFIG_METHOD_3_7D6E2CEB1A3DDF54_OFFSET))(a1, a2);
		}
	};
}

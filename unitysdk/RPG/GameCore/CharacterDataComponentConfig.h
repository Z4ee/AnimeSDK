#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_METHOD_3_9165BF0F2D71E302_OFFSET UNITYSDK_OFFSET(0x1CF95620)
#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_METHOD_3_E6FA44FF6DB9BF83_OFFSET UNITYSDK_OFFSET(0x1CF95580)
#define RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF95610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDataComponentConfig_TypeDefinitionIndex = 16391;

	class CharacterDataComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6FA44FF6DB9BF83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterDataComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterDataComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_METHOD_3_E6FA44FF6DB9BF83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9165BF0F2D71E302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterDataComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterDataComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENTCONFIG_METHOD_3_9165BF0F2D71E302_OFFSET))(a1, a2);
		}
	};
}

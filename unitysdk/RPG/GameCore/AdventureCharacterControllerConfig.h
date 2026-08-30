#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_METHOD_3_5E742A1533627529_OFFSET UNITYSDK_OFFSET(0x1CBB8180)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_METHOD_3_852F7788569C6354_OFFSET UNITYSDK_OFFSET(0x1CBB80E0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterControllerConfig_TypeDefinitionIndex = 16389;

	class AdventureCharacterControllerConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_852F7788569C6354(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterControllerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterControllerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_METHOD_3_852F7788569C6354_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E742A1533627529(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterControllerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterControllerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLERCONFIG_METHOD_3_5E742A1533627529_OFFSET))(a1, a2);
		}
	};
}

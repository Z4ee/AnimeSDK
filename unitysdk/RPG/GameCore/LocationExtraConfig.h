#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_2BD72B376B7006C1_OFFSET UNITYSDK_OFFSET(0x198AA920)
#define RPG_GAMECORE_LOCATIONEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198AAA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocationExtraConfig_TypeDefinitionIndex = 21261;

	class LocationExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LocalZOffsetFixed; // 0x10
		::System::Single CentralXOffset; // 0x14
		::System::Single YOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2BD72B376B7006C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LocationExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocationExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_2BD72B376B7006C1_OFFSET))(a1, a2);
		}
	};
}

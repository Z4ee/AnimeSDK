#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_02101ABD10986598_OFFSET UNITYSDK_OFFSET(0x17369780)
#define RPG_GAMECORE_LOCATIONEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17369900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocationExtraConfig_TypeDefinitionIndex = 20674;

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

		static ::System::Void Method_2_02101ABD10986598(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LocationExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocationExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_02101ABD10986598_OFFSET))(a1, a2);
		}
	};
}

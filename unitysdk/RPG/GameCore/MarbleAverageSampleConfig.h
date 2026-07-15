#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_METHOD_2_9EFF187677222B01_OFFSET UNITYSDK_OFFSET(0x1BD12EC0)
#define RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD13030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAverageSampleConfig_TypeDefinitionIndex = 16234;

	class MarbleAverageSampleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 SampleCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9EFF187677222B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAverageSampleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAverageSampleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_METHOD_2_9EFF187677222B01_OFFSET))(a1, a2);
		}
	};
}

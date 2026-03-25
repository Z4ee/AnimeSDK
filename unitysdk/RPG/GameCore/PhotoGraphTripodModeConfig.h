#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_METHOD_2_60349FCC21256537_OFFSET UNITYSDK_OFFSET(0x174AD5B0)
#define RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AD710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTripodModeConfig_TypeDefinitionIndex = 19824;

	class PhotoGraphTripodModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ColliderRadius; // 0x10
		::System::Boolean UseFakePlayer; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_60349FCC21256537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphTripodModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphTripodModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_METHOD_2_60349FCC21256537_OFFSET))(a1, a2);
		}
	};
}

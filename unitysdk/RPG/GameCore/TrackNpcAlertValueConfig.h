#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_METHOD_2_6BFCFEF2B832669A_OFFSET UNITYSDK_OFFSET(0x1D5D6A90)
#define RPG_GAMECORE_TRACKNPCALERTVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcAlertValueConfig_TypeDefinitionIndex = 21931;

	class TrackNpcAlertValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CrouchDelta; // 0x10
		::System::Single StandDelta; // 0x14
		::System::Single WalkDelta; // 0x18
		::System::Single RunDelta; // 0x1C
		::System::Single FastRunDelta; // 0x20
		::System::Single RunValueStep; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BFCFEF2B832669A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcAlertValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcAlertValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_METHOD_2_6BFCFEF2B832669A_OFFSET))(a1, a2);
		}
	};
}

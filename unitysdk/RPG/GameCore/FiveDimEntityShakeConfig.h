#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_METHOD_2_00D00ACC9DA8B1A7_OFFSET UNITYSDK_OFFSET(0x1BA91230)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityShakeConfig_TypeDefinitionIndex = 18016;

	class FiveDimEntityShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Single Frequency; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00D00ACC9DA8B1A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityShakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityShakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_METHOD_2_00D00ACC9DA8B1A7_OFFSET))(a1, a2);
		}
	};
}

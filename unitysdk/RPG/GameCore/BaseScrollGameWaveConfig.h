#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG_METHOD_2_3CFAE03D7B322F96_OFFSET UNITYSDK_OFFSET(0x1A3E1C60)
#define RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG_METHOD_2_989A625BC0D54491_OFFSET UNITYSDK_OFFSET(0x1A3E1E30)
#define RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E1E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseScrollGameWaveConfig_TypeDefinitionIndex = 18074;

	class BaseScrollGameWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MiddleBlockCout; // 0x10
		::System::Single StartScrollSpeed; // 0x14
		::System::Single EndScrollSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CFAE03D7B322F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG_METHOD_2_3CFAE03D7B322F96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_989A625BC0D54491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameWaveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEWAVECONFIG_METHOD_2_989A625BC0D54491_OFFSET))(a1, a2);
		}
	};
}

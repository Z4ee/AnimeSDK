#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_METHOD_3_85D7530ADC4F48D2_OFFSET UNITYSDK_OFFSET(0x1DD6CFE0)
#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_METHOD_3_DCCC1C3CFBE818AB_OFFSET UNITYSDK_OFFSET(0x1DD6CFA0)
#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavMapIconConfig_TypeDefinitionIndex = 18621;

	class LittleGameNavMapIconConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMapIcon; // 0x10
		::System::UInt32 IconID; // 0x14
		::System::UInt32 MapInfoID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCCC1C3CFBE818AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavMapIconConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavMapIconConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_METHOD_3_DCCC1C3CFBE818AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85D7530ADC4F48D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavMapIconConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_METHOD_3_85D7530ADC4F48D2_OFFSET))(a1, a2);
		}
	};
}

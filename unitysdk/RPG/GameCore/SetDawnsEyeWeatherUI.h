#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DawnsEyeWeatherUIBaseConfig; }

#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0744C6A968A6CF90_OFFSET UNITYSDK_OFFSET(0x176B1B20)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0E824203D360CF49_OFFSET UNITYSDK_OFFSET(0x176B1AA0)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176B1AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDawnsEyeWeatherUI_TypeDefinitionIndex = 20988;

	class SetDawnsEyeWeatherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DawnsEyeWeatherUIBaseConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E824203D360CF49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDawnsEyeWeatherUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0E824203D360CF49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0744C6A968A6CF90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0744C6A968A6CF90_OFFSET))(a1, a2);
		}
	};
}

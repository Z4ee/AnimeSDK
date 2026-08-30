#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DawnsEyeWeatherUIBaseConfig; }

#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0744C6A968A6CF90_OFFSET UNITYSDK_OFFSET(0x1D4EA440)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_94ACAE3E7BAE7353_OFFSET UNITYSDK_OFFSET(0x1D4EA400)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDawnsEyeWeatherUI_TypeDefinitionIndex = 22538;

	class SetDawnsEyeWeatherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DawnsEyeWeatherUIBaseConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94ACAE3E7BAE7353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDawnsEyeWeatherUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_94ACAE3E7BAE7353_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0744C6A968A6CF90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_METHOD_3_0744C6A968A6CF90_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WeatherUIBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETWEATHERUI_METHOD_3_621AC65B8FB2852B_OFFSET UNITYSDK_OFFSET(0x18E4A800)
#define RPG_GAMECORE_SETWEATHERUI_METHOD_3_938A4FFA2B5465F2_OFFSET UNITYSDK_OFFSET(0x18E4A880)
#define RPG_GAMECORE_SETWEATHERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4A850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetWeatherUI_TypeDefinitionIndex = 21694;

	class SetWeatherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WeatherUIBaseConfig* Config; // 0x18
		::System::String* TypeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_621AC65B8FB2852B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWeatherUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWeatherUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI_METHOD_3_621AC65B8FB2852B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_938A4FFA2B5465F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWeatherUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI_METHOD_3_938A4FFA2B5465F2_OFFSET))(a1, a2);
		}
	};
}

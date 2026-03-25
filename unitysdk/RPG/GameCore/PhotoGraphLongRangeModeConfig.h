#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_METHOD_2_FED46C93F827DCD1_OFFSET UNITYSDK_OFFSET(0x174AAFC0)
#define RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AB140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphLongRangeModeConfig_TypeDefinitionIndex = 19823;

	class PhotoGraphLongRangeModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideResultToast; // 0x10
		::System::Boolean ShowSaveBtn; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FED46C93F827DCD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphLongRangeModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphLongRangeModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_METHOD_2_FED46C93F827DCD1_OFFSET))(a1, a2);
		}
	};
}

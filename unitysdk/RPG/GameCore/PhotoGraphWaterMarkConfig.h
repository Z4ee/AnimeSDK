#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphLogoConfig; }

#define RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_METHOD_2_19C24BFFA3C3BB5F_OFFSET UNITYSDK_OFFSET(0x1B4C3B40)
#define RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C5650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphWaterMarkConfig_TypeDefinitionIndex = 18312;

	class PhotoGraphWaterMarkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphLogoConfig* DefaultLogoConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphLogoConfig*>* LogoConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_19C24BFFA3C3BB5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphWaterMarkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphWaterMarkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_METHOD_2_19C24BFFA3C3BB5F_OFFSET))(a1, a2);
		}
	};
}

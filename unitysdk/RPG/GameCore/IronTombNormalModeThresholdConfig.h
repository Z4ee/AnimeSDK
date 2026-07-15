#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_METHOD_2_E12940A82832E48E_OFFSET UNITYSDK_OFFSET(0x1B0154B0)
#define RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0156D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IronTombNormalModeThresholdConfig_TypeDefinitionIndex = 21982;

	class IronTombNormalModeThresholdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WarningThreshold; // 0x10
		::RPG::GameCore::DynamicFloat* ErrorThreshold; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E12940A82832E48E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IronTombNormalModeThresholdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IronTombNormalModeThresholdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_METHOD_2_E12940A82832E48E_OFFSET))(a1, a2);
		}
	};
}

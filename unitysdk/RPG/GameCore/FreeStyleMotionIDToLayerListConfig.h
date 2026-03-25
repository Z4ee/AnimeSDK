#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_METHOD_2_53A603F8AA8661FC_OFFSET UNITYSDK_OFFSET(0x17220420)
#define RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17220460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleMotionIDToLayerListConfig_TypeDefinitionIndex = 14937;

	class FreeStyleMotionIDToLayerListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_53A603F8AA8661FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleMotionIDToLayerListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleMotionIDToLayerListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_METHOD_2_53A603F8AA8661FC_OFFSET))(a1, a2);
		}
	};
}

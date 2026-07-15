#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirPlanePresetConfig; }

#define RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_METHOD_2_599FBE08986E41BA_OFFSET UNITYSDK_OFFSET(0x1B4CCFC0)
#define RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CD0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirGamePresetConfig_TypeDefinitionIndex = 15606;

	class PixAirGamePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PixAirPlanePresetConfig* Player; // 0x10
		::Il2CppArray<::RPG::GameCore::PixAirPlanePresetConfig*>* Enemies; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_599FBE08986E41BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirGamePresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirGamePresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRGAMEPRESETCONFIG_METHOD_2_599FBE08986E41BA_OFFSET))(a1, a2);
		}
	};
}

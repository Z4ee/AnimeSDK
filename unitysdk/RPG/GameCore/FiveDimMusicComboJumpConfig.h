#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_METHOD_2_3DB1576632DE32B5_OFFSET UNITYSDK_OFFSET(0x1D0F5680)
#define RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicComboJumpConfig_TypeDefinitionIndex = 18618;

	class FiveDimMusicComboJumpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BPM; // 0x10
		::System::Single Offset; // 0x14
		::System::Single Tolerance; // 0x18
		::RPG::GameCore::LittleGameEvent* OnComboEvent; // 0x20
		::RPG::GameCore::LittleGameEvent* OnMissEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3DB1576632DE32B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicComboJumpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicComboJumpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_METHOD_2_3DB1576632DE32B5_OFFSET))(a1, a2);
		}
	};
}

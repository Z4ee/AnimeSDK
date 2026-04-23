#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG_METHOD_3_194FB74AE7365C3B_OFFSET UNITYSDK_OFFSET(0x189000A0)
#define RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG_METHOD_3_A41062164B3FE808_OFFSET UNITYSDK_OFFSET(0x189000E0)
#define RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189000D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileBakedMoveConfig_TypeDefinitionIndex = 15803;

	class FiveDimEvilSmileBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single TraceDistance; // 0x30
		::RPG::MVector3 TraceOffset; // 0x34
		::System::Single MoveTeleportDistance; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_194FB74AE7365C3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG_METHOD_3_194FB74AE7365C3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A41062164B3FE808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEBAKEDMOVECONFIG_METHOD_3_A41062164B3FE808_OFFSET))(a1, a2);
		}
	};
}

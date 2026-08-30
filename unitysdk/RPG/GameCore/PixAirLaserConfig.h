#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRLASERCONFIG_METHOD_2_1E7D275DC9535EDF_OFFSET UNITYSDK_OFFSET(0x1D337140)
#define RPG_GAMECORE_PIXAIRLASERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D337330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirLaserConfig_TypeDefinitionIndex = 21153;

	class PixAirLaserConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LaserHeadPrefabPath; // 0x10
		::System::String* LaserTrailPrefabPath; // 0x18
		::System::String* LaserHitPrefabPath; // 0x20
		::RPG::GameCore::FixPoint Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLASERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E7D275DC9535EDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirLaserConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirLaserConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLASERCONFIG_METHOD_2_1E7D275DC9535EDF_OFFSET))(a1, a2);
		}
	};
}

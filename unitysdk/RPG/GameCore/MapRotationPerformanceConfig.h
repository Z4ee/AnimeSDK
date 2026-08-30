#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationPerformanceID; }

#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_METHOD_2_D0DC1FCFB433B2C1_OFFSET UNITYSDK_OFFSET(0x1D226F80)
#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D227220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationPerformanceConfig_TypeDefinitionIndex = 16845;

	class MapRotationPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationPerformanceID*>* DelayPerformanceInAirlock; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D0DC1FCFB433B2C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationPerformanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationPerformanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_METHOD_2_D0DC1FCFB433B2C1_OFFSET))(a1, a2);
		}
	};
}

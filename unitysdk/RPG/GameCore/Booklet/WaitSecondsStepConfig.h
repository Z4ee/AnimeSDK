#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_METHOD_3_320A511D5FFD0625_OFFSET UNITYSDK_OFFSET(0x1C2E4370)
#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_METHOD_3_EA0F648AB9A1E6D1_OFFSET UNITYSDK_OFFSET(0x1C2E46E0)
#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E4360)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int WaitSecondsStepConfig_TypeDefinitionIndex = 24696;

	class WaitSecondsStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Single Seconds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA0F648AB9A1E6D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_METHOD_3_EA0F648AB9A1E6D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_320A511D5FFD0625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::WaitSecondsStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_METHOD_3_320A511D5FFD0625_OFFSET))(a1, a2);
		}
	};
}

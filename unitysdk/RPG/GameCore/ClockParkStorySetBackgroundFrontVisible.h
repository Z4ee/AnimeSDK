#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_METHOD_3_28E2C3C4302B0DD0_OFFSET UNITYSDK_OFFSET(0x18820CC0)
#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_METHOD_3_4A695E9682EC5889_OFFSET UNITYSDK_OFFSET(0x18820C40)
#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18820C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySetBackgroundFrontVisible_TypeDefinitionIndex = 19939;

	class ClockParkStorySetBackgroundFrontVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A695E9682EC5889(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_METHOD_3_4A695E9682EC5889_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28E2C3C4302B0DD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_METHOD_3_28E2C3C4302B0DD0_OFFSET))(a1, a2);
		}
	};
}

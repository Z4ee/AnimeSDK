#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWRAIDFINISHUI_METHOD_3_979CB63E733A28A9_OFFSET UNITYSDK_OFFSET(0x19C81520)
#define RPG_GAMECORE_SHOWRAIDFINISHUI_METHOD_3_AFB78C2AF410F0A0_OFFSET UNITYSDK_OFFSET(0x19C815A0)
#define RPG_GAMECORE_SHOWRAIDFINISHUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C81570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRaidFinishUI_TypeDefinitionIndex = 20399;

	class ShowRaidFinishUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CountDown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_979CB63E733A28A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRaidFinishUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRaidFinishUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI_METHOD_3_979CB63E733A28A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFB78C2AF410F0A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRaidFinishUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRaidFinishUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI_METHOD_3_AFB78C2AF410F0A0_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMAZEUI_METHOD_3_0BB1B8472DAC29B2_OFFSET UNITYSDK_OFFSET(0x19C7FA90)
#define RPG_GAMECORE_SHOWMAZEUI_METHOD_3_34D4CEACBFC8C05B_OFFSET UNITYSDK_OFFSET(0x19C7FA10)
#define RPG_GAMECORE_SHOWMAZEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7FA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazeUI_TypeDefinitionIndex = 19477;

	class ShowMazeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34D4CEACBFC8C05B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_METHOD_3_34D4CEACBFC8C05B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BB1B8472DAC29B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_METHOD_3_0BB1B8472DAC29B2_OFFSET))(a1, a2);
		}
	};
}

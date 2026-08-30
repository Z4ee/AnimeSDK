#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMAZEUI_METHOD_3_0BB1B8472DAC29B2_OFFSET UNITYSDK_OFFSET(0x1D097650)
#define RPG_GAMECORE_SHOWMAZEUI_METHOD_3_1F9EAD45AC31F229_OFFSET UNITYSDK_OFFSET(0x1D097610)
#define RPG_GAMECORE_SHOWMAZEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D097640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazeUI_TypeDefinitionIndex = 20381;

	class ShowMazeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F9EAD45AC31F229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_METHOD_3_1F9EAD45AC31F229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BB1B8472DAC29B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_METHOD_3_0BB1B8472DAC29B2_OFFSET))(a1, a2);
		}
	};
}

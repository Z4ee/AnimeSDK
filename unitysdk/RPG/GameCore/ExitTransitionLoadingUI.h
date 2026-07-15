#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI_METHOD_3_6E15D35AC5BF59F4_OFFSET UNITYSDK_OFFSET(0x1C068EF0)
#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI_METHOD_3_ED7C0D849DC4D031_OFFSET UNITYSDK_OFFSET(0x1C068E20)
#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C068EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitTransitionLoadingUI_TypeDefinitionIndex = 20908;

	class ExitTransitionLoadingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED7C0D849DC4D031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitTransitionLoadingUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitTransitionLoadingUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI_METHOD_3_ED7C0D849DC4D031_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E15D35AC5BF59F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI_METHOD_3_6E15D35AC5BF59F4_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWTALKUI_METHOD_3_C458DA0E0BF1DF1D_OFFSET UNITYSDK_OFFSET(0x1D09BA90)
#define RPG_GAMECORE_SHOWTALKUI_METHOD_3_DAA8D128D0A9F768_OFFSET UNITYSDK_OFFSET(0x1D09BAE0)
#define RPG_GAMECORE_SHOWTALKUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09BAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTalkUI_TypeDefinitionIndex = 20602;

	class ShowTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Boolean ShowDialogControlUI; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C458DA0E0BF1DF1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTalkUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTalkUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI_METHOD_3_C458DA0E0BF1DF1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAA8D128D0A9F768(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTalkUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI_METHOD_3_DAA8D128D0A9F768_OFFSET))(a1, a2);
		}
	};
}

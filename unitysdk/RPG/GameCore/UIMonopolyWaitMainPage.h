#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_A164BE515FB353D3_OFFSET UNITYSDK_OFFSET(0x190DEF50)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_D7CEEA8B1231F27F_OFFSET UNITYSDK_OFFSET(0x190DEE40)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x190DEF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyWaitMainPage_TypeDefinitionIndex = 20576;

	class UIMonopolyWaitMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7CEEA8B1231F27F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyWaitMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyWaitMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_D7CEEA8B1231F27F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A164BE515FB353D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_A164BE515FB353D3_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_A164BE515FB353D3_OFFSET UNITYSDK_OFFSET(0x1B87C790)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_D9EF25BAD2A46C96_OFFSET UNITYSDK_OFFSET(0x1B87C6C0)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87C780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyWaitMainPage_TypeDefinitionIndex = 20926;

	class UIMonopolyWaitMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9EF25BAD2A46C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyWaitMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyWaitMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_D9EF25BAD2A46C96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A164BE515FB353D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_METHOD_3_A164BE515FB353D3_OFFSET))(a1, a2);
		}
	};
}

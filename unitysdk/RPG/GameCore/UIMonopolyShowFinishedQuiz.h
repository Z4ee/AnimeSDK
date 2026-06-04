#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_METHOD_3_12AB465434261F9A_OFFSET UNITYSDK_OFFSET(0x19E2FA20)
#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_METHOD_3_D679C8F40722E6EE_OFFSET UNITYSDK_OFFSET(0x19E2F910)
#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyShowFinishedQuiz_TypeDefinitionIndex = 20512;

	class UIMonopolyShowFinishedQuiz : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D679C8F40722E6EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_METHOD_3_D679C8F40722E6EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12AB465434261F9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_METHOD_3_12AB465434261F9A_OFFSET))(a1, a2);
		}
	};
}

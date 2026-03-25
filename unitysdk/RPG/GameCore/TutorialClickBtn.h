#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALCLICKBTN_METHOD_3_D1BADCDE0D187F51_OFFSET UNITYSDK_OFFSET(0x178D6F60)
#define RPG_GAMECORE_TUTORIALCLICKBTN_METHOD_3_D892F439DD18BEF8_OFFSET UNITYSDK_OFFSET(0x178D6FE0)
#define RPG_GAMECORE_TUTORIALCLICKBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x178D6FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialClickBtn_TypeDefinitionIndex = 22331;

	class TutorialClickBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D1BADCDE0D187F51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClickBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClickBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN_METHOD_3_D1BADCDE0D187F51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D892F439DD18BEF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClickBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLICKBTN_METHOD_3_D892F439DD18BEF8_OFFSET))(a1, a2);
		}
	};
}

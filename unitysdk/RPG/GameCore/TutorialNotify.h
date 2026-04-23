#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialNotifyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALNOTIFY_METHOD_3_2063F8F256FBF943_OFFSET UNITYSDK_OFFSET(0x190DC510)
#define RPG_GAMECORE_TUTORIALNOTIFY_METHOD_3_39E35993C027B418_OFFSET UNITYSDK_OFFSET(0x190DC490)
#define RPG_GAMECORE_TUTORIALNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x190DC4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialNotify_TypeDefinitionIndex = 23364;

	class TutorialNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialNotifyType Type; // 0x18
		::System::String* Param; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39E35993C027B418(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY_METHOD_3_39E35993C027B418_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2063F8F256FBF943(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALNOTIFY_METHOD_3_2063F8F256FBF943_OFFSET))(a1, a2);
		}
	};
}

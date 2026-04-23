#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_238A9BFD2CEF910C_OFFSET UNITYSDK_OFFSET(0x190D5540)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_69D0D4C5FD501698_OFFSET UNITYSDK_OFFSET(0x190D5650)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES__CTOR_OFFSET UNITYSDK_OFFSET(0x190D5620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialClearAllHideNodes_TypeDefinitionIndex = 23393;

	class TutorialClearAllHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_238A9BFD2CEF910C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClearAllHideNodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClearAllHideNodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_238A9BFD2CEF910C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69D0D4C5FD501698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_69D0D4C5FD501698_OFFSET))(a1, a2);
		}
	};
}

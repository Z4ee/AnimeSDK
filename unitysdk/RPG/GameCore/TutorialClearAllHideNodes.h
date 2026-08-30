#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_1F7961D8321F0CD5_OFFSET UNITYSDK_OFFSET(0x1D2A1AC0)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_69D0D4C5FD501698_OFFSET UNITYSDK_OFFSET(0x1D2A1B90)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A1B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialClearAllHideNodes_TypeDefinitionIndex = 24100;

	class TutorialClearAllHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F7961D8321F0CD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClearAllHideNodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClearAllHideNodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_1F7961D8321F0CD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69D0D4C5FD501698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_METHOD_3_69D0D4C5FD501698_OFFSET))(a1, a2);
		}
	};
}

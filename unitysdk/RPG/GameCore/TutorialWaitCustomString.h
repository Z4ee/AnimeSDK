#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitCustomString.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_METHOD_4_917E24E6B202F7F5_OFFSET UNITYSDK_OFFSET(0x178DF910)
#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_METHOD_4_DC113D8FA0466F8C_OFFSET UNITYSDK_OFFSET(0x178DF890)
#define RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x178DF8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialWaitCustomString_TypeDefinitionIndex = 22420;

	class TutorialWaitCustomString : public ::RPG::GameCore::WaitCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC113D8FA0466F8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialWaitCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialWaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_METHOD_4_DC113D8FA0466F8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_917E24E6B202F7F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialWaitCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALWAITCUSTOMSTRING_METHOD_4_917E24E6B202F7F5_OFFSET))(a1, a2);
		}
	};
}

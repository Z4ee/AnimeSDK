#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALLOCKCONTROL_METHOD_3_53D7290A3C2BBFD0_OFFSET UNITYSDK_OFFSET(0x190DC190)
#define RPG_GAMECORE_TUTORIALLOCKCONTROL_METHOD_3_755DC3DC8EED0A89_OFFSET UNITYSDK_OFFSET(0x190DC110)
#define RPG_GAMECORE_TUTORIALLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x190DC160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialLockControl_TypeDefinitionIndex = 23286;

	class TutorialLockControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_755DC3DC8EED0A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialLockControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialLockControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL_METHOD_3_755DC3DC8EED0A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53D7290A3C2BBFD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialLockControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialLockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL_METHOD_3_53D7290A3C2BBFD0_OFFSET))(a1, a2);
		}
	};
}

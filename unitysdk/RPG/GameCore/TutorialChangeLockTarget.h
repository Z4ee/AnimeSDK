#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_METHOD_3_8B5562BBB66C9948_OFFSET UNITYSDK_OFFSET(0x190D4D40)
#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_METHOD_3_B8B011864FC57177_OFFSET UNITYSDK_OFFSET(0x190D4CC0)
#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChangeLockTarget_TypeDefinitionIndex = 23365;

	class TutorialChangeLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MonsterTag; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::System::Boolean IsLockTeammate; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8B011864FC57177(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChangeLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChangeLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_METHOD_3_B8B011864FC57177_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B5562BBB66C9948(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChangeLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChangeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_METHOD_3_8B5562BBB66C9948_OFFSET))(a1, a2);
		}
	};
}

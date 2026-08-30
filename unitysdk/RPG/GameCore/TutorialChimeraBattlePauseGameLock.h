#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_METHOD_3_9D54F9AC979646AF_OFFSET UNITYSDK_OFFSET(0x1D2A16F0)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_METHOD_3_B8CAE36AD9D07D0E_OFFSET UNITYSDK_OFFSET(0x1D2A16A0)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A16E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraBattlePauseGameLock_TypeDefinitionIndex = 24104;

	class TutorialChimeraBattlePauseGameLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Boolean AutoSend; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8CAE36AD9D07D0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_METHOD_3_B8CAE36AD9D07D0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D54F9AC979646AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_METHOD_3_9D54F9AC979646AF_OFFSET))(a1, a2);
		}
	};
}

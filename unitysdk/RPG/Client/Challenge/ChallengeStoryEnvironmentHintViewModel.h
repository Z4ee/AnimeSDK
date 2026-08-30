#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/ChallengeEnvironmentHintViewModelBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ChallengeStoryInstance; }

#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0x1C861B10)
#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1C861B00)
#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8600B0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeStoryEnvironmentHintViewModel_TypeDefinitionIndex = 80104;

	class ChallengeStoryEnvironmentHintViewModel : public ::RPG::Client::Challenge::ChallengeEnvironmentHintViewModelBase
	{
	public:
		::System::Nullable_1<::System::UInt32> _CurrentStageBuffID_k__BackingField; // 0x18
		::System::Int32 _CurrentStageNumber_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChallengeStoryInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStoryInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentStageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_CurrentStageBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC9F31A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0xC9F31B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F2F70)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetViewModel_ProgressViewModel_TypeDefinitionIndex = 80100;

	class ChallengeTargetViewModel_ProgressViewModel : public ::System::Object
	{
	public:
		::System::Int32 _Total_k__BackingField; // 0x10
		::System::Int32 _Current_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL_GET_CURRENT_OFFSET))(this);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_PROGRESSVIEWMODEL_GET_TOTAL_OFFSET))(this);
		}
	};
}

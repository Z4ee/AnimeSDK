#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8EAED2BCF3F4D39_14;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET UNITYSDK_OFFSET(0x92CB560)
#define RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92CB5D0)
#define RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x92CAE40)
#define RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x92CACD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineup_TypeDefinitionIndex = 51220;

	class ChallengeLineup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BuffIDs; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _AvatarIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET))(this);
		}

		::System::Void UpdateByChallengeRecommendLineupInfo(::Class_1_D8EAED2BCF3F4D39_14* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET))(this, info);
		}

		::System::UInt32 GetBuffID(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET))(this, index);
		}
	};
}

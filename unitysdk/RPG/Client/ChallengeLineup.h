#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET UNITYSDK_OFFSET(0x9F33600)
#define RPG_CLIENT_CHALLENGELINEUP_GETFIRSTHALFBUFFID_OFFSET UNITYSDK_OFFSET(0x9F33670)
#define RPG_CLIENT_CHALLENGELINEUP_GETFIRSTHALFLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9F33830)
#define RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9F33790)
#define RPG_CLIENT_CHALLENGELINEUP_GETSECONDHALFBUFFID_OFFSET UNITYSDK_OFFSET(0x9F33700)
#define RPG_CLIENT_CHALLENGELINEUP_GETSECONDHALFLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9F33890)
#define RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x9F32EE0)
#define RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9F32D70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineup_TypeDefinitionIndex = 58144;

	class ChallengeLineup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _AvatarIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BuffIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP__CTOR_OFFSET))(this);
		}

		::System::Void UpdateByChallengeRecommendLineupInfo(::Class_1_6FC4D75D938BC053* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_UPDATEBYCHALLENGERECOMMENDLINEUPINFO_OFFSET))(this, info);
		}

		::System::UInt32 GetBuffID(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETBUFFID_OFFSET))(this, index);
		}

		::System::UInt32 GetFirstHalfBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETFIRSTHALFBUFFID_OFFSET))(this);
		}

		::System::UInt32 GetSecondHalfBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETSECONDHALFBUFFID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETLINEUPAVATARIDS_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFirstHalfLineupAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETFIRSTHALFLINEUPAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSecondHalfLineupAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGELINEUP_GETSECONDHALFLINEUPAVATARIDS_OFFSET))(this);
		}
	};
}

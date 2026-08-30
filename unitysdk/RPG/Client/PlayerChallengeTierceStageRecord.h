#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_3;
class Class_1_FE8CB2A15AB397EA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1AE03D80)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1AE03DA0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_STAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1AE03D60)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1AE03D90)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SET_STAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1AE03D70)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE03CD0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE03C90)
#define RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD__SYNCLINEUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AE03DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeTierceStageRecord_TypeDefinitionIndex = 64338;

	class PlayerChallengeTierceStageRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _Members_k__BackingField; // 0x10
		::System::UInt32 _BuffID_k__BackingField; // 0x18
		::System::UInt32 _StageIndex_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_STAGEINDEX_OFFSET))(this);
		}

		::System::Void set_StageIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SET_STAGEINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_Members()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FE8CB2A15AB397EA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE8CB2A15AB397EA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD_SYNC_OFFSET))(this, a1);
		}

		static ::System::Void _SyncLineupMembers(::Class_1_D40936EF3BF54118_3* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::Class_1_D40936EF3BF54118_3*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCESTAGERECORD__SYNCLINEUPMEMBERS_OFFSET))(a1, a2);
		}
	};
}

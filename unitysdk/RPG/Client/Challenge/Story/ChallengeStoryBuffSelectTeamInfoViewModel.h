#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_AVATARS_OFFSET UNITYSDK_OFFSET(0x1AC642F0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_CURRENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1AC64330)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1AC64310)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_AVATARS_OFFSET UNITYSDK_OFFSET(0x1AC64300)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_CURRENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1AC64340)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1AC64320)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC64350)

namespace RPG::Client::Challenge::Story
{
	inline static constexpr unsigned int ChallengeStoryBuffSelectTeamInfoViewModel_TypeDefinitionIndex = 76673;

	class ChallengeStoryBuffSelectTeamInfoViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _Avatars_k__BackingField; // 0x10
		::System::Nullable_1<::System::UInt32> _CurrentBuffID_k__BackingField; // 0x18
		::System::Int32 _TeamIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_Avatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_AVATARS_OFFSET))(this);
		}

		::System::Void set_Avatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_AVATARS_OFFSET))(this, a1);
		}

		::System::Int32 get_TeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_TEAMINDEX_OFFSET))(this);
		}

		::System::Void set_TeamIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_TEAMINDEX_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_CurrentBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_GET_CURRENTBUFFID_OFFSET))(this);
		}

		::System::Void set_CurrentBuffID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYBUFFSELECTTEAMINFOVIEWMODEL_SET_CURRENTBUFFID_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET UNITYSDK_OFFSET(0xB2A0FC0)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0xB2A5790)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A57A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildSynopsis_TypeDefinitionIndex = 62781;

	class TeamBuildSynopsis : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AvatarIDCount = 0x4; // 0x0
		::Il2CppArray<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS__CTOR_OFFSET))(this, avatarIDs);
		}

		::Il2CppArray<::System::UInt32>* get_AvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET))(this);
		}

		static ::RPG::Client::TeamBuildSynopsis* Create(::System::UInt32 targetAvatarID, ::System::UInt32 targetAvatarPosition, ::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET))(targetAvatarID, targetAvatarPosition, avatarIDs);
		}
	};
}

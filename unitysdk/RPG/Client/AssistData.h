#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerAssistInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ASSISTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB32F5E0)
#define RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB32F570)
#define RPG_CLIENT_ASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB32F3D0)
#define RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xB32F3B0)
#define RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xB32F3C0)
#define RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xB32F450)
#define RPG_CLIENT_ASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB32F440)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistData_TypeDefinitionIndex = 60050;

	class AssistData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* PlayerDisplayData; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET))(this, a1);
		}

		static ::RPG::Client::AssistData* Create(::Proto::PlayerAssistInfo* a1)
		{
			return ((::RPG::Client::AssistData*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::AssistData* Create_1(::RPG::Client::AssistData* a1)
		{
			return ((::RPG::Client::AssistData*(*)(::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET))(a1);
		}

		::RPG::Client::AssistData* Clone()
		{
			return ((::RPG::Client::AssistData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CLONE_OFFSET))(this);
		}

		::System::Void SyncData(::Proto::PlayerAssistInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET))(this, a1);
		}
	};
}

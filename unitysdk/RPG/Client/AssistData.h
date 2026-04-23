#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerAssistInfo; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ASSISTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x9D3F810)
#define RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9D3F7A0)
#define RPG_CLIENT_ASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D3F600)
#define RPG_CLIENT_ASSISTDATA_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9D3F550)
#define RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9D3F5E0)
#define RPG_CLIENT_ASSISTDATA_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9D3F590)
#define RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9D3F5F0)
#define RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x9D3F680)
#define RPG_CLIENT_ASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3F670)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistData_TypeDefinitionIndex = 59120;

	class AssistData : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x10
		::RPG::Client::PlayerBriefDisplayData* PlayerDisplayData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::Client::AvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SET_AVATARDATA_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET))(this, value);
		}

		static ::RPG::Client::AssistData* Create(::Proto::PlayerAssistInfo* info)
		{
			return ((::RPG::Client::AssistData*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_OFFSET))(info);
		}

		static ::RPG::Client::AssistData* Create_1(::RPG::Client::AssistData* source)
		{
			return ((::RPG::Client::AssistData*(*)(::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET))(source);
		}

		::RPG::Client::AssistData* Clone()
		{
			return ((::RPG::Client::AssistData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CLONE_OFFSET))(this);
		}

		::System::Void SyncData(::Proto::PlayerAssistInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET))(this, info);
		}
	};
}

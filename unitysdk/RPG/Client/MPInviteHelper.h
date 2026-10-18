#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }

#define RPG_CLIENT_MPINVITEHELPER_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xD4F11E0)
#define RPG_CLIENT_MPINVITEHELPER_ACCEPTLOBBYINVITATION_OFFSET UNITYSDK_OFFSET(0xD4F1280)

namespace RPG::Client
{
	inline static constexpr unsigned int MPInviteHelper_TypeDefinitionIndex = 60109;

	class MPInviteHelper : public ::System::Object
	{
	public:
		static ::System::Void AcceptInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPINVITEHELPER_ACCEPTINVITATION_OFFSET))(a1);
		}

		static ::System::Void AcceptLobbyInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPINVITEHELPER_ACCEPTLOBBYINVITATION_OFFSET))(a1);
		}
	};
}

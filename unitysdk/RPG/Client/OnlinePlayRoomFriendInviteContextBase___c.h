#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9DD900)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DD940)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__GETINVITEFRIENDGROUPS_B__0_0_OFFSET UNITYSDK_OFFSET(0xD9DD950)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContextBase___c_TypeDefinitionIndex = 66394;

	class OnlinePlayRoomFriendInviteContextBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::OnlinePlayRoomFriendInviteContextBase___c** StaticGet___9()
		{
			return (::RPG::Client::OnlinePlayRoomFriendInviteContextBase___c**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomFriendInviteContextBase___c_TypeDefinitionIndex)->GetStaticField(0x3020);
		}
		static ::System::Func_2<::RPG::Client::PlayerBriefDisplayData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::PlayerBriefDisplayData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomFriendInviteContextBase___c_TypeDefinitionIndex)->GetStaticField(0x3028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetInviteFriendGroups_b__0_0(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__GETINVITEFRIENDGROUPS_B__0_0_OFFSET))(this, a1);
		}
	};
}

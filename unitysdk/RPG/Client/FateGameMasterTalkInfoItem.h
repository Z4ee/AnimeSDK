#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkRandomContext.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_34118FB616997FA1;

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_HASTALK2_OFFSET UNITYSDK_OFFSET(0x1C18A750)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK1_OFFSET UNITYSDK_OFFSET(0x1C18B8A0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK2WAITTIME_OFFSET UNITYSDK_OFFSET(0x1C18BDA0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK2_OFFSET UNITYSDK_OFFSET(0x1C18BB20)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKAVATARID1_OFFSET UNITYSDK_OFFSET(0x1C18A970)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKAVATARID2_OFFSET UNITYSDK_OFFSET(0x1C18AAA0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKID_OFFSET UNITYSDK_OFFSET(0x1C18B860)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C18B6B0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_ISMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C18A310)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM__CONVERTTALKAVATARID_OFFSET UNITYSDK_OFFSET(0x1C18B7E0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C189F60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoItem_TypeDefinitionIndex = 64170;

	class FateGameMasterTalkInfoItem : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _TalkAvatarIDNone = 0x0; // 0x0
		::System::UInt32 _TalkID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchContext(::RPG::Client::FateGameMasterTalkRandomContext a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateGameMasterTalkRandomContext))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_ISMATCHCONTEXT_OFFSET))(this, a1);
		}

		static ::System::UInt32 _ConvertTalkAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM__CONVERTTALKAVATARID_OFFSET))(a1);
		}

		::System::UInt32 get_TalkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKID_OFFSET))(this);
		}

		::System::UInt32 get_TalkAvatarID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKAVATARID1_OFFSET))(this);
		}

		::RPG::Client::TextID get_Talk1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK1_OFFSET))(this);
		}

		::System::UInt32 get_TalkAvatarID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALKAVATARID2_OFFSET))(this);
		}

		::RPG::Client::TextID get_Talk2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK2_OFFSET))(this);
		}

		::System::Boolean get_HasTalk2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_HASTALK2_OFFSET))(this);
		}

		::Class_1_34118FB616997FA1* get__Row()
		{
			return ((::Class_1_34118FB616997FA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET__ROW_OFFSET))(this);
		}

		static ::System::Single get_Talk2WaitTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOITEM_GET_TALK2WAITTIME_OFFSET))();
		}
	};
}

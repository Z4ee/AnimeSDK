#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_ADDPENDINGMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD94BC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD94120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_GETMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xBD943A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_GETSHOWMAINENTRANCEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD94340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_HASMAINENTRANCEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD941C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_REFRESHPENDINGMESSAGES_OFFSET UNITYSDK_OFFSET(0xBD948D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_REMOVEPENDINGMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD94C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_SENDFINISHMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD94CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__BUILDMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xBD94460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD94110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__GETSHOWMAINENTRANCEMESSAGEID_OFFSET UNITYSDK_OFFSET(0xBD94210)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMessageService_TypeDefinitionIndex = 73780;

	class LimaoNewsMessageService : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurPendingMessageIDs; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x18

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasMainEntranceMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_HASMAINENTRANCEMESSAGE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* GetShowMainEntranceMessage()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_GETSHOWMAINENTRANCEMESSAGE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* GetMessageSequence(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_GETMESSAGESEQUENCE_OFFSET))(this, a1);
		}

		::System::Void RefreshPendingMessages(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_REFRESHPENDINGMESSAGES_OFFSET))(this, a1);
		}

		::System::Void AddPendingMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_ADDPENDINGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void RemovePendingMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_REMOVEPENDINGMESSAGE_OFFSET))(this, a1);
		}

		::System::Void SendFinishMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE_SENDFINISHMESSAGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShowMainEntranceMessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__GETSHOWMAINENTRANCEMESSAGEID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageSequence* _BuildMessageSequence(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGESERVICE__BUILDMESSAGESEQUENCE_OFFSET))(this, a1);
		}
	};
}

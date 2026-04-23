#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CREATE_OFFSET UNITYSDK_OFFSET(0xA0053D0)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA005760)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_SEND_OFFSET UNITYSDK_OFFSET(0xA005450)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xA005440)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__ONRECEIVE_OFFSET UNITYSDK_OFFSET(0xA0057E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelFriendPvpInfoPacketProxy_TypeDefinitionIndex = 58345;

	class ChimeraDuelFriendPvpInfoPacketProxy : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* _FinishCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelFriendPvpInfoPacketProxy* Create()
		{
			return ((::RPG::Client::ChimeraDuelFriendPvpInfoPacketProxy*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CREATE_OFFSET))();
		}

		::System::Void Send(::System::Action_1<::System::Boolean>* onFinish, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_SEND_OFFSET))(this, onFinish, args);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnReceive(::System::UInt16 msgID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__ONRECEIVE_OFFSET))(this, msgID, rspObject);
		}
	};
}

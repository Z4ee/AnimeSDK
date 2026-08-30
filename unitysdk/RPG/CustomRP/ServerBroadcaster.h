#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class RPUdpMessageHello; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }
namespace System::Net::Sockets { class UdpClient; }
namespace System::Threading { class Thread; }

#define RPG_CUSTOMRP_SERVERBROADCASTER_STOP_OFFSET UNITYSDK_OFFSET(0x1C6A2AA0)
#define RPG_CUSTOMRP_SERVERBROADCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A3120)
#define RPG_CUSTOMRP_SERVERBROADCASTER__THREADFUNC_OFFSET UNITYSDK_OFFSET(0x1C6EDCE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ServerBroadcaster_TypeDefinitionIndex = 37230;

	class ServerBroadcaster : public ::System::Object
	{
	public:
		::System::Net::Sockets::UdpClient* _udpClient; // 0x10
		::System::Threading::Thread* _thread; // 0x18
		::System::IO::MemoryStream* _ms; // 0x20
		::RPG::CustomRP::RPUdpMessageHello* _message; // 0x28
		::System::IO::BinaryWriter* _bw; // 0x30
		::System::Boolean _isRun; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERVERBROADCASTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERVERBROADCASTER_STOP_OFFSET))(this);
		}

		::System::Void _ThreadFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERVERBROADCASTER__THREADFUNC_OFFSET))(this);
		}
	};
}

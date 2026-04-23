#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtUdpMessageHello; }
namespace System::Threading { class Thread; }

#define HDG_SERVERBROADCASTER_STOP_OFFSET UNITYSDK_OFFSET(0x8C14600)
#define HDG_SERVERBROADCASTER_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x8C1C610)
#define HDG_SERVERBROADCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C14A10)

namespace Hdg
{
	inline static constexpr unsigned int ServerBroadcaster_TypeDefinitionIndex = 43757;

	class ServerBroadcaster : public ::System::Object
	{
	public:
		::Hdg::rdtUdpMessageHello* m_message; // 0x10
		::System::Threading::Thread* m_thread; // 0x18
		::System::Boolean m_run; // 0x20

		::System::Void _ctor(::System::Int32 serverport)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_SERVERBROADCASTER__CTOR_OFFSET))(this, serverport);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_SERVERBROADCASTER_STOP_OFFSET))(this);
		}

		::System::Void ThreadFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_SERVERBROADCASTER_THREADFUNC_OFFSET))(this);
		}
	};
}

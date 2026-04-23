#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }

#define RPG_CLIENT_BASEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DDD2F0)
#define RPG_CLIENT_BASEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DDD2A0)
#define RPG_CLIENT_BASEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9DDD250)
#define RPG_CLIENT_BASEREDDOTFILTER_REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DDD330)
#define RPG_CLIENT_BASEREDDOTFILTER__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x9DDD3B0)
#define RPG_CLIENT_BASEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDD410)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseRedDotFilter_TypeDefinitionIndex = 61539;

	class BaseRedDotFilter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER_REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEREDDOTFILTER__ADDNOTIFYHANDLER_OFFSET))(this, type, handler);
		}
	};
}

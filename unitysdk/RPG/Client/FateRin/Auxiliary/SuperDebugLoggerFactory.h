#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Auxiliary { class SuperDebugLogger; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGERFACTORY_GETLOGGER_OFFSET UNITYSDK_OFFSET(0x1CA20500)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA20660)

namespace RPG::Client::FateRin::Auxiliary
{
	inline static constexpr unsigned int SuperDebugLoggerFactory_TypeDefinitionIndex = 79737;

	class SuperDebugLoggerFactory : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::FateRin::Auxiliary::SuperDebugLogger*>* _CreatedLoggers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGERFACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Logging::ILogger* GetLogger(::System::String* a1)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGERFACTORY_GETLOGGER_OFFSET))(this, a1);
		}
	};
}

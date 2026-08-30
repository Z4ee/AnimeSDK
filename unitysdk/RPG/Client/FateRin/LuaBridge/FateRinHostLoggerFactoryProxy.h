#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY_GETLOGGER_OFFSET UNITYSDK_OFFSET(0xD00C650)
#define RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY_GET__LOGGERFACTORY_OFFSET UNITYSDK_OFFSET(0xD00C7C0)
#define RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xD00C840)

namespace RPG::Client::FateRin::LuaBridge
{
	inline static constexpr unsigned int FateRinHostLoggerFactoryProxy_TypeDefinitionIndex = 79710;

	class FateRinHostLoggerFactoryProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY__CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Logging::ILogger* GetLogger(::System::String* a1)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY_GETLOGGER_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateRin::Logging::ILoggerFactory* get__LoggerFactory()
		{
			return ((::RPG::Client::FateRin::Logging::ILoggerFactory*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LUABRIDGE_FATERINHOSTLOGGERFACTORYPROXY_GET__LOGGERFACTORY_OFFSET))();
		}
	};
}

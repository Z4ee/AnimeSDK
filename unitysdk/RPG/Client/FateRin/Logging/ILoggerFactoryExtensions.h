#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { class Type; }

#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS_GETCURRENTCLASSLOGGER_OFFSET UNITYSDK_OFFSET(0xD00BB50)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS_GETLOGGERFOR_OFFSET UNITYSDK_OFFSET(0xD00C230)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS__FINDCALLERTYPE_OFFSET UNITYSDK_OFFSET(0xD00BD60)

namespace RPG::Client::FateRin::Logging
{
	inline static constexpr unsigned int ILoggerFactoryExtensions_TypeDefinitionIndex = 79713;

	class ILoggerFactoryExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Logging::ILogger* GetCurrentClassLogger(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS_GETCURRENTCLASSLOGGER_OFFSET))(a1);
		}

		static ::System::Type* _FindCallerType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS__FINDCALLERTYPE_OFFSET))();
		}

		static ::RPG::Client::FateRin::Logging::ILogger* GetLoggerFor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::System::Object* a2)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::RPG::Client::FateRin::Logging::ILoggerFactory*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS_GETLOGGERFOR_OFFSET))(a1, a2);
		}
	};
}

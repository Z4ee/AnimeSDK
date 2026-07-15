#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define RPG_CLIENT_FATERIN_BASEVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1A5BC9C0)
#define RPG_CLIENT_FATERIN_BASEVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1A5BCA20)
#define RPG_CLIENT_FATERIN_BASEVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5BC940)
#define RPG_CLIENT_FATERIN_BASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BB000)
#define RPG_CLIENT_FATERIN_BASEVIEWMODEL__RAISEREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x1A5BB970)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int BaseViewModel_TypeDefinitionIndex = 75667;

	class BaseViewModel : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler* OnRefresh; // 0x10
		::RPG::Client::FateRin::Logging::ILogger* _Logger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BASEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BASEVIEWMODEL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _RaiseRefreshEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BASEVIEWMODEL__RAISEREFRESHEVENT_OFFSET))(this);
		}

		::System::Void add_OnRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BASEVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BASEVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}
	};
}

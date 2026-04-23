#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlipMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class UIAutoFlipBehavior; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class String; }

#define RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB3D0690)
#define RPG_CLIENT_UIAUTOFLIPMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D06E0)
#define RPG_CLIENT_UIAUTOFLIPMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB3D0710)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAutoFlipMonoPlugin_TypeDefinitionIndex = 65484;

	class UIAutoFlipMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::UIAutoFlipBehavior*>
	{
	public:
		::RPG::Client::UIPageTurnMonoPlugin* ControledBook; // 0x30
		::RPG::Client::FlipMode Mode; // 0x38
		::System::Single PageFlipTime; // 0x3C
		::System::Single DelayBeforeStart; // 0x40
		::System::Single TimeBetweenPages; // 0x44
		::System::Boolean AutoStartFlip; // 0x48
		::System::Single YRatio; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

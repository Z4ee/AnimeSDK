#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StageDynamicLightBoxBehavior; }
namespace RPG::Client { class StageDynamicLightBoxBehavior_DynamicLightBoxTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1AE4B0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB1AE500)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB1AE510)

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxMonoPlugin_TypeDefinitionIndex = 65406;

	class StageDynamicLightBoxMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageDynamicLightBoxBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StageDynamicLightBoxBehavior_DynamicLightBoxTemplate*>* Templates; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class TransferMandatoryParametersBehavior; }
namespace System { class String; }

#define RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA6168B0)
#define RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA616900)
#define RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA616910)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferMandatoryParametersMonoPlugin_TypeDefinitionIndex = 57553;

	class TransferMandatoryParametersMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TransferMandatoryParametersBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMANDATORYPARAMETERSMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class CubemapGeneratorBehavior; }
namespace System { class String; }

#define RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA0E08B0)
#define RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E0900)
#define RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA0E0910)

namespace RPG::Client
{
	inline static constexpr unsigned int CubemapGeneratorMonoPlugin_TypeDefinitionIndex = 65470;

	class CubemapGeneratorMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CubemapGeneratorBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

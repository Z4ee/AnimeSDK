#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class TemplateBehavior; }

#define RPG_CLIENT_TEMPLATEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCA135A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TemplateMonoPlugin_TypeDefinitionIndex = 66194;

	class TemplateMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TemplateBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_3_BBC1B2A0D71AFDCE;

#define RPG_CLIENT_MONODEFERREDDECALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC070AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDeferredDecalMonoPlugin_TypeDefinitionIndex = 66305;

	class MonoDeferredDecalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_BBC1B2A0D71AFDCE*>
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x30
		::System::Int32 LightQualityVersion; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODEFERREDDECALMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}

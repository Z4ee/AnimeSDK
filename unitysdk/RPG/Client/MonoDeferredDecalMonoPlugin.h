#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_3_7314DF5DFDC2B96D;

#define RPG_CLIENT_MONODEFERREDDECALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA925CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDeferredDecalMonoPlugin_TypeDefinitionIndex = 65378;

	class MonoDeferredDecalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_7314DF5DFDC2B96D*>
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

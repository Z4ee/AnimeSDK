#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ReflectionHSVVolumeBehavior; }
namespace System { class String; }

#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xAF85030)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xAF85080)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xAF85090)

namespace RPG::Client
{
	inline static constexpr unsigned int ReflectionHSVVolumeMonoPlugin_TypeDefinitionIndex = 65196;

	class ReflectionHSVVolumeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ReflectionHSVVolumeBehavior*>
	{
	public:
		::UnityEngine::Vector3 Field_7_0; // 0x30
		::UnityEngine::Vector3 Field_7_1; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

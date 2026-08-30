#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ReflectionHSVVolumeBehavior; }
namespace System { class String; }

#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1B657720)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B657770)

namespace RPG::Client
{
	inline static constexpr unsigned int ReflectionHSVVolumeMonoPlugin_TypeDefinitionIndex = 70671;

	class ReflectionHSVVolumeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ReflectionHSVVolumeBehavior*>
	{
	public:
		::UnityEngine::Vector3 ALKEOLEEKAH; // 0x30
		::UnityEngine::Vector3 FBOCAFLELGJ; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

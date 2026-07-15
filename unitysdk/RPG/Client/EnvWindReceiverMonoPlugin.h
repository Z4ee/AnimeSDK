#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnvWindReceiverMonoPlugin_GizmoPreviewType.h"
#include "unitysdk/RPG/Client/EnvWindReceiverMonoPlugin_ReceiverMaterialType.h"
#include "unitysdk/RPG/Client/EnvWindReceiverMonoPlugin_WindDirectionUpdateMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EnvWindReceiverBehavior; }
namespace System { class String; }

#define RPG_CLIENT_ENVWINDRECEIVERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x18D998E0)
#define RPG_CLIENT_ENVWINDRECEIVERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18D99930)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindReceiverMonoPlugin_TypeDefinitionIndex = 67858;

	class EnvWindReceiverMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::EnvWindReceiverBehavior*>
	{
	public:
		::UnityEngine::Vector3 WindDirWeight; // 0x30
		::RPG::Client::EnvWindReceiverMonoPlugin_ReceiverMaterialType MaterialType; // 0x3C
		::System::Single FlagWaveAmplitude; // 0x40
		::System::Single FlagWaveFrequency; // 0x44
		::RPG::Client::EnvWindReceiverMonoPlugin_WindDirectionUpdateMode UpdateMode; // 0x48
		::RPG::Client::EnvWindReceiverMonoPlugin_GizmoPreviewType GizmoPreview; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

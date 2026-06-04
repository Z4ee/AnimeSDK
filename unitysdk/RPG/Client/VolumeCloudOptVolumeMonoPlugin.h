#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class VolumeCloudOptVolumeBehavior; }
namespace RPG::Client { class VolumeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCC26920)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCC26970)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCC26990)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeCloudOptVolumeMonoPlugin_TypeDefinitionIndex = 66250;

	class VolumeCloudOptVolumeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::VolumeCloudOptVolumeBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::VolumeData*>* VolumeList; // 0x30
		::System::Single FadeInSpeedScale; // 0x38
		::System::Single FadeOutSpeedScale; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class VolumeData; }
namespace RPG::Client { class VolumeFogOptVolumeBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA77E5E0)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA77E630)
#define RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA77E650)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeFogOptVolumeMonoPlugin_TypeDefinitionIndex = 58038;

	class VolumeFogOptVolumeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::VolumeFogOptVolumeBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::VolumeData*>* VolumeList; // 0x30
		::System::Single FadeInSpeedScale; // 0x38
		::System::Single FadeOutSpeedScale; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEFOGOPTVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class OptimizeVolumeBaseBehavior; }
namespace RPG::Client { class VolumeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPTIMZIEVOLUMEBASEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1829F610)
#define RPG_CLIENT_OPTIMZIEVOLUMEBASEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1829F660)

namespace RPG::Client
{
	inline static constexpr unsigned int OptimzieVolumeBaseMonoPlugin_TypeDefinitionIndex = 67673;

	class OptimzieVolumeBaseMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::OptimizeVolumeBaseBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::VolumeData*>* VolumeList; // 0x30
		::System::Single FadeInSpeedScale; // 0x38
		::System::Single FadeOutSpeedScale; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMZIEVOLUMEBASEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMZIEVOLUMEBASEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

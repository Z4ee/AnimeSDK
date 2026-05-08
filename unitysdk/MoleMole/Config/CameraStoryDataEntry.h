#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CameraStoryDataActiveCondition; }
namespace MoleMole::Config { class ConfigCameraStory; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAENTRY_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12D31C10)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12D31C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataEntry_TypeDefinitionIndex = 57823;

	class CameraStoryDataEntry : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigCameraStory* config; // 0x10
		::MoleMole::Config::CameraStoryDataActiveCondition* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAENTRY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAENTRY_GET_PRIORITY_OFFSET))(this);
		}
	};
}

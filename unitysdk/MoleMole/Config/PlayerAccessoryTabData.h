#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class InteractionRangeParamFloat; }

#define MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA_METHOD_1_E87E8159DBF445E8_OFFSET UNITYSDK_OFFSET(0x1A35FC40)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35FC30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerAccessoryTabData_TypeDefinitionIndex = 81781;

	class PlayerAccessoryTabData : public ::System::Object
	{
	public:
		::MoleMole::PlayerAccessoryType TabType; // 0x10
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamRotation; // 0x18
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraHeight; // 0x20
		::UnityEngine::UI::Extension::InteractionRangeParamFloat* InteractionParamCameraDepth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::PlayerAccessoryTabData* Method_1_E87E8159DBF445E8()
		{
			return ((::MoleMole::Config::PlayerAccessoryTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYTABDATA_METHOD_1_E87E8159DBF445E8_OFFSET))(this);
		}
	};
}

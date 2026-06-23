#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA48B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampTypeConfig_CampTypeItem_TypeDefinitionIndex = 59171;

	class CampTypeConfig_CampTypeItem : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* DistanceBasedTargetValue; // 0x10
		::UnityEngine::AnimationCurve* AngleBasedTargetValue; // 0x18
		::System::Single SelectedTargetAdditionalTargetValue; // 0x20
		::System::Single weight; // 0x24
		::System::Single targetValueRatio; // 0x28
		::MoleMole::Config::TeamRelationship relationship; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMPTYPECONFIG_CAMPTYPEITEM__CTOR_OFFSET))(this);
		}
	};
}

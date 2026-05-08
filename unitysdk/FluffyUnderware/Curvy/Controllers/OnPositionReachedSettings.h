#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/TriggeringDirections.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyPositionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace FluffyUnderware::Curvy::Controllers { class CurvySplineMoveEvent; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1C0B5E80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_INITIALIZEFIELDSWITHDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C0B5DC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B5E20)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B5E10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B5CB0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int OnPositionReachedSettings_TypeDefinitionIndex = 37278;

	class OnPositionReachedSettings : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* Event; // 0x18
		::System::Single Position; // 0x20
		::FluffyUnderware::Curvy::CurvyPositionMode PositionMode; // 0x24
		::FluffyUnderware::Curvy::Controllers::TriggeringDirections TriggeringDirections; // 0x28
		::UnityEngine::Color GizmoColor; // 0x2C
		::System::Boolean initialized; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void InitializeFieldsWithDefaultValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_INITIALIZEFIELDSWITHDEFAULTVALUE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings* Clone()
		{
			return ((::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_ONPOSITIONREACHEDSETTINGS_CLONE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SphereCameraConfig_Enum_3_A17D38E47A44E805.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_SPHERECAMERACONFIG_GET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x1A1A9E80)
#define MOLEMOLE_SPHERECAMERACONFIG_SET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x1A1A9E90)
#define MOLEMOLE_SPHERECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A9EF0)

namespace MoleMole
{
	inline static constexpr unsigned int SphereCameraConfig_TypeDefinitionIndex = 63566;

	class SphereCameraConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* SpecialTag; // 0x18
		::System::Int32 SpecialId; // 0x20
		::System::Boolean OverrideFocusPoint; // 0x24
		::UnityEngine::Vector3 FocusLocalPosition; // 0x28
		::System::Boolean OverrideFocusPointHeight; // 0x34
		::System::Single Fov; // 0x38
		::System::Single Yaw; // 0x3C
		::MoleMole::SphereCameraConfig_Enum_3_A17D38E47A44E805 RadiusEditMode; // 0x40
		::System::Single Radius; // 0x44
		::System::Single MaxRadius; // 0x48
		::System::Single MinRadius; // 0x4C
		::System::Single DebugRadius; // 0x50
		::MoleMole::SphereCameraConfig_Enum_3_A17D38E47A44E805 PitchEditMode; // 0x54
		::System::Single Pitch; // 0x58
		::System::Single MaxPitch; // 0x5C
		::System::Single MinPitch; // 0x60
		::System::Single DebugPitch; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_OverrideFocusPointHeightValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG_GET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET))(this);
		}

		::System::Void set_OverrideFocusPointHeightValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG_SET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET))(this, a1);
		}
	};
}

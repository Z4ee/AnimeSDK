#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_PRELOADCAMERADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12B29AC0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_PRELOADCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B29AA0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int PreLoadCameraData_TypeDefinitionIndex = 53958;

	class PreLoadCameraData : public ::System::Object
	{
	public:
		::System::Boolean IsExited; // 0x10
		::UnityEngine::Vector3 Position; // 0x14
		::UnityEngine::Quaternion Rotation; // 0x20
		::System::Single FieldOfView; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_PRELOADCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_PRELOADCAMERADATA__CTOR_1_OFFSET))(this, position, rotation, fov);
		}
	};
}

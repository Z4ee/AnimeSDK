#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD032E00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransform_Controller_TypeDefinitionIndex = 45795;

	class OverrideTransform_Controller : public ::System::Object
	{
	public:
		::System::Double effectiveTime; // 0x10
		::System::Int32 mask; // 0x18
		::UnityEngine::Vector3 position; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x28
		::UnityEngine::Transform* Anchor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CONTROLLER__CTOR_OFFSET))(this);
		}
	};
}

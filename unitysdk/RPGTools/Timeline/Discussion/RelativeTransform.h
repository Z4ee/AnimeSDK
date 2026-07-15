#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALFINALPOSITION_OFFSET UNITYSDK_OFFSET(0x3950370)
#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALFINALROTATION_OFFSET UNITYSDK_OFFSET(0x39503A0)
#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x39E6B60)
#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALROTATION_OFFSET UNITYSDK_OFFSET(0x39E6BF0)
#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_SET_FINALFINALPOSITION_OFFSET UNITYSDK_OFFSET(0x3950390)
#define RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_SET_FINALFINALROTATION_OFFSET UNITYSDK_OFFSET(0x39503B0)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int RelativeTransform_TypeDefinitionIndex = 46988;

	struct alignas(8) RelativeTransform
	{
		::UnityEngine::Vector3 rawPosition; // 0x10
		::System::Single rawForward; // 0x1C
		::System::String* characterUniqueName; // 0x20
		::UnityEngine::Vector3 offsetPosition; // 0x28
		::System::Single offsetForward; // 0x34
		::System::Boolean overrideForward; // 0x38
		::System::String* ForwardTargetAnchorName; // 0x40
		::System::String* ForwardTargetUniqueName; // 0x48
		::System::Boolean StickToGround; // 0x50
		::UnityEngine::Vector3 _FinalFinalPosition_k__BackingField; // 0x54
		::UnityEngine::Quaternion _FinalFinalRotation_k__BackingField; // 0x60

		::UnityEngine::Vector3 get_FinalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_FinalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalFinalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALFINALPOSITION_OFFSET))(this);
		}

		::System::Void set_FinalFinalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_SET_FINALFINALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_FinalFinalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_GET_FINALFINALROTATION_OFFSET))(this);
		}

		::System::Void set_FinalFinalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_RELATIVETRANSFORM_SET_FINALFINALROTATION_OFFSET))(this, a1);
		}
	};
}

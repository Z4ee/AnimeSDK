#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class RuntimeKeyFrame; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_KEYFRAMEMBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F23DC60)
#define MOLEMOLE_TIMELINE_KEYFRAMEMBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F23DBE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int KeyframeMBP_TypeDefinitionIndex = 32791;

	class KeyframeMBP : public ::System::Object
	{
	public:
		::System::String* frameKeyStr; // 0x10
		::MoleMole::Timeline::RuntimeKeyFrame* Keyframe; // 0x18
		::MoleMole::Timeline::RecorderUnitType frameType; // 0x20
		::UnityEngine::Timeline::KFrameFieldType fieldType; // 0x24

		::System::Void _ctor(::System::String* frameKeyStr, ::UnityEngine::Keyframe keyframe, ::MoleMole::Timeline::RecorderUnitType frameType, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Keyframe, ::MoleMole::Timeline::RecorderUnitType, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_KEYFRAMEMBP__CTOR_OFFSET))(this, frameKeyStr, keyframe, frameType, fieldType);
		}

		::System::Boolean Equals(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_KEYFRAMEMBP_EQUALS_OFFSET))(this, value);
		}
	};
}

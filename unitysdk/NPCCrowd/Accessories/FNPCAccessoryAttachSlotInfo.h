#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int FNPCAccessoryAttachSlotInfo_TypeDefinitionIndex = 62976;

	struct alignas(8) FNPCAccessoryAttachSlotInfo
	{
		::System::Int32 AccessoryID; // 0x10
		::System::Int32 SceneObjectID; // 0x14
		::System::String* SeqFrameKey; // 0x18
		::System::Boolean OverrideDefaultSlotOffset; // 0x20
		::UnityEngine::Vector3 OffsetPosition; // 0x24
		::UnityEngine::Quaternion OffsetRotation; // 0x30
		::UnityEngine::Vector3 OffsetScale; // 0x40
		::Il2CppArray<::System::Int32>* AnimIDList; // 0x50
	};
}

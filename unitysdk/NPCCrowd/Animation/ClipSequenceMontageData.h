#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_CLIPSEQUENCEMONTAGEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x67FF00)
#define NPCCROWD_ANIMATION_CLIPSEQUENCEMONTAGEDATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x67FF10)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ClipSequenceMontageData_TypeDefinitionIndex = 78485;

	struct alignas(4) ClipSequenceMontageData
	{
		::System::Int32 inAnim; // 0x10
		::System::Int32 loopAnim; // 0x14
		::System::Int32 outAnim; // 0x18
		::System::Boolean controlDuration; // 0x1C
		::System::Single duration; // 0x20

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CLIPSEQUENCEMONTAGEDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CLIPSEQUENCEMONTAGEDATA___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

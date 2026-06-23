#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCLODRendererItem_TypeDefinitionIndex = 65468;

	struct alignas(8) NPCLODRendererItem
	{
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Boolean matInstanced; // 0x18
		::Il2CppArray<::System::Int32>* matInstanceIDs; // 0x20
		::System::Int32 sharedMatCnt; // 0x28
	};
}

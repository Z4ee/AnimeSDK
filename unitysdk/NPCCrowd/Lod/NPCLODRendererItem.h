#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCLODRENDERERITEM_REFRESHMESHNAME_OFFSET UNITYSDK_OFFSET(0x656950)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCLODRendererItem_TypeDefinitionIndex = 47241;

	struct alignas(8) NPCLODRendererItem
	{
		::UnityEngine::Renderer* renderer; // 0x10
		::System::String* meshName; // 0x18
		::System::Boolean matInstanced; // 0x20
		::Il2CppArray<::System::Int32>* matInstanceIDs; // 0x28
		::System::Int32 sharedMatCnt; // 0x30

		::System::Void RefreshMeshName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCLODRENDERERITEM_REFRESHMESHNAME_OFFSET))(this);
		}
	};
}

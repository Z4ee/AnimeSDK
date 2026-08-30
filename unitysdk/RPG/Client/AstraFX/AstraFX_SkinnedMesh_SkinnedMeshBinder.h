#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_SKINNEDMESHBINDER_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1488D0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh_SkinnedMeshBinder_TypeDefinitionIndex = 73585;

	struct alignas(8) AstraFX_SkinnedMesh_SkinnedMeshBinder
	{
		::UnityEngine::SkinnedMeshRenderer* SkinnedMesh; // 0x10
		::System::String* BindName; // 0x18

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_SKINNEDMESHBINDER_GET_VALID_OFFSET))(this);
		}
	};
}

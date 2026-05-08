#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine::UI { class VertexHelper; }

#define EMPTY4RAYCAST_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x100FB2F0)
#define EMPTY4RAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x100FB2D0)
#define EMPTY4RAYCAST___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x100FB350)

inline static constexpr unsigned int Empty4RayCast_TypeDefinitionIndex = 75903;

class Empty4RayCast : public ::UnityEngine::UI::MaskableGraphic
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTY4RAYCAST__CTOR_OFFSET))(this);
	}

	::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + EMPTY4RAYCAST_ONPOPULATEMESH_OFFSET))(this, vh);
	}

	::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + EMPTY4RAYCAST___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
	}
};

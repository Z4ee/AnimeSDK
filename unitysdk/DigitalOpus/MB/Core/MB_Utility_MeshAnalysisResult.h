#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_Utility_MeshAnalysisResult_TypeDefinitionIndex = 90670;

	struct alignas(4) MB_Utility_MeshAnalysisResult
	{
		::UnityEngine::Rect uvRect; // 0x10
		::System::Boolean hasOutOfBoundsUVs; // 0x20
		::System::Boolean hasOverlappingSubmeshVerts; // 0x21
		::System::Boolean hasUVs; // 0x22
		::System::Single submeshArea; // 0x24
	};
}

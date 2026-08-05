#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

inline static constexpr unsigned int DoctorStrangeBuildingMatrix_RendererInfo_TypeDefinitionIndex = 66799;

struct alignas(8) DoctorStrangeBuildingMatrix_RendererInfo
{
	::UnityEngine::Renderer* renderer; // 0x10
	::System::Int32 copyIndex; // 0x18
};

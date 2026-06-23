#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_Animation_FloorInfo_TypeDefinitionIndex = 49313;

	struct alignas(8) SceneObject_MainCityCurveMove_Animation_FloorInfo
	{
		::System::Int32 OpenAnimatorState; // 0x10
		::System::Int32 CloseAnimatorState; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* DoorColliders; // 0x18
	};
}

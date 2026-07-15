#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LinearModuleRendererBehavior_ItemData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace RPG::Client
{
	inline static constexpr unsigned int LinearModuleRendererBehavior_PrototypeData_TypeDefinitionIndex = 67713;

	struct alignas(8) LinearModuleRendererBehavior_PrototypeData
	{
		::UnityEngine::Mesh* Mesh; // 0x10
		::UnityEngine::Material* Mat; // 0x18
		::System::Int32 SubMeshIndex; // 0x20
		::UnityEngine::Bounds Bounds; // 0x24
		::System::Collections::Generic::List_1<::RPG::Client::LinearModuleRendererBehavior_ItemData>* ItemDatas; // 0x40
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdAssembly_TypeDefinitionIndex = 73636;

	struct alignas(8) CrowdAssembly
	{
		::System::String* Name; // 0x10
		::UnityEngine::Mesh* Mesh; // 0x18
		::System::Int32 Submesh; // 0x20
		::UnityEngine::Material* Material; // 0x28
	};
}

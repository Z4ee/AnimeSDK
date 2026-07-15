#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridLoader_Struct_2_963C10EA907191D5_TypeDefinitionIndex = 49439;

	struct alignas(8) TerrainGridLoader_Struct_2_963C10EA907191D5
	{
		::System::Int32 Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x14
		::System::Boolean Field_2_2; // 0x18
		::UnityEngine::GameObject* Field_2_3; // 0x20
		::UnityEngine::Object* Field_2_4; // 0x28
	};
}

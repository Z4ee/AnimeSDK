#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SPINE_UNITY_MESHGENERATOR_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x18400EB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGenerator_Settings_TypeDefinitionIndex = 34818;

	struct alignas(4) MeshGenerator_Settings
	{
		::System::Boolean useClipping; // 0x10
		::System::Single zSpacing; // 0x14
		::System::Boolean pmaVertexColors; // 0x18
		::System::Boolean tintBlack; // 0x19
		::System::Boolean canvasGroupTintBlack; // 0x1A
		::System::Boolean calculateTangents; // 0x1B
		::System::Boolean addNormals; // 0x1C
		::System::Boolean immutableTriangles; // 0x1D

		static ::Spine::Unity::MeshGenerator_Settings get_Default()
		{
			return ((::Spine::Unity::MeshGenerator_Settings(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SETTINGS_GET_DEFAULT_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Lumi::GeometryLibrary::Scripts
{
	inline static constexpr unsigned int EMeshDataSource_TypeDefinitionIndex = 45936;

	enum class EMeshDataSource : ::System::Int32
	{
		UnityMesh = 0,
		FBXFile = 1,
		DynamicMesh = 2,
	};
}

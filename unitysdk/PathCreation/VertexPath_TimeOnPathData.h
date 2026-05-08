#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PATHCREATION_VERTEXPATH_TIMEONPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x70CB60)

namespace PathCreation
{
	inline static constexpr unsigned int VertexPath_TimeOnPathData_TypeDefinitionIndex = 35844;

	struct alignas(4) VertexPath_TimeOnPathData
	{
		::System::Int32 previousIndex; // 0x10
		::System::Int32 nextIndex; // 0x14
		::System::Single percentBetweenIndices; // 0x18

		::System::Void _ctor(::System::Int32 prev, ::System::Int32 next, ::System::Single percentBetweenIndices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_TIMEONPATHDATA__CTOR_OFFSET))(this, prev, next, percentBetweenIndices);
		}
	};
}

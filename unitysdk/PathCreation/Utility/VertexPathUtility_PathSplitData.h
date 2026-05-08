#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PathCreation { class MinMax3D; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PATHCREATION_UTILITY_VERTEXPATHUTILITY_PATHSPLITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C00F0)

namespace PathCreation::Utility
{
	inline static constexpr unsigned int VertexPathUtility_PathSplitData_TypeDefinitionIndex = 35849;

	class VertexPathUtility_PathSplitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* anchorVertexMap; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* tangents; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* cumulativeLength; // 0x28
		::PathCreation::MinMax3D* minMax; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_VERTEXPATHUTILITY_PATHSPLITDATA__CTOR_OFFSET))(this);
		}
	};
}

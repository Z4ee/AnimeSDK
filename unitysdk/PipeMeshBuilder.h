#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define PIPEMESHBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D3393B0)
#define PIPEMESHBUILDER_COMPUTEFRAMES_OFFSET UNITYSDK_OFFSET(0x1D33B350)
#define PIPEMESHBUILDER_COMPUTETANGENTS_OFFSET UNITYSDK_OFFSET(0x1D33AD90)
#define PIPEMESHBUILDER_EXPANDWITHDIVISIONS_OFFSET UNITYSDK_OFFSET(0x1D33A690)
#define PIPEMESHBUILDER_GETPERP_OFFSET UNITYSDK_OFFSET(0x1D33BE80)

inline static constexpr unsigned int PipeMeshBuilder_TypeDefinitionIndex = 70072;

class PipeMeshBuilder : public ::System::Object
{
public:
	static ::UnityEngine::Mesh* Build(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points, ::System::Single radius, ::System::Int32 sides, ::System::Single divPerMeter, ::System::Int32 minDiv, ::System::Int32 maxDiv, ::System::Boolean closed, ::System::Single uvTileLen, ::System::Boolean reverseUV, ::System::Boolean createUV)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPEMESHBUILDER_BUILD_OFFSET))(points, radius, sides, divPerMeter, minDiv, maxDiv, closed, uvTileLen, reverseUV, createUV);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ExpandWithDivisions(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* pts, ::System::Single divPerMeter, ::System::Int32 minD, ::System::Int32 maxD, ::System::Boolean closed)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPEMESHBUILDER_EXPANDWITHDIVISIONS_OFFSET))(pts, divPerMeter, minD, maxD, closed);
	}

	static ::Il2CppArray<::UnityEngine::Vector3>* ComputeTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* expanded, ::System::Boolean closed)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPEMESHBUILDER_COMPUTETANGENTS_OFFSET))(expanded, closed);
	}

	static ::Il2CppArray<::UnityEngine::Vector3>* ComputeFrames(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* expanded, ::Il2CppArray<::UnityEngine::Vector3>* tangents, ::System::Boolean closed)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPEMESHBUILDER_COMPUTEFRAMES_OFFSET))(expanded, tangents, closed);
	}

	static ::UnityEngine::Vector3 GetPerp(::UnityEngine::Vector3 v)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPEMESHBUILDER_GETPERP_OFFSET))(v);
	}
};

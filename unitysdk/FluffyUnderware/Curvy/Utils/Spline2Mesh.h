#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/WindingRule.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class Tess; }
namespace FluffyUnderware::Curvy::Utils { class SplinePolyLine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_APPLY_OFFSET UNITYSDK_OFFSET(0x1E1D2D70)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1E1D2D50)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_POLYLINEISVALID_OFFSET UNITYSDK_OFFSET(0x1E1D3FB0)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1E1D2D60)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1E1D39C0)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4010)

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int Spline2Mesh_TypeDefinitionIndex = 38807;

	class Spline2Mesh : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Utils::SplinePolyLine*>* Lines; // 0x10
		::System::String* _Error_k__BackingField; // 0x18
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess* mTess; // 0x20
		::UnityEngine::Mesh* mMesh; // 0x28
		::System::String* MeshName; // 0x30
		::UnityEngine::Vector2 UVOffset; // 0x38
		::UnityEngine::Vector2 UVTiling; // 0x40
		::System::Boolean UV2; // 0x48
		::System::Boolean SuppressUVMapping; // 0x49
		::System::Boolean VertexLineOnly; // 0x4A
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule Winding; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH__CTOR_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_SET_ERROR_OFFSET))(this, value);
		}

		::System::Boolean Apply(::UnityEngine::Mesh*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_APPLY_OFFSET))(this, result);
		}

		::System::Boolean triangulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_TRIANGULATE_OFFSET))(this);
		}

		static ::System::Boolean polyLineIsValid(::FluffyUnderware::Curvy::Utils::SplinePolyLine* pl)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Utils::SplinePolyLine*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINE2MESH_POLYLINEISVALID_OFFSET))(pl);
		}
	};
}

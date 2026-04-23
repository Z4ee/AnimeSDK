#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPpu.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace BansheeGz::BGSpline::Components { class BGTriangulator2D_Config; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_AREA_OFFSET UNITYSDK_OFFSET(0x17B9C400)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_1_OFFSET UNITYSDK_OFFSET(0x17B9C030)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_2_OFFSET UNITYSDK_OFFSET(0x17B9C270)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_OFFSET UNITYSDK_OFFSET(0x17B95230)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x17B9BA40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_INSIDETRIANGLE_OFFSET UNITYSDK_OFFSET(0x17B9C780)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_SNIP_OFFSET UNITYSDK_OFFSET(0x17B9C490)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x17B9BBA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B9C860)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CTOR_OFFSET UNITYSDK_OFFSET(0x17B951F0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGTriangulator2D_TypeDefinitionIndex = 33870;

	class BGTriangulator2D : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Uvs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x69980);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_V()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x69988);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Vertices()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x69990);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Points()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x69998);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Triangles()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x699A0);
		}
		// static const ::System::Single MinUvScale; // 0x0
		// static const ::System::Single MaxUvScale; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CCTOR_OFFSET))();
		}

		::System::Void Bind(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::BansheeGz::BGSpline::Components::BGTriangulator2D_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Components::BGTriangulator2D_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_OFFSET))(this, mesh, positions, config);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CLEAR_OFFSET))(this);
		}

		static ::System::Void Bind_1(::UnityEngine::Vector4 minMax, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_1_OFFSET))(minMax, scale, offset);
		}

		::System::Void Bind_2(::UnityEngine::Vector4 minMax, ::BansheeGz::BGSpline::Components::BGPpu pixelsPerUnit, ::BansheeGz::BGSpline::Components::BGPpu textureSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::BansheeGz::BGSpline::Components::BGPpu, ::BansheeGz::BGSpline::Components::BGPpu))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_2_OFFSET))(this, minMax, pixelsPerUnit, textureSize);
		}

		static ::System::Void Triangulate(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::List_1<::System::Int32>* tris)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_TRIANGULATE_OFFSET))(points, tris);
		}

		static ::System::Single Area(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_AREA_OFFSET))(points);
		}

		static ::System::Boolean Snip(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points, ::System::Int32 u, ::System::Int32 v, ::System::Int32 w, ::System::Int32 n, ::System::Collections::Generic::List_1<::System::Int32>* V)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_SNIP_OFFSET))(points, u, v, w, n, V);
		}

		static ::System::Boolean InsideTriangle(::UnityEngine::Vector2 A, ::UnityEngine::Vector2 B, ::UnityEngine::Vector2 C, ::UnityEngine::Vector2 P)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_INSIDETRIANGLE_OFFSET))(A, B, C, P);
		}
	};
}

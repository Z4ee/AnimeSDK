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

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_AREA_OFFSET UNITYSDK_OFFSET(0x1894BF80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_1_OFFSET UNITYSDK_OFFSET(0x1894BAE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_2_OFFSET UNITYSDK_OFFSET(0x1894BD70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_OFFSET UNITYSDK_OFFSET(0x18943F50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1894B4C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_INSIDETRIANGLE_OFFSET UNITYSDK_OFFSET(0x1894C3E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_SNIP_OFFSET UNITYSDK_OFFSET(0x1894C070)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1894B5B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1894C4C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D__CTOR_OFFSET UNITYSDK_OFFSET(0x18943F10)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGTriangulator2D_TypeDefinitionIndex = 34152;

	class BGTriangulator2D : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Triangles()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x4F340);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Points()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x4F348);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Vertices()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x4F350);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_V()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x4F358);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Uvs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(BGTriangulator2D_TypeDefinitionIndex)->GetStaticField(0x4F360);
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

		::System::Void Bind(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::BansheeGz::BGSpline::Components::BGTriangulator2D_Config* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Components::BGTriangulator2D_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CLEAR_OFFSET))(this);
		}

		static ::System::Void Bind_1(::UnityEngine::Vector4 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_1_OFFSET))(a1, a2, a3);
		}

		::System::Void Bind_2(::UnityEngine::Vector4 a1, ::BansheeGz::BGSpline::Components::BGPpu a2, ::BansheeGz::BGSpline::Components::BGPpu a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::BansheeGz::BGSpline::Components::BGPpu, ::BansheeGz::BGSpline::Components::BGPpu))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_BIND_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Triangulate(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_TRIANGULATE_OFFSET))(a1, a2);
		}

		static ::System::Single Area(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_AREA_OFFSET))(a1);
		}

		static ::System::Boolean Snip(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::System::Int32>* a6)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_SNIP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean InsideTriangle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_INSIDETRIANGLE_OFFSET))(a1, a2, a3, a4);
		}
	};
}

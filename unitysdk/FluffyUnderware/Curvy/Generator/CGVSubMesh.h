#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGData.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_ADD_OFFSET UNITYSDK_OFFSET(0x1DB538A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB535A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DB53140)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_OFFSET UNITYSDK_OFFSET(0x1DB53720)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_TRIANGLESLIST_OFFSET UNITYSDK_OFFSET(0x1DB52E70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1DB52F80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SET_TRIANGLESLIST_OFFSET UNITYSDK_OFFSET(0x1DB52E80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1DB530B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SHIFTINDICES_OFFSET UNITYSDK_OFFSET(0x1DB53850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB53280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DB53300)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DB53310)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DB53440)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53150)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGVSubMesh_TypeDefinitionIndex = 38940;

	class CGVSubMesh : public ::FluffyUnderware::Curvy::Generator::CGData
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> triangles; // 0x20
		::UnityEngine::Material* Material; // 0x30

		::System::Void _ctor(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_OFFSET))(this, material);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Int32>* triangles, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_1_OFFSET))(this, triangles, material);
		}

		::System::Void _ctor_2(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> triangles, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_2_OFFSET))(this, triangles, material);
		}

		::System::Void _ctor_3(::System::Int32 triangleCount, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_3_OFFSET))(this, triangleCount, material);
		}

		::System::Void _ctor_4(::FluffyUnderware::Curvy::Generator::CGVSubMesh* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVSubMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH__CTOR_4_OFFSET))(this, source);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> get_TrianglesList()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_TRIANGLESLIST_OFFSET))(this);
		}

		::System::Void set_TrianglesList(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SET_TRIANGLESLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_Triangles()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_Triangles(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SET_TRIANGLES_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_DISPOSE_OFFSET))(this, disposing);
		}

		static ::FluffyUnderware::Curvy::Generator::CGVSubMesh* Get(::FluffyUnderware::Curvy::Generator::CGVSubMesh* data, ::System::Int32 triangleCount, ::UnityEngine::Material* material)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVSubMesh*(*)(::FluffyUnderware::Curvy::Generator::CGVSubMesh*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_GET_OFFSET))(data, triangleCount, material);
		}

		::System::Void ShiftIndices(::System::Int32 offset, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_SHIFTINDICES_OFFSET))(this, offset, startIndex);
		}

		::System::Void Add(::FluffyUnderware::Curvy::Generator::CGVSubMesh* other, ::System::Int32 shiftIndexOffset)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVSubMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVSUBMESH_ADD_OFFSET))(this, other, shiftIndexOffset);
		}
	};
}

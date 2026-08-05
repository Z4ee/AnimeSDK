#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB_UTILITY_AREALLSHAREDMATERIALSDISTINCT_OFFSET UNITYSDK_OFFSET(0x1ECE8BC0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_ARRAYBISSUBSETOFA_OFFSET UNITYSDK_OFFSET(0x1ECE6390)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_BONEWEIGHTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1ECE93B0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_CONVERTASSETSRELATIVEPATHTOFULLSYSTEMPATH_OFFSET UNITYSDK_OFFSET(0x1ECE9300)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_CREATETEXTURECOPY_OFFSET UNITYSDK_OFFSET(0x1ECE6200)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ECDC7F0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_DISABLERENDERERINSOURCE_OFFSET UNITYSDK_OFFSET(0x1ECE7AE0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_DOSUBMESHESSHAREVERTSORTRIS_OFFSET UNITYSDK_OFFSET(0x1ECE8CE0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ECE8FA0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_GETGOMATERIALS_OFFSET UNITYSDK_OFFSET(0x1ECE6430)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_GETMESH_OFFSET UNITYSDK_OFFSET(0x1ECE6F50)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_GETRENDERER_OFFSET UNITYSDK_OFFSET(0x1ECE7720)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_1_OFFSET UNITYSDK_OFFSET(0x1ECE8030)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_2_OFFSET UNITYSDK_OFFSET(0x1ECE81A0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_3_OFFSET UNITYSDK_OFFSET(0x1ECE8420)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1ECE7EC0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_ISSCENEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ECE9370)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_RESAMPLETEXTURE_OFFSET UNITYSDK_OFFSET(0x1ECE8690)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_SETMESH_OFFSET UNITYSDK_OFFSET(0x1ECE7330)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_SETSOLIDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ECE5F60)
#define DIGITALOPUS_MB_CORE_MB_UTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECE9920)
#define DIGITALOPUS_MB_CORE_MB_UTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE9910)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_Utility_TypeDefinitionIndex = 94602;

	class MB_Utility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DO_INTEGRITY_CHECKS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MB_Utility_TypeDefinitionIndex)->GetStaticField(0x132B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Texture2D* createTextureCopy(::UnityEngine::Texture2D* source, ::System::Boolean expectedToBeGammaCorrectedHint)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_CREATETEXTURECOPY_OFFSET))(source, expectedToBeGammaCorrectedHint);
		}

		static ::System::Boolean ArrayBIsSubsetOfA(::Il2CppArray<::System::Object*>* a, ::Il2CppArray<::System::Object*>* b)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_ARRAYBISSUBSETOFA_OFFSET))(a, b);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetGOMaterials(::UnityEngine::GameObject* go)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_GETGOMATERIALS_OFFSET))(go);
		}

		static ::UnityEngine::Mesh* GetMesh(::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_GETMESH_OFFSET))(go);
		}

		static ::System::Void SetMesh(::UnityEngine::GameObject* go, ::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_SETMESH_OFFSET))(go, m);
		}

		static ::UnityEngine::Renderer* GetRenderer(::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_GETRENDERER_OFFSET))(go);
		}

		static ::System::Void DisableRendererInSource(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_DISABLERENDERERINSOURCE_OFFSET))(go);
		}

		static ::System::Boolean hasOutOfBoundsUVs(::UnityEngine::Mesh* m, ::UnityEngine::Rect& uvBounds)
		{
			return ((::System::Boolean(*)(::UnityEngine::Mesh*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_OFFSET))(m, uvBounds);
		}

		static ::System::Boolean hasOutOfBoundsUVs_1(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult& putResultHere, ::System::Int32 submeshIndex, ::System::Int32 uvChannel)
		{
			return ((::System::Boolean(*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_1_OFFSET))(m, putResultHere, submeshIndex, uvChannel);
		}

		static ::System::Boolean hasOutOfBoundsUVs_2(::Il2CppArray<::UnityEngine::Vector2>* uvs, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult& putResultHere, ::System::Int32 submeshIndex)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult&, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_2_OFFSET))(uvs, m, putResultHere, submeshIndex);
		}

		static ::System::Boolean hasOutOfBoundsUVs_3(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uvs, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult& putResultHere, ::System::Int32 submeshIndex)
		{
			return ((::System::Boolean(*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult&, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_HASOUTOFBOUNDSUVS_3_OFFSET))(uvs, m, putResultHere, submeshIndex);
		}

		static ::System::Void setSolidColor(::UnityEngine::Texture2D* t, ::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_SETSOLIDCOLOR_OFFSET))(t, c);
		}

		static ::UnityEngine::Texture2D* resampleTexture(::UnityEngine::Texture2D* source, ::System::Boolean expectToBeGammaCorrectedHint, ::System::Int32 newWidth, ::System::Int32 newHeight)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_RESAMPLETEXTURE_OFFSET))(source, expectToBeGammaCorrectedHint, newWidth, newHeight);
		}

		static ::System::Boolean AreAllSharedMaterialsDistinct(::Il2CppArray<::UnityEngine::Material*>* sharedMaterials)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_AREALLSHAREDMATERIALSDISTINCT_OFFSET))(sharedMaterials);
		}

		static ::System::Void doSubmeshesShareVertsOrTris(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult& mar)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_DOSUBMESHESSHAREVERTSORTRIS_OFFSET))(m, mar);
		}

		static ::System::Boolean GetBounds(::UnityEngine::GameObject* go, ::UnityEngine::Bounds& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_GETBOUNDS_OFFSET))(go, b);
		}

		static ::System::Void Destroy(::UnityEngine::Object* o)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_DESTROY_OFFSET))(o);
		}

		static ::System::String* ConvertAssetsRelativePathToFullSystemPath(::System::String* pth)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_CONVERTASSETSRELATIVEPATHTOFULLSYSTEMPATH_OFFSET))(pth);
		}

		static ::System::Boolean IsSceneInstance(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_ISSCENEINSTANCE_OFFSET))(go);
		}

		static ::System::String* BoneWeightToString(::UnityEngine::BoneWeight bw)
		{
			return ((::System::String*(*)(::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_BONEWEIGHTTOSTRING_OFFSET))(bw);
		}
	};
}

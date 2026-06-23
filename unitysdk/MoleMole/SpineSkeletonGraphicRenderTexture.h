#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SpineSkeletonGraphicRenderTexture_BlendMaterialPair.h"
#include "unitysdk/MoleMole/SpineSkeletonGraphicRenderTexture_TextureMaterialPair.h"
#include "unitysdk/MoleMole/SpineSkeletonRenderTextureBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SpineSkeletonGraphicImage; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class OutlineEx; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18172920)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET UNITYSDK_OFFSET(0x18175080)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLAMPVECTOR3_OFFSET UNITYSDK_OFFSET(0x18174F40)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET UNITYSDK_OFFSET(0x18174AD0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET UNITYSDK_OFFSET(0x18171DC0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_2E5788209388ADA7_OFFSET UNITYSDK_OFFSET(0x18176C80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x18172D80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x181754B0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18174FD0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4EED0FA306E026CA_OFFSET UNITYSDK_OFFSET(0x18175A50)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_9A5A02ADC9DBBD1E_OFFSET UNITYSDK_OFFSET(0x181758E0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A817E15A68A58D78_OFFSET UNITYSDK_OFFSET(0x181757C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A89962BB83D61C27_OFFSET UNITYSDK_OFFSET(0x18175520)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_D52B95E93CFFD9C6_OFFSET UNITYSDK_OFFSET(0x18176CE0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET UNITYSDK_OFFSET(0x181766F0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x18175BE0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18174CB0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18174590)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18174080)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18175030)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18175260)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET UNITYSDK_OFFSET(0x18173470)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET UNITYSDK_OFFSET(0x18174030)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET UNITYSDK_OFFSET(0x18171FD0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET UNITYSDK_OFFSET(0x18172720)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x181752B0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x181753C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x181754A0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_TypeDefinitionIndex = 60408;

	class SpineSkeletonGraphicRenderTexture : public ::MoleMole::SpineSkeletonRenderTextureBase
	{
	public:
		::UnityEngine::UI::OutlineEx* outlineHolder; // 0xD8
		::System::Int32 shaderPassID; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicImage*>* imageStructList; // 0xE8
		::UnityEngine::RectTransform* customRenderRect; // 0xF0
		::Spine::Unity::SkeletonGraphic* Field_6_4; // 0xF8
		::System::Boolean specificRTMaterial; // 0x100
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair>* meshRendererMaterialForTexture; // 0x108
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicRenderTexture_BlendMaterialPair>* meshMultiRendererMaterialForTexture; // 0x110
		::UnityEngine::CanvasRenderer* Field_6_8; // 0x118
		::UnityEngine::RectTransform* Field_6_9; // 0x120
		::UnityEngine::UI::RawImage* Field_6_10; // 0x128
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_11; // 0x130
		::UnityEngine::Vector3 Field_6_12; // 0x138
		::UnityEngine::Vector3 Field_6_13; // 0x144
		::UnityEngine::Vector3 Field_6_14; // 0x150
		::UnityEngine::Vector3 Field_6_15; // 0x15C
		::System::Boolean Field_6_16; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void DoImageListDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET))(this);
		}

		::System::Void SetImageListMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET))(this);
		}

		::System::Void SetImageListRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetSpineMaterialTextureList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET))(this);
		}

		::System::Void ClampVector3(::UnityEngine::Vector3& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLAMPVECTOR3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void OnSpineRTCreatedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET))(this);
		}

		::System::Void OnSpineRTReleasedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET))(this);
		}

		::System::Void BindRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET))(this);
		}

		::System::Void ClearRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Void Method_6_A89962BB83D61C27(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A89962BB83D61C27_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Material* Method_6_9A5A02ADC9DBBD1E(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_9A5A02ADC9DBBD1E_OFFSET))(this, a1);
		}

		::System::Void Method_6_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_36971FC3F16E2CEB_OFFSET))(this);
		}

		::System::Void Method_6_4EED0FA306E026CA(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4EED0FA306E026CA_OFFSET))(this, a1);
		}

		::System::Void Method_6_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void Method_6_2E5788209388ADA7(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_2E5788209388ADA7_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Method_6_A817E15A68A58D78(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A817E15A68A58D78_OFFSET))(this, a1);
		}

		::System::Void Method_6_D52B95E93CFFD9C6(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_D52B95E93CFFD9C6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_E7A46A8E39261DE6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET))(this, a1, a2, a3);
		}
	};
}

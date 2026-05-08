#pragma once
#include "unitysdk/unitysdk.h"
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

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1386CF30)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET UNITYSDK_OFFSET(0x1386F310)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLAMPVECTOR3_OFFSET UNITYSDK_OFFSET(0x1386F1D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET UNITYSDK_OFFSET(0x1386ED70)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET UNITYSDK_OFFSET(0x1386C360)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x1386D390)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1386F260)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4EED0FA306E026CA_OFFSET UNITYSDK_OFFSET(0x138703F0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_560291EE0C24E4CE_OFFSET UNITYSDK_OFFSET(0x13871090)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_5695883E54704454_OFFSET UNITYSDK_OFFSET(0x1386FAF0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A89962BB83D61C27_OFFSET UNITYSDK_OFFSET(0x1386F700)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET UNITYSDK_OFFSET(0x1386FE60)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x1386FA80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x13870580)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_FC793E2201556942_OFFSET UNITYSDK_OFFSET(0x1386F9A0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1386EF50)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1386E830)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1386E320)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1386F2C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1386F4F0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET UNITYSDK_OFFSET(0x1386DA80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET UNITYSDK_OFFSET(0x1386E2D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET UNITYSDK_OFFSET(0x1386C570)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET UNITYSDK_OFFSET(0x1386CD30)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1386F540)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1386F610)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1386F6F0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_TypeDefinitionIndex = 64838;

	class SpineSkeletonGraphicRenderTexture : public ::MoleMole::SpineSkeletonRenderTextureBase
	{
	public:
		::UnityEngine::UI::OutlineEx* outlineHolder; // 0xD8
		::System::Int32 shaderPassID; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicImage*>* imageStructList; // 0xE8
		::UnityEngine::RectTransform* Field_6_3; // 0xF0
		::UnityEngine::CanvasRenderer* Field_6_4; // 0xF8
		::UnityEngine::RectTransform* customRenderRect; // 0x100
		::Spine::Unity::SkeletonGraphic* Field_6_6; // 0x108
		::System::Boolean specificRTMaterial; // 0x110
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair>* meshRendererMaterialForTexture; // 0x118
		::UnityEngine::CanvasRenderer* Field_6_9; // 0x120
		::UnityEngine::RectTransform* Field_6_10; // 0x128
		::UnityEngine::UI::RawImage* Field_6_11; // 0x130
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_12; // 0x138
		::UnityEngine::Vector3 Field_6_13; // 0x140
		::UnityEngine::Vector3 Field_6_14; // 0x14C
		::UnityEngine::Vector3 Field_6_15; // 0x158
		::UnityEngine::Vector3 Field_6_16; // 0x164
		::System::Boolean Field_6_17; // 0x170

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

		::System::Void Method_6_A89962BB83D61C27(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A89962BB83D61C27_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_EBAB6A35C21A2A5B_OFFSET))(this);
		}

		::System::Void Method_6_5695883E54704454(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_5695883E54704454_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_E7A46A8E39261DE6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET))(this, a1, a2, a3);
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

		::System::Void Method_6_560291EE0C24E4CE(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_560291EE0C24E4CE_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Method_6_FC793E2201556942(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_FC793E2201556942_OFFSET))(this, a1);
		}
	};
}

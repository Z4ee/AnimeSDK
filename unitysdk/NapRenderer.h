#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CachedSubMeshCount.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/NapRendererFlags.h"
#include "unitysdk/NapRenderer_PropertyMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IPerObjectShadowMaterial;
class NapMaterial;
class NapRenderEntity;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NAPRENDERER_BEGINOPERATEMATERIALPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x1C132F00)
#define NAPRENDERER_BEGINOPERATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C1321B0)
#define NAPRENDERER_BEGINSETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C1335C0)
#define NAPRENDERER_BEGINSETRENDERERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C133340)
#define NAPRENDERER_FINDNAPRENDERER_OFFSET UNITYSDK_OFFSET(0x1C13C640)
#define NAPRENDERER_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C13AD20)
#define NAPRENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C13AC80)
#define NAPRENDERER_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1C139F50)
#define NAPRENDERER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C139ED0)
#define NAPRENDERER_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1336F0)
#define NAPRENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C12FDA0)
#define NAPRENDERER_GETSHAREDMATERIALSCACHEDPERFRAME_OFFSET UNITYSDK_OFFSET(0x1C12FB40)
#define NAPRENDERER_GETTEXTUREOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1C13BEB0)
#define NAPRENDERER_GETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1C13BE30)
#define NAPRENDERER_GETTEXTURESCALE_1_OFFSET UNITYSDK_OFFSET(0x1C13BB90)
#define NAPRENDERER_GETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1C13BB10)
#define NAPRENDERER_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C13B490)
#define NAPRENDERER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C13B410)
#define NAPRENDERER_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1C13A660)
#define NAPRENDERER_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1C13A5C0)
#define NAPRENDERER_GET_DISABLECASCADESHADOW_OFFSET UNITYSDK_OFFSET(0x1C12FE30)
#define NAPRENDERER_GET_DRAWPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1C12FD10)
#define NAPRENDERER_GET_ENCAPSULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C12FD30)
#define NAPRENDERER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C12F9D0)
#define NAPRENDERER_GET_ISLOD3_OFFSET UNITYSDK_OFFSET(0x1C12FB10)
#define NAPRENDERER_GET_ISSETTINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C12FA30)
#define NAPRENDERER_GET_ISSHADOWRENDERER_OFFSET UNITYSDK_OFFSET(0x1C12FAD0)
#define NAPRENDERER_GET_ISSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1C12FAF0)
#define NAPRENDERER_GET_LODGROUP_OFFSET UNITYSDK_OFFSET(0x1C12FA50)
#define NAPRENDERER_GET_LODINDEX_OFFSET UNITYSDK_OFFSET(0x1C12FA70)
#define NAPRENDERER_GET_LODPARTIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1C12FAB0)
#define NAPRENDERER_GET_LODPARTINDEX_OFFSET UNITYSDK_OFFSET(0x1C12FA90)
#define NAPRENDERER_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C12FE80)
#define NAPRENDERER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C12FA10)
#define NAPRENDERER_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1C12F9F0)
#define NAPRENDERER_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1C12FB30)
#define NAPRENDERER_GET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1C12FD50)
#define NAPRENDERER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1C13C1C0)
#define NAPRENDERER_INITMATERIALARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C131970)
#define NAPRENDERER_INIT_OFFSET UNITYSDK_OFFSET(0x1C12FEA0)
#define NAPRENDERER_NOTIFYNATIVESETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C133B60)
#define NAPRENDERER_NOTIFYNATIVESETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1C133CF0)
#define NAPRENDERER_NOTIFYNATIVESETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C1339D0)
#define NAPRENDERER_NOTIFYNATIVESETMATRIX_OFFSET UNITYSDK_OFFSET(0x1C133AE0)
#define NAPRENDERER_NOTIFYNATIVESETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1C133E00)
#define NAPRENDERER_NOTIFYNATIVESETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1C133D80)
#define NAPRENDERER_NOTIFYNATIVESETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C133BE0)
#define NAPRENDERER_NOTIFYNATIVESETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1C133C60)
#define NAPRENDERER_NOTIFYNATIVESETVECTOR_OFFSET UNITYSDK_OFFSET(0x1C133A60)
#define NAPRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C13C210)
#define NAPRENDERER_REPLACEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C13C790)
#define NAPRENDERER_SAFESETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C137E90)
#define NAPRENDERER_SETCOLORARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x1C132AC0)
#define NAPRENDERER_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C137260)
#define NAPRENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C136B60)
#define NAPRENDERER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1C13C150)
#define NAPRENDERER_SETFLOATARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x1C132CD0)
#define NAPRENDERER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1C135890)
#define NAPRENDERER_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1C135280)
#define NAPRENDERER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C134B60)
#define NAPRENDERER_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1C1365C0)
#define NAPRENDERER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1C135F80)
#define NAPRENDERER_SETTEXTUREOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1C139030)
#define NAPRENDERER_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1C138D40)
#define NAPRENDERER_SETTEXTURESCALE_1_OFFSET UNITYSDK_OFFSET(0x1C138A50)
#define NAPRENDERER_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1C1386E0)
#define NAPRENDERER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C1380A0)
#define NAPRENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C137850)
#define NAPRENDERER_SETVECTORARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x1C132940)
#define NAPRENDERER_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C1398D0)
#define NAPRENDERER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1C1393A0)
#define NAPRENDERER_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1C134580)
#define NAPRENDERER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1C133E80)
#define NAPRENDERER_SET_DRAWPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1C12FD20)
#define NAPRENDERER_SET_ENCAPSULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C12FD40)
#define NAPRENDERER_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C12F9E0)
#define NAPRENDERER_SET_ISLOD3_OFFSET UNITYSDK_OFFSET(0x1C12FB20)
#define NAPRENDERER_SET_ISSETTINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C12FA40)
#define NAPRENDERER_SET_ISSHADOWRENDERER_OFFSET UNITYSDK_OFFSET(0x1C12FAE0)
#define NAPRENDERER_SET_ISSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1C12FB00)
#define NAPRENDERER_SET_LODGROUP_OFFSET UNITYSDK_OFFSET(0x1C12FA60)
#define NAPRENDERER_SET_LODINDEX_OFFSET UNITYSDK_OFFSET(0x1C12FA80)
#define NAPRENDERER_SET_LODPARTIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1C12FAC0)
#define NAPRENDERER_SET_LODPARTINDEX_OFFSET UNITYSDK_OFFSET(0x1C12FAA0)
#define NAPRENDERER_SET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C12FA20)
#define NAPRENDERER_SET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1C12FA00)
#define NAPRENDERER_SHOULDUSENATIVERENDERER_OFFSET UNITYSDK_OFFSET(0x1C133790)
#define NAPRENDERER_STOPOPERATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C132530)
#define NAPRENDERER_TRYGETNAPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C131D60)
#define NAPRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13C9B0)
#define NAPRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13C930)

inline static constexpr unsigned int NapRenderer_TypeDefinitionIndex = 26663;

class NapRenderer : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RendererGetPropertyBlock()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22240);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitLodPartIndex()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22248);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22250);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetMatrix()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22258);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RendererSetPropertyBlock()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22260);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetTextureScale()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22268);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetVectorArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22270);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetVector()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22278);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_MaterialGetProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22280);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetFloat()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22288);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::NapRenderer*>** StaticGet_napRendererMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::NapRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22290);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_StopOperateProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x22298);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateFlags()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222A0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetTextureOffset()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222A8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetFloatArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222B0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BeginOperateProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222B8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitMaterialArrayProperties()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222C0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_MPBSetProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222C8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_MaterialSetProperty()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222D0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetTexture()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222D8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetColor()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x222E0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* mpbs; // 0x10
	::UnityEngine::LODGroup* _LodGroup_k__BackingField; // 0x18
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::NapMaterial*>* napMaterials; // 0x28
	::UnityEngine::Renderer* _Renderer_k__BackingField; // 0x30
	::NapRenderEntity* entity; // 0x38
	::CachedSubMeshCount subMeshCountCache; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* sharedMaterialsPerFrame; // 0x68
	::System::Int32 sharedMaterialsCachedFrameIndex; // 0x70
	::System::Int32 _LodIndex_k__BackingField; // 0x74
	::System::Int32 indexOfBatchAliveQuery; // 0x78
	::System::Int32 indexOfBatchVisibilityQuery; // 0x7C
	::System::IntPtr _NativeHandle_k__BackingField; // 0x80
	::System::Boolean _IsSettingProperties_k__BackingField; // 0x88
	::System::Boolean _IsSourceRenderer_k__BackingField; // 0x89
	::System::Boolean _EncapsulateBounds_k__BackingField; // 0x8A
	::System::Boolean _IsShadowRenderer_k__BackingField; // 0x8B
	::NapRenderer_PropertyMode propertyMode; // 0x8C
	::System::Int32 _LODPartIndex_k__BackingField; // 0x90
	::System::Boolean _IsLod3_k__BackingField; // 0x94
	::System::Boolean _DrawPerObjectShadow_k__BackingField; // 0x95
	::System::Int32 _LODPartIdOffset_k__BackingField; // 0x98
	::NapRendererFlags flags; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPRENDERER__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_GAMEOBJECT_OFFSET))(this, value);
	}

	::UnityEngine::Renderer* get_Renderer()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_RENDERER_OFFSET))(this);
	}

	::System::Void set_Renderer(::UnityEngine::Renderer* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_RENDERER_OFFSET))(this, value);
	}

	::System::IntPtr get_NativeHandle()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_NATIVEHANDLE_OFFSET))(this);
	}

	::System::Void set_NativeHandle(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_NATIVEHANDLE_OFFSET))(this, value);
	}

	::System::Boolean get_IsSettingProperties()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSETTINGPROPERTIES_OFFSET))(this);
	}

	::System::Void set_IsSettingProperties(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSETTINGPROPERTIES_OFFSET))(this, value);
	}

	::UnityEngine::LODGroup* get_LodGroup()
	{
		return ((::UnityEngine::LODGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODGROUP_OFFSET))(this);
	}

	::System::Void set_LodGroup(::UnityEngine::LODGroup* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODGROUP_OFFSET))(this, value);
	}

	::System::Int32 get_LodIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODINDEX_OFFSET))(this);
	}

	::System::Void set_LodIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODINDEX_OFFSET))(this, value);
	}

	::System::Int32 get_LODPartIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODPARTINDEX_OFFSET))(this);
	}

	::System::Void set_LODPartIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODPARTINDEX_OFFSET))(this, value);
	}

	::System::Int32 get_LODPartIdOffset()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODPARTIDOFFSET_OFFSET))(this);
	}

	::System::Void set_LODPartIdOffset(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODPARTIDOFFSET_OFFSET))(this, value);
	}

	::System::Boolean get_IsShadowRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSHADOWRENDERER_OFFSET))(this);
	}

	::System::Void set_IsShadowRenderer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSHADOWRENDERER_OFFSET))(this, value);
	}

	::System::Boolean get_IsSourceRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSOURCERENDERER_OFFSET))(this);
	}

	::System::Void set_IsSourceRenderer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSOURCERENDERER_OFFSET))(this, value);
	}

	::System::Boolean get_IsLod3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISLOD3_OFFSET))(this);
	}

	::System::Void set_IsLod3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISLOD3_OFFSET))(this, value);
	}

	::System::Int32 get_SubMeshCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_SUBMESHCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Material*>* GetSharedMaterialsCachedPerFrame()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GETSHAREDMATERIALSCACHEDPERFRAME_OFFSET))(this);
	}

	::System::Boolean get_DrawPerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_DRAWPEROBJECTSHADOW_OFFSET))(this);
	}

	::System::Void set_DrawPerObjectShadow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_DRAWPEROBJECTSHADOW_OFFSET))(this, value);
	}

	::System::Boolean get_EncapsulateBounds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ENCAPSULATEBOUNDS_OFFSET))(this);
	}

	::System::Void set_EncapsulateBounds(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ENCAPSULATEBOUNDS_OFFSET))(this, value);
	}

	::System::Boolean get_SupportPerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_SUPPORTPEROBJECTSHADOW_OFFSET))(this);
	}

	::IPerObjectShadowMaterial* GetMaterial(::System::Int32 index)
	{
		return ((::IPerObjectShadowMaterial*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETMATERIAL_OFFSET))(this, index);
	}

	::System::Boolean get_DisableCascadeShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_DISABLECASCADESHADOW_OFFSET))(this);
	}

	::System::Int32 get_MaterialCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_MATERIALCOUNT_OFFSET))(this);
	}

	::System::Void Init(::NapRenderEntity* entity, ::UnityEngine::Renderer* renderer, ::System::Int32 materialIndexCount, ::System::Boolean forcePropertyMode, ::NapRenderer_PropertyMode propertyMode, ::UnityEngine::LODGroup* lodGroup, ::System::Int32 lodIndex)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntity*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean, ::NapRenderer_PropertyMode, ::UnityEngine::LODGroup*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_INIT_OFFSET))(this, entity, renderer, materialIndexCount, forcePropertyMode, propertyMode, lodGroup, lodIndex);
	}

	static ::System::Void InitMaterialArrayProperties(::NapMaterial* napMaterial, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature shaderFeature)
	{
		return ((::System::Void(*)(::NapMaterial*, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + NAPRENDERER_INITMATERIALARRAYPROPERTIES_OFFSET))(napMaterial, shaderFeature);
	}

	::System::Boolean TryGetNapMaterial(::System::Int32 index, ::NapMaterial*& napMaterial)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NapMaterial*&))((::PBYTE)hIl2Cpp + NAPRENDERER_TRYGETNAPMATERIAL_OFFSET))(this, index, napMaterial);
	}

	::System::Boolean BeginOperateProperty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINOPERATEPROPERTY_OFFSET))(this);
	}

	::System::Void StopOperateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_STOPOPERATEPROPERTY_OFFSET))(this);
	}

	static ::System::Void SetVectorArrayValue(::NapMaterial* napMaterial, ::NapMaterialProperty property, ::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::NapMaterial*, ::NapMaterialProperty, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAYVALUE_OFFSET))(napMaterial, property, value);
	}

	static ::System::Void SetColorArrayValue(::NapMaterial* napMaterial, ::NapMaterialProperty property, ::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::NapMaterial*, ::NapMaterialProperty, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAPRENDERER_SETCOLORARRAYVALUE_OFFSET))(napMaterial, property, value);
	}

	static ::System::Void SetFloatArrayValue(::NapMaterial* napMaterial, ::NapMaterialProperty property, ::System::Single value)
	{
		return ((::System::Void(*)(::NapMaterial*, ::NapMaterialProperty, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOATARRAYVALUE_OFFSET))(napMaterial, property, value);
	}

	::System::Boolean BeginOperateMaterialPropertyImpl(::NapMaterialProperty property, ::System::Boolean& isArrayProperty, ::System::Boolean& scopeCreated)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapMaterialProperty, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINOPERATEMATERIALPROPERTYIMPL_OFFSET))(this, property, isArrayProperty, scopeCreated);
	}

	::System::Boolean BeginSetRendererProperty(::NapMaterialProperty property, ::System::Boolean& isArrayProperty, ::System::Boolean& scopeCreated)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapMaterialProperty, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINSETRENDERERPROPERTY_OFFSET))(this, property, isArrayProperty, scopeCreated);
	}

	::System::Boolean BeginSetMaterialProperty(::NapMaterialProperty property, ::System::Boolean& isArrayProperty, ::System::Boolean& scopeCreated, ::System::Int32 index)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapMaterialProperty, ::System::Boolean&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINSETMATERIALPROPERTY_OFFSET))(this, property, isArrayProperty, scopeCreated, index);
	}

	::System::Int32 GetMaterialCount(::NapMaterialProperty property)
	{
		return ((::System::Int32(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETMATERIALCOUNT_OFFSET))(this, property);
	}

	::System::Boolean ShouldUseNativeRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_SHOULDUSENATIVERENDERER_OFFSET))(this);
	}

	::System::Void NotifyNativeSetFloat(::System::Int32 propertyID, ::System::Single value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETFLOAT_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetVector(::System::Int32 propertyID, ::UnityEngine::Vector4& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETVECTOR_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetMatrix(::System::Int32 propertyID, ::UnityEngine::Matrix4x4& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETMATRIX_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetColor(::System::Int32 propertyID, ::UnityEngine::Color& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETCOLOR_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetTexture(::System::Int32 propertyID, ::UnityEngine::Texture* texture, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTURE_OFFSET))(this, propertyID, texture, materialIndex);
	}

	::System::Void NotifyNativeSetVectorArray(::System::Int32 propertyID, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETVECTORARRAY_OFFSET))(this, propertyID, values, materialIndex);
	}

	::System::Void NotifyNativeSetFloatArray(::System::Int32 propertyID, ::Il2CppArray<::System::Single>* values, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETFLOATARRAY_OFFSET))(this, propertyID, values, materialIndex);
	}

	::System::Void NotifyNativeSetTextureScale(::System::Int32 propertyID, ::UnityEngine::Vector2& scale, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTURESCALE_OFFSET))(this, propertyID, scale, materialIndex);
	}

	::System::Void NotifyNativeSetTextureOffset(::System::Int32 propertyID, ::UnityEngine::Vector2& offset, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTUREOFFSET_OFFSET))(this, propertyID, offset, materialIndex);
	}

	::System::Void SetVector(::NapMaterialProperty property, ::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTOR_OFFSET))(this, property, value);
	}

	::System::Void SetVector_1(::NapMaterialProperty property, ::UnityEngine::Vector4 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTOR_1_OFFSET))(this, property, value, index);
	}

	::System::Void SetFloat(::NapMaterialProperty property, ::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOAT_OFFSET))(this, property, value);
	}

	::System::Void SetFloat_1(::NapMaterialProperty property, ::System::Single value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOAT_1_OFFSET))(this, property, value, index);
	}

	::System::Void SetFloatArray(::NapMaterialProperty property, ::Il2CppArray<::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOATARRAY_OFFSET))(this, property, value);
	}

	::System::Void SetMatrix(::NapMaterialProperty property, ::UnityEngine::Matrix4x4 value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NAPRENDERER_SETMATRIX_OFFSET))(this, property, value);
	}

	::System::Void SetMatrix_1(::NapMaterialProperty property, ::UnityEngine::Matrix4x4 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETMATRIX_1_OFFSET))(this, property, value, index);
	}

	::System::Void SetColor(::NapMaterialProperty property, ::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAPRENDERER_SETCOLOR_OFFSET))(this, property, value);
	}

	::System::Void SetColor_1(::NapMaterialProperty property, ::UnityEngine::Color value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETCOLOR_1_OFFSET))(this, property, value, index);
	}

	::System::Void SetTexture(::NapMaterialProperty property, ::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURE_OFFSET))(this, property, value);
	}

	::System::Void SetTexture_1(::NapMaterialProperty property, ::UnityEngine::Texture* value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURE_1_OFFSET))(this, property, value, index);
	}

	::System::Void SafeSetTexture(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 propertyID, ::UnityEngine::Texture* texture)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NAPRENDERER_SAFESETTEXTURE_OFFSET))(this, mpb, propertyID, texture);
	}

	::System::Void SetTextureScale(::NapMaterialProperty property, ::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURESCALE_OFFSET))(this, property, value);
	}

	::System::Void SetTextureScale_1(::NapMaterialProperty property, ::UnityEngine::Vector2 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURESCALE_1_OFFSET))(this, property, value, index);
	}

	::System::Void SetTextureOffset(::NapMaterialProperty property, ::UnityEngine::Vector2 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTUREOFFSET_OFFSET))(this, property, value, index);
	}

	::System::Void SetTextureOffset_1(::NapMaterialProperty property, ::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTUREOFFSET_1_OFFSET))(this, property, value);
	}

	::System::Void SetVectorArray(::NapMaterialProperty property, ::Il2CppArray<::UnityEngine::Vector4>* value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAY_OFFSET))(this, property, value, index);
	}

	::System::Void SetVectorArray_1(::NapMaterialProperty property, ::Il2CppArray<::UnityEngine::Vector4>* value, ::System::Boolean forceSetMaterialProperty)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAY_1_OFFSET))(this, property, value, forceSetMaterialProperty);
	}

	::System::Single GetFloat(::NapMaterialProperty property)
	{
		return ((::System::Single(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETFLOAT_OFFSET))(this, property);
	}

	::System::Single GetFloat_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::System::Single(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETFLOAT_1_OFFSET))(this, property, index);
	}

	::UnityEngine::Vector4 GetVector(::NapMaterialProperty property)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETVECTOR_OFFSET))(this, property);
	}

	::UnityEngine::Vector4 GetVector_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETVECTOR_1_OFFSET))(this, property, index);
	}

	::UnityEngine::Color GetColor(::NapMaterialProperty property)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETCOLOR_OFFSET))(this, property);
	}

	::UnityEngine::Color GetColor_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETCOLOR_1_OFFSET))(this, property, index);
	}

	::UnityEngine::Texture* GetTexture(::NapMaterialProperty property)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURE_OFFSET))(this, property);
	}

	::UnityEngine::Texture* GetTexture_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURE_1_OFFSET))(this, property, index);
	}

	::UnityEngine::Vector2 GetTextureScale(::NapMaterialProperty property)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURESCALE_OFFSET))(this, property);
	}

	::UnityEngine::Vector2 GetTextureScale_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURESCALE_1_OFFSET))(this, property, index);
	}

	::UnityEngine::Vector2 GetTextureOffset(::NapMaterialProperty property)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::NapMaterialProperty))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTUREOFFSET_OFFSET))(this, property);
	}

	::UnityEngine::Vector2 GetTextureOffset_1(::NapMaterialProperty property, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::NapMaterialProperty, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTUREOFFSET_1_OFFSET))(this, property, index);
	}

	::System::Void SetFlag(::NapRendererFlags flag, ::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::NapRendererFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLAG_OFFSET))(this, flag, value);
	}

	::System::Boolean HasFlag(::NapRendererFlags value)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRendererFlags))((::PBYTE)hIl2Cpp + NAPRENDERER_HASFLAG_OFFSET))(this, value);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_RELEASE_OFFSET))(this);
	}

	static ::System::Boolean FindNapRenderer(::UnityEngine::Renderer* renderer, ::NapRenderer*& napRenderer)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::NapRenderer*&))((::PBYTE)hIl2Cpp + NAPRENDERER_FINDNAPRENDERER_OFFSET))(renderer, napRenderer);
	}

	::System::Void ReplaceInstancedMaterial(::Il2CppArray<::UnityEngine::Material*>* insMats)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NAPRENDERER_REPLACEINSTANCEDMATERIAL_OFFSET))(this, insMats);
	}
};

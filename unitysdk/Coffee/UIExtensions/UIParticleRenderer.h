#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobMeshUpdateState.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererData.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererUpdate.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobTransformSnapshot.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleRenderer_OverrideEntry; }
namespace Coffee::UIExtensions { class UIParticleRenderer_RendererMaterialEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F6D80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x1E2EBD60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYJOBMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E304CC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1E2F6430)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BAKEMESHOLDWAY_OFFSET UNITYSDK_OFFSET(0x1E2FB9A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E2FF110)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1E2FE460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E3065A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBCOMBINEMESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1E305B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1E306250)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CHECKKEYWORDSET_OFFSET UNITYSDK_OFFSET(0x1E2FB660)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F6B50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1E2F43E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARJOBMATERIALUPDATES_OFFSET UNITYSDK_OFFSET(0x1E3054A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1E2F9D50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEJOBSIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E303A20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATERIALJOB_OFFSET UNITYSDK_OFFSET(0x1E306E60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATRIXBOUNDSJOB_OFFSET UNITYSDK_OFFSET(0x1E305AE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CREATEJOBRENDERERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E2EFC10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DISPATCHMATERIALJOB_OFFSET UNITYSDK_OFFSET(0x1E306C40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DODEFERREDJOBUIPARTICLEMATERIALUPDATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E309AC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DOUIPARTICLEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E2FFF90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1E2F4FE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E3072A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMSNAPSHOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E307CE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E302770)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E308370)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E301F10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEROTATION_OFFSET UNITYSDK_OFFSET(0x1E302070)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBRENDERERWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1E3023B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F76F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E2FE1E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1E2F7CB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1E2FEC70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x1E2F9460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E2E5250)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1E2F3040)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1E2F3050)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATEJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E2E6A10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALIDFORJOB_OFFSET UNITYSDK_OFFSET(0x1E301690)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALID_OFFSET UNITYSDK_OFFSET(0x1E2F95B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISJOBRENDERERSCALEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E2EF800)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E2F61F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E2F5870)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E2F56A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E2F51E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E2F5B30)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1E304F70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E2FF7D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E303770)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E303000)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E304430)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATRIX_OFFSET UNITYSDK_OFFSET(0x1E303EC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLESYSTEMCONFIGDATAFORFRAME_OFFSET UNITYSDK_OFFSET(0x1E302D90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPRIMARYSIMULATE_OFFSET UNITYSDK_OFFSET(0x1E308DD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1E303380)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E303680)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMSTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E30A370)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMS_OFFSET UNITYSDK_OFFSET(0x1E2F8C60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REBUILDJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E307600)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1E2F63B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET UNITYSDK_OFFSET(0x1E2F5540)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x1E2F9280)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1E3029B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBTRANSFORMSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1E307040)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHOWNSMOOTHMASKRENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F8670)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHSMOOTHMASKONRENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F8380)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E306F00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E2ED490)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E2ED1F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASEJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E3073E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F47B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x1E2E8860)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEJOBRESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E308820)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E2FA700)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1E2F5F50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1E2F6880)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SCHEDULEMATRIXBOUNDSJOB_OFFSET UNITYSDK_OFFSET(0x1E305890)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETJOBSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1E3056A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPPARTICLERENDERER_OFFSET UNITYSDK_OFFSET(0x1E2FD4E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x1E2E90F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEJOBPREPAREDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E3034D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E2FA190)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1E2FAD50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET UNITYSDK_OFFSET(0x1E2F5170)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYGETJOBTRANSFORMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E2ECAE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYSETCANVASRENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F4010)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E301180)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E300DC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHINNER_OFFSET UNITYSDK_OFFSET(0x1E2FB7B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1E2EB490)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E2EB6B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30A5C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30A590)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E30AB80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E30AB20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E30AB90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E30AC60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E30AC70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E30AC80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E30AC90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1E30AD60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E30ADF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E30AE80)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 34863;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_Renderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290C0);
		}
		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290C8);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot>** StaticGet_s_JobTransformSnapshots()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_OverrideEntry*>** StaticGet_s_OverrideEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_OverrideEntry*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290D8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_JobTransformIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_RendererMaterialEntry*>** StaticGet_s_RendererMaterialEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_RendererMaterialEntry*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290F0);
		}
		static ::Il2CppArray<::UnityEngine::Transform*>** StaticGet_s_JobTransformArray()
		{
			return (::Il2CppArray<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x290F8);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x29100);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_s_JobTransformCacheTransforms()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x29108);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>** StaticGet_s_RequiredStreams()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x29110);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x29118);
		}
		static ::System::Int32* StaticGet__BakeCameraTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8380);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_JobScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8384);
		}
		static ::Unity::Jobs::JobHandle* StaticGet__matrixBoundsJobHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8390);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenSpace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83A0);
		}
		static ::System::Int32* StaticGet__UITransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83A4);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83A8);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83AC);
		}
		static ::System::Int32* StaticGet__CombineMeshMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83B0);
		}
		static ::System::Int32* StaticGet__CanvasMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83B4);
		}
		static ::System::Boolean* StaticGet__init()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83B8);
		}
		static ::System::Boolean* StaticGet_s_JobTransformCacheDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83B9);
		}
		static ::System::Boolean* StaticGet_useJobParticleSystemConfigCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83BA);
		}
		static ::System::Boolean* StaticGet_useJobRefresh()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83BB);
		}
		static ::System::Int32* StaticGet__MultipliedColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83BC);
		}
		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_s_JobTransformAccessArray()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83C0);
		}
		static ::Unity::Jobs::JobHandle* StaticGet__matJobHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83C8);
		}
		static ::System::Int32* StaticGet__ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83D8);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x83DC);
		}
		::UnityEngine::Material* _currentMaterialForRendering; // 0xF8
		::System::Boolean _delay; // 0x100
		::System::Int32 _index; // 0x104
		::System::Boolean _isTrail; // 0x108
		::UnityEngine::Bounds _lastBounds; // 0x10C
		::UnityEngine::Material* _modifiedMaterial; // 0x128
		::Coffee::UIExtensions::UIParticle* _parent; // 0x130
		::UnityEngine::ParticleSystem* _particleSystem; // 0x138
		::System::Int32 _prevParticleCount; // 0x140
		::UnityEngine::Vector3 _prevPsPos; // 0x144
		::UnityEngine::Vector3 _prevScale; // 0x150
		::UnityEngine::Vector2Int _prevScreenSize; // 0x15C
		::System::Boolean _prewarm; // 0x164
		::UnityEngine::ParticleSystemRenderer* _renderer; // 0x168
		::UnityEngine::Material* _rendererMaterial; // 0x170
		::System::Boolean _rendererMaterialAcquired; // 0x178
		::UnityEngine::Material* _rendererSharedAsset; // 0x180
		::UnityEngine::ParticleSystemRenderer* _rendererSharedAssetPsr; // 0x188
		::System::Boolean _lastOptState; // 0x190
		::System::Boolean _initResetKeyword; // 0x191
		::System::Boolean disableOpt; // 0x192
		::System::Boolean _hasClipAncestor; // 0x193
		::System::Boolean _streamsOverridden; // 0x194
		::System::Boolean _lastIsInvalid; // 0x195
		::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState _jobMeshUpdateState; // 0x198
		::Coffee::UIExtensions::UIParticleRenderer_JobRendererData _jobData; // 0x1F8
		::UnityEngine::Matrix4x4 _jobCombineMeshMatrix; // 0x2C0
		::UnityEngine::Bounds _jobBounds; // 0x300
		::System::Boolean _smoothMaskEnabled; // 0x318
		::System::Int32 _jobRendererTransformIndex; // 0x31C
		::System::Int32 _jobParticleTransformIndex; // 0x320
		::System::Int32 _jobCustomSimulationSpaceTransformIndex; // 0x324
		::System::Boolean _jobRendererDirectChild; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		static ::System::Boolean TrySetCanvasRendererMaterial(::UnityEngine::CanvasRenderer* renderer, ::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::CanvasRenderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYSETCANVASRENDERERMATERIAL_OFFSET))(renderer, material);
		}

		::System::Void Reset(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET))(this, index);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void RefreshClipAncestor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET))(this);
		}

		::System::Void ApplyRequiredVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void RestoreVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void CleanupOptStateOnMaterial(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET))(this, m);
		}

		::System::Void AcquireRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void ReleaseRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void CleanupOptState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET))(this);
		}

		static ::Coffee::UIExtensions::UIParticleRenderer* AddRenderer(::Coffee::UIExtensions::UIParticle* parent, ::System::Int32 index)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::Coffee::UIExtensions::UIParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET))(parent, index);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void RefreshSmoothMaskOnRenderMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHSMOOTHMASKONRENDERMATERIAL_OFFSET))(this);
		}

		::System::Void ResolveSmoothMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVESMOOTHMASK_OFFSET))(this);
		}

		::System::Void RefreshOwnSmoothMaskRenderMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHOWNSMOOTHMASKRENDERMATERIAL_OFFSET))(this);
		}

		::System::Void PushSmoothMaskDynamicParams(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMS_OFFSET))(this, mat);
		}

		::System::Boolean GetUIParticleOptState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET))(this);
		}

		::System::Void Set(::Coffee::UIExtensions::UIParticle* parent, ::UnityEngine::ParticleSystem* ps, ::System::Boolean isTrail)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET))(this, parent, ps, isTrail);
		}

		::System::Boolean IsInvalid(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALID_OFFSET))(this, bakeCamera);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARMESH_OFFSET))(this);
		}

		::System::Void SimulateParticles(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEPARTICLES_OFFSET))(this, scale, psPos);
		}

		::System::Void CheckKeywordSet(::System::Boolean enableUIParticleOpt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CHECKKEYWORDSET_OFFSET))(this, enableUIParticleOpt);
		}

		::System::Void UpdateMeshInner(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHINNER_OFFSET))(this, bakeCamera);
		}

		static ::UnityEngine::Bounds GetPsLocalBounds(::UnityEngine::ParticleSystemRenderer* renderer)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPSLOCALBOUNDS_OFFSET))(renderer);
		}

		::UnityEngine::Matrix4x4 CalculateCombineMeshMatrix(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_OFFSET))(this, scale, psPos);
		}

		::UnityEngine::Bounds CalculateBounds(::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEBOUNDS_OFFSET))(this, combineMeshMatrix);
		}

		::System::Void SetUpParticleRenderer(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPPARTICLERENDERER_OFFSET))(this, scale, psPos);
		}

		::System::Void DoUIParticleMaterialUpdate(::UnityEngine::Material* modifiedMaterial, ::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DOUIPARTICLEMATERIALUPDATE_OFFSET))(this, modifiedMaterial, combineMeshMatrix);
		}

		::System::Void BakeMeshOldWay(::UnityEngine::Camera* bakeCamera, ::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos, ::System::Boolean needSetKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BAKEMESHOLDWAY_OFFSET))(this, bakeCamera, scale, psPos, needSetKeywords);
		}

		::System::Void UpdateMesh(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET))(this, bakeCamera);
		}

		::System::Void UpdateParticleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEPARTICLECOUNT_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldMatrix(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET))(this, psPos, scale);
		}

		::System::Void ResolveResolutionChange(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET))(this, psPos, scale);
		}

		::System::Void Simulate(::UnityEngine::Vector3 scale, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET))(this, scale, paused);
		}

		::System::Void UpdateMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Boolean IsInvalidForJob(::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate update)
		{
			return ((::System::Boolean(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALIDFORJOB_OFFSET))(this, update);
		}

		::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate CreateJobRendererUpdate(::UnityEngine::Camera* bakeCamera, ::System::Boolean parentIsValid, ::System::Boolean parentIsReplica, ::System::Boolean visibleScale)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CREATEJOBRENDERERUPDATE_OFFSET))(this, bakeCamera, parentIsValid, parentIsReplica, visibleScale);
		}

		::UnityEngine::Vector3 GetJobParticlePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetJobParticleRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEROTATION_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetJobRendererWorldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBRENDERERWORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetJobCustomSimulationSpacePosition(::UnityEngine::Transform* customSimulationSpace)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACEPOSITION_OFFSET))(this, customSimulationSpace);
		}

		::System::Void RefreshJobParticleSystemConfigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGCACHE_OFFSET))(this);
		}

		::System::Void PrepareJobParticleSystemConfigDataForFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLESYSTEMCONFIGDATAFORFRAME_OFFSET))(this);
		}

		::System::Void RefreshJobParticleSystemConfigData(::System::Boolean cacheForReuse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGDATA_OFFSET))(this, cacheForReuse);
		}

		::System::Boolean IsJobRendererScaleVisible(::UnityEngine::Vector3 visibleBaseScale, ::UnityEngine::Vector3 fallbackScale)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISJOBRENDERERSCALEVISIBLE_OFFSET))(this, visibleBaseScale, fallbackScale);
		}

		::System::Boolean PrepareJobMeshUpdate(::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate update)
		{
			return ((::System::Boolean(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHUPDATE_OFFSET))(this, update);
		}

		::System::Void SimulateJobPreparedParticles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEJOBPREPAREDPARTICLES_OFFSET))(this);
		}

		::System::Void PrepareJobSimulateParticles(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* jobParticleSystems, ::System::Collections::Generic::List_1<::System::Single>* jobParticlesTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_OFFSET))(this, jobParticleSystems, jobParticlesTimes);
		}

		::System::Void PrepareJobMeshComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHCOMPLETE_OFFSET))(this);
		}

		::System::Void PrepareJobParticleRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void ApplyJobMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYJOBMESHUPDATE_OFFSET))(this);
		}

		static ::System::Void ClearJobMaterialUpdates()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARJOBMATERIALUPDATES_OFFSET))();
		}

		static ::System::Void SetJobScreenSize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETJOBSCREENSIZE_OFFSET))(width, height);
		}

		static ::System::Void ScheduleMatrixBoundsJob(::System::Int32 rendererUpdateCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SCHEDULEMATRIXBOUNDSJOB_OFFSET))(rendererUpdateCount);
		}

		static ::System::Void CompleteMatrixBoundsJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATRIXBOUNDSJOB_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 CalculateJobCombineMeshMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData& update)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBCOMBINEMESHMATRIX_OFFSET))(update);
		}

		static ::UnityEngine::Matrix4x4 CalculateJobWorldMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData& update)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBWORLDMATRIX_OFFSET))(update);
		}

		static ::UnityEngine::Bounds CalculateJobBounds(::UnityEngine::Bounds psLocalBounds, ::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBBOUNDS_OFFSET))(psLocalBounds, combineMeshMatrix);
		}

		static ::System::Void DispatchMaterialJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DISPATCHMATERIALJOB_OFFSET))();
		}

		static ::System::Void CompleteMaterialJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATERIALJOB_OFFSET))();
		}

		static ::System::Void RegisterCompleteCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERCOMPLETECALLBACK_OFFSET))();
		}

		static ::System::Void InvalidateJobTransformCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATEJOBTRANSFORMCACHE_OFFSET))();
		}

		static ::System::Void RefreshJobTransformSnapshots(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBTRANSFORMSNAPSHOTS_OFFSET))(activeParticles);
		}

		static ::System::Void EnsureJobTransformCache(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMCACHE_OFFSET))(activeParticles);
		}

		static ::System::Void ReleaseJobTransformCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASEJOBTRANSFORMCACHE_OFFSET))();
		}

		static ::System::Void RebuildJobTransformCache(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REBUILDJOBTRANSFORMCACHE_OFFSET))(activeParticles);
		}

		static ::System::Void EnsureJobTransformSnapshotCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMSNAPSHOTCOUNT_OFFSET))(count);
		}

		static ::System::Int32 RegisterJobTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORM_OFFSET))(transform);
		}

		static ::System::Boolean TryGetJobTransformSnapshot(::System::Int32 index, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot& snapshot)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYGETJOBTRANSFORMSNAPSHOT_OFFSET))(index, snapshot);
		}

		::System::Void RegisterJobTransformCache(::Coffee::UIExtensions::UIParticle* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORMCACHE_OFFSET))(this, parent);
		}

		::UnityEngine::Transform* GetJobCustomSimulationSpaceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACETRANSFORM_OFFSET))(this);
		}

		::System::Void PrepareJobSimulateParticles_1(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_1_OFFSET))(this, state);
		}

		::System::Void ResolveJobResolutionChange(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEJOBRESOLUTIONCHANGE_OFFSET))(this, psPos, scale);
		}

		::System::Void PrepareJobPrimarySimulate(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPRIMARYSIMULATE_OFFSET))(this, state, paused);
		}

		::System::Void CompleteJobSimulateParticles(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEJOBSIMULATEPARTICLES_OFFSET))(this, state);
		}

		::System::Void PrepareJobParticleRendererMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATRIX_OFFSET))(this, state);
		}

		::System::Void PrepareDeferredJobUIParticleMaterialUpdate(::UnityEngine::Material* modifiedMaterial, ::UnityEngine::Matrix4x4& combineMeshMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_OFFSET))(this, modifiedMaterial, combineMeshMatrix);
		}

		::System::Void PrepareDeferredJobUIParticleMaterialUpdate_1(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_1_OFFSET))(this, state);
		}

		::System::Void DoDeferredJobUIParticleMaterialUpdateThreadSafe(::System::Int32 materialInstanceId, ::UnityEngine::Matrix4x4& combineMeshMatrix, ::System::Int32 rendererInstanceId, ::System::Boolean smoothMaskEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DODEFERREDJOBUIPARTICLEMATERIALUPDATETHREADSAFE_OFFSET))(this, materialInstanceId, combineMeshMatrix, rendererInstanceId, smoothMaskEnabled);
		}

		::System::Void PushSmoothMaskDynamicParamsThreadSafe(::System::Int32 materialInstanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMSTHREADSAFE_OFFSET))(this, materialInstanceId);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET))(this);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}

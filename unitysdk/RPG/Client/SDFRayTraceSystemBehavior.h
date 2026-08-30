#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DebugTextureType.h"
#include "unitysdk/RPG/Client/ImportanceSamplingMode.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_219A2BF3D10728EC;
namespace RPG::Client { class SDFRayTraceSystemMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDFF5050)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_01C2298896328163_OFFSET UNITYSDK_OFFSET(0xDFF6D40)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_031F97FA6D7165E4_OFFSET UNITYSDK_OFFSET(0xDFFBC80)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_0558E0A14AC93F07_OFFSET UNITYSDK_OFFSET(0xDFF7A70)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_121DBC5AF71EFB5C_OFFSET UNITYSDK_OFFSET(0xE000930)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0xDFF50D0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_1DABFF6E9BF0807C_OFFSET UNITYSDK_OFFSET(0xE000840)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xDFF5800)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_34E61BA4443450C9_OFFSET UNITYSDK_OFFSET(0xE0004D0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0xDFF5320)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_45C57755BD05C4F5_OFFSET UNITYSDK_OFFSET(0xE007350)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_4D62F5E8AD5F82ED_OFFSET UNITYSDK_OFFSET(0xDFFBEA0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xE0059E0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xDFF2AF0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_506F4A99418671DA_OFFSET UNITYSDK_OFFSET(0xE0058A0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_5869EE4C6C231E27_OFFSET UNITYSDK_OFFSET(0xDFFF330)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0xDFF2E10)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xDFFD860)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6AEE5638B8A8FEA7_OFFSET UNITYSDK_OFFSET(0xE007200)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xDFF5580)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_82B203EB251785F9_OFFSET UNITYSDK_OFFSET(0xDFFCAB0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8CDAB3CD02444FD5_OFFSET UNITYSDK_OFFSET(0xE002430)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0xDFF4F30)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0xDFF2A30)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_90EBEDF1FD14D40C_OFFSET UNITYSDK_OFFSET(0xDFFE680)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_97D0729C9861D94F_OFFSET UNITYSDK_OFFSET(0xDFFFC90)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9954EB12B009C18B_OFFSET UNITYSDK_OFFSET(0xDFFB560)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9B682E90D47788BA_OFFSET UNITYSDK_OFFSET(0xE0037B0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9E950696EDC955E2_OFFSET UNITYSDK_OFFSET(0xE001AF0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_A88235E1D2DF9859_OFFSET UNITYSDK_OFFSET(0xDFFBF80)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xDFF5220)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xE0073A0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0xDFF5B80)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_CCA935C4A7F00103_OFFSET UNITYSDK_OFFSET(0xDFF73F0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0xDFF7060)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D499C9AE13CD6811_OFFSET UNITYSDK_OFFSET(0xE003AA0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D68547FF19A170E2_1_OFFSET UNITYSDK_OFFSET(0xDFFCD50)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0xDFF3CD0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_F2C856547889ED8F_OFFSET UNITYSDK_OFFSET(0xDFF7B10)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_FD38907F7950B2F3_OFFSET UNITYSDK_OFFSET(0xDFF5600)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_FFFB0A674FCA69B1_OFFSET UNITYSDK_OFFSET(0xDFF7380)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0074E0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE007460)

namespace RPG::Client
{
	inline static constexpr unsigned int SDFRayTraceSystemBehavior_TypeDefinitionIndex = 70914;

	class SDFRayTraceSystemBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__zeroCounter()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x1D710);
		}
		static ::System::Int32* StaticGet__GL_SpatialHashValidMaskTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E30);
		}
		static ::System::Int32* StaticGet__VoxelIrradianceNormalOffsetID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E34);
		}
		static ::System::Int32* StaticGet__TaskCounterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E38);
		}
		static ::System::Int32* StaticGet__MaterialNormalTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E3C);
		}
		static ::System::Int32* StaticGet__DebugSDFTilesPerRowID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E40);
		}
		static ::System::Int32* StaticGet__SDFTaskPoolID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E44);
		}
		static ::System::Int32* StaticGet__DebugModeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E48);
		}
		static ::System::Int32* StaticGet__SDFMetaCounterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E4C);
		}
		static ::System::Int32* StaticGet__CardBoundsExpandID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E50);
		}
		static ::System::Int32* StaticGet__MaxRaysPerPixelID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E54);
		}
		static ::System::Int32* StaticGet__GL_BakedSH3ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E58);
		}
		static ::System::Int32* StaticGet__MaterialPBRTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E5C);
		}
		static ::System::Int32* StaticGet__GL_VoxelIndexMappingParamsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E60);
		}
		static ::System::Int32* StaticGet__RayMaterialBufferID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E64);
		}
		static ::System::Int32* StaticGet__RayLightingBufferID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E68);
		}
		static ::System::Int32* StaticGet__CameraPositionWSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E6C);
		}
		static ::System::Int32* StaticGet__DebugSDFBoundsMinID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E70);
		}
		static ::System::Int32* StaticGet__EmitResolutionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E74);
		}
		static ::System::Int32* StaticGet__CardNormalWeightThresholdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E78);
		}
		static ::System::Int32* StaticGet__SDFTextureArrayID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E7C);
		}
		static ::System::Int32* StaticGet__DebugBoundsMinID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E80);
		}
		static ::System::Int32* StaticGet__ES_GradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E84);
		}
		static ::System::Int32* StaticGet__DebugSDFResolutionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E88);
		}
		static ::System::Int32* StaticGet__VoxelLightStrengthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E8C);
		}
		static ::System::Int32* StaticGet__SDFMetaDispatchArgsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E90);
		}
		static ::System::Int32* StaticGet__ThreadGroupSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E94);
		}
		static ::System::Int32* StaticGet__DebugTargetObjectIDID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E98);
		}
		static ::System::Int32* StaticGet__InvViewProjMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9E9C);
		}
		static ::System::Int32* StaticGet__OutputResolutionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EA0);
		}
		static ::System::Int32* StaticGet__VoxelIrradianceRoughnessBiasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EA4);
		}
		static ::System::Int32* StaticGet__RayPoolID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EA8);
		}
		static ::System::Int32* StaticGet__ES_AmbientAtlasHeightID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EAC);
		}
		static ::System::Int32* StaticGet__FrameIndexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EB0);
		}
		static ::System::Int32* StaticGet__GL_FallbackVoxelIndexMappingParamsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EB4);
		}
		static ::System::Int32* StaticGet__RayCapacityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EB8);
		}
		static ::System::Int32* StaticGet__RayCounterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EBC);
		}
		static ::System::Int32* StaticGet__HiZDepthTexture2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EC0);
		}
		static ::System::Int32* StaticGet__DebugSDFAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EC4);
		}
		static ::System::Int32* StaticGet__MinSmoothnessToEmitID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EC8);
		}
		static ::System::Int32* StaticGet__RayDispatchArgsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9ECC);
		}
		static ::System::Int32* StaticGet__MaterialAlbedoTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9ED0);
		}
		static ::System::Int32* StaticGet__HitPositionTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9ED4);
		}
		static ::System::Int32* StaticGet__SSRFilterMaxStepsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9ED8);
		}
		static ::System::Int32* StaticGet__BVHNodeCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EDC);
		}
		static ::System::Int32* StaticGet__SurfaceCardAtlasArrayID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EE0);
		}
		static ::System::Int32* StaticGet__DebugLocalToVolumeScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EE4);
		}
		static ::System::Int32* StaticGet__DebugWorldToLocalID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EE8);
		}
		static ::System::Int32* StaticGet__BVHMaxDepthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EEC);
		}
		static ::System::Int32* StaticGet__RandomSeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EF0);
		}
		static ::System::Int32* StaticGet__ViewMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EF4);
		}
		static ::System::Int32* StaticGet__GL_BakedSH0ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EF8);
		}
		static ::System::Int32* StaticGet__RaySDFMetaID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9EFC);
		}
		static ::System::Int32* StaticGet__DebugSDFDepthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F00);
		}
		static ::System::Int32* StaticGet__SSRMissRayIdsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F04);
		}
		static ::System::Int32* StaticGet__GL_InvValidMaskIdExtentsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F08);
		}
		static ::System::Int32* StaticGet__HitRayCounterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F0C);
		}
		static ::System::Int32* StaticGet__GL_BakedSH2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F10);
		}
		static ::System::Int32* StaticGet__ObjectIDTextureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F14);
		}
		static ::System::Int32* StaticGet__ES_TransitionRateID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F18);
		}
		static ::System::Int32* StaticGet__SurfaceCardInfoArrayID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F1C);
		}
		static ::System::Int32* StaticGet__PixelCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F20);
		}
		static ::System::Int32* StaticGet__PrevViewProjMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F24);
		}
		static ::System::Int32* StaticGet__MaxEyeDepthToEmitID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F28);
		}
		static ::System::Int32* StaticGet__RayMinDistanceBitsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F2C);
		}
		static ::System::Int32* StaticGet__SSRFilterThicknessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		static ::System::Int32* StaticGet__SSRMissDispatchArgsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F34);
		}
		static ::System::Int32* StaticGet__NonJitteredViewProjMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F38);
		}
		static ::System::Int32* StaticGet__SSRMissCounterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F3C);
		}
		static ::System::Int32* StaticGet__ObjectCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F40);
		}
		static ::System::Int32* StaticGet__DebugSDFSliceWidthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F44);
		}
		static ::System::Int32* StaticGet__PixelRayCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F48);
		}
		static ::System::Int32* StaticGet__RelightingResultTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F4C);
		}
		static ::System::Int32* StaticGet__DebugSDFSliceHeightID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F50);
		}
		static ::System::Int32* StaticGet__ES_AmbientColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F54);
		}
		static ::System::Int32* StaticGet__PixelToRayIdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F58);
		}
		static ::System::Int32* StaticGet__RayPixelIndexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F5C);
		}
		static ::System::Int32* StaticGet__ProjMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F60);
		}
		static ::System::Int32* StaticGet__DebugSDFTilesPerColumnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F64);
		}
		static ::System::Int32* StaticGet__DebugLocalToWorldID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F68);
		}
		static ::System::Int32* StaticGet__ES_AmbientIntensityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F6C);
		}
		static ::System::Int32* StaticGet__GL_SpatialHashOffsetTextureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F70);
		}
		static ::System::Int32* StaticGet__GL_BakedSH1ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F74);
		}
		static ::System::Int32* StaticGet__SDFMetaCapacityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F78);
		}
		static ::System::Int32* StaticGet__SceneColorTextureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F7C);
		}
		static ::System::Int32* StaticGet__GL_SpatialHashOffsetDataTableSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F80);
		}
		static ::System::Int32* StaticGet__UseSSRMissID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F84);
		}
		static ::System::Int32* StaticGet__DebugSDFBoundsMaxID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F88);
		}
		static ::System::Int32* StaticGet__DebugBoundsMaxID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F8C);
		}
		static ::System::Int32* StaticGet__DebugLocalToVolumeAddID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F90);
		}
		static ::System::Int32* StaticGet__MaxCardsPerDirectionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F94);
		}
		static ::System::Int32* StaticGet__TaskDispatchArgsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F98);
		}
		static ::System::Int32* StaticGet__CameraDepthTextureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDFRayTraceSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x9F9C);
		}
		// static const ::System::Int32 RAY_POOL_THREAD_COUNT = 0x40; // 0x0
		// static const ::System::UInt32 INVALID_RAY_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 RAY_RECORD_STRIDE = 0x20; // 0x0
		// static const ::System::Int32 SDF_META_STRIDE = 0x10; // 0x0
		// static const ::System::Int32 SDF_TASK_STRIDE = 0x10; // 0x0
		// static const ::System::Int32 RAY_MATERIAL_STRIDE = 0x30; // 0x0
		// static const ::System::Int32 RAY_LIGHTING_STRIDE = 0x10; // 0x0
		// static const ::System::Int32 MAX_RAYS_PER_PIXEL = 0x8; // 0x0
		// static const ::System::Int32 MAX_TASKS_PER_RAY = 0x2; // 0x0
		// static const ::System::Int32 MIN_RAY_POOL_CAPACITY = 0x400; // 0x0
		// static const ::System::Int32 DEBUG_COUNTER_READBACK_INTERVAL = 0xA; // 0x0
		// static const ::System::String* CS_PATH_PREFIX; // 0x0
		::UnityEngine::Texture3D* bakedSH0; // 0x38
		::UnityEngine::Texture3D* bakedSH1; // 0x40
		::UnityEngine::Texture3D* bakedSH2; // 0x48
		::UnityEngine::Texture3D* bakedSH3; // 0x50
		::UnityEngine::Texture3D* spatialHashOffsetTexture; // 0x58
		::UnityEngine::Texture3D* spatialHashValidMaskTex; // 0x60
		::UnityEngine::Vector4 voxelIndexMappingParams; // 0x68
		::UnityEngine::Vector4 spatialHashOffsetDataTableSize; // 0x78
		::UnityEngine::Vector4 fallbackVoxelIndexMappingParams; // 0x88
		::UnityEngine::Vector4 invValidMaskIdExtents; // 0x98
		::UnityEngine::RenderTexture* _hitPositionTex; // 0xA8
		::UnityEngine::RenderTexture* _materialAlbedoTex; // 0xB0
		::UnityEngine::RenderTexture* _materialPBRTex; // 0xB8
		::UnityEngine::RenderTexture* _materialNormalTex; // 0xC0
		::UnityEngine::RenderTexture* _relightingResultTex; // 0xC8
		::UnityEngine::Matrix4x4 _prevViewProjMatrix; // 0xD0
		::System::Boolean _prevViewProjMatrixValid; // 0x110
		::UnityEngine::ComputeBuffer* _rayPoolBuffer; // 0x118
		::UnityEngine::ComputeBuffer* _sdfTaskBuffer; // 0x120
		::UnityEngine::ComputeBuffer* _rayMaterialBuffer; // 0x128
		::UnityEngine::ComputeBuffer* _rayLightingBuffer; // 0x130
		::UnityEngine::ComputeBuffer* _pixelToRayIdBuffer; // 0x138
		::UnityEngine::ComputeBuffer* _pixelRayCountBuffer; // 0x140
		::UnityEngine::ComputeBuffer* _rayPixelIndexBuffer; // 0x148
		::UnityEngine::ComputeBuffer* _rayCounterBuffer; // 0x150
		::UnityEngine::ComputeBuffer* _taskCounterBuffer; // 0x158
		::UnityEngine::ComputeBuffer* _hitRayCounterBuffer; // 0x160
		::UnityEngine::ComputeBuffer* _rayMinDistanceBitsBuffer; // 0x168
		::UnityEngine::ComputeBuffer* _rayDispatchArgsBuffer; // 0x170
		::UnityEngine::ComputeBuffer* _taskDispatchArgsBuffer; // 0x178
		::UnityEngine::ComputeBuffer* _ssrMissRayIdBuffer; // 0x180
		::UnityEngine::ComputeBuffer* _ssrMissCounterBuffer; // 0x188
		::UnityEngine::ComputeBuffer* _ssrMissDispatchArgsBuffer; // 0x190
		::UnityEngine::ComputeBuffer* _raySDFMetaBuffer; // 0x198
		::UnityEngine::ComputeBuffer* _sdfMetaCounterBuffer; // 0x1A0
		::UnityEngine::ComputeBuffer* _sdfMetaDispatchArgsBuffer; // 0x1A8
		::System::Int32 _rayPoolCapacity; // 0x1B0
		::System::Int32 _taskPoolCapacity; // 0x1B4
		::System::Int32 _kernelCountRays; // 0x1B8
		::System::Int32 _kernelInitRayPool; // 0x1BC
		::System::Int32 _kernelInitRayPoolUniform; // 0x1C0
		::System::Int32 _kernelInitRayPoolCosine; // 0x1C4
		::System::Int32 _kernelInitRayPoolGGX; // 0x1C8
		::System::Int32 _kernelInitRayPoolGGXFast; // 0x1CC
		::System::Int32 _kernelInitRayCounters; // 0x1D0
		::System::Int32 _kernelBuildRayDispatchArgs; // 0x1D4
		::System::Int32 _kernelBuildSDFMetaDispatchArgs; // 0x1D8
		::System::Int32 _kernelBVHTraversal; // 0x1DC
		::System::Int32 _kernelBVHTraversalRayPool; // 0x1E0
		::System::Int32 _kernelBuildTaskDispatchArgs; // 0x1E4
		::System::Int32 _kernelBVHTraversalDebug; // 0x1E8
		::System::Int32 _kernelSDFTracing; // 0x1EC
		::System::Int32 _kernelSDFTraceTasks; // 0x1F0
		::System::Int32 _kernelSDFResolve; // 0x1F4
		::System::Int32 _kernelSDFTracingDebug; // 0x1F8
		::System::Int32 _kernelSurfaceCard; // 0x1FC
		::System::Int32 _kernelSurfaceCardRayPool; // 0x200
		::System::Int32 _kernelRelighting; // 0x204
		::System::Int32 _kernelRelightingRayPool; // 0x208
		::System::Int32 _kernelInjectRayLighting; // 0x20C
		::System::Int32 _kernelSSRFilter; // 0x210
		::System::Int32 _kernelCompactSSRMiss; // 0x214
		::System::Int32 _kernelBuildSSRMissArgs; // 0x218
		::UnityEngine::Camera* _mainCamera; // 0x220
		::System::Int32 _currentWidth; // 0x228
		::System::Int32 _currentHeight; // 0x22C
		::System::Int32 _lastDebugUpdateFrame; // 0x230
		::RPG::Client::DebugTextureType _lastDebugTextureType; // 0x234
		::System::Int32 _lastCounterReadbackFrame; // 0x238
		::System::Boolean _counterReadbackPending; // 0x23C
		::UnityEngine::Rendering::AsyncGPUReadbackRequest _rayCountReadback; // 0x240
		::UnityEngine::Rendering::AsyncGPUReadbackRequest _taskCountReadback; // 0x250
		::UnityEngine::Rendering::AsyncGPUReadbackRequest _hitRayCountReadback; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_3_8DF47EF45ABD2A6C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET))(this);
		}

		::System::Void Method_3_19EEA5F0263FDCD2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_19EEA5F0263FDCD2_OFFSET))(this);
		}

		::System::Void Method_3_6F73A40265D5B980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6F73A40265D5B980_OFFSET))(this);
		}

		::System::Void Method_3_FD38907F7950B2F3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_FD38907F7950B2F3_OFFSET))(this, a1);
		}

		::System::Void Method_3_50131F4CF014469C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_50131F4CF014469C_OFFSET))(this);
		}

		::System::Void Method_3_D0DF0505F244B465()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D0DF0505F244B465_OFFSET))(this);
		}

		::System::Void Method_3_01C2298896328163(::Class_1_219A2BF3D10728EC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_219A2BF3D10728EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_01C2298896328163_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeShader* Method_3_FFFB0A674FCA69B1(::System::String* a1)
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_FFFB0A674FCA69B1_OFFSET))(this, a1);
		}

		::System::Void Method_3_64F3965CE4C4DB47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_64F3965CE4C4DB47_OFFSET))(this);
		}

		::System::Void Method_3_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D68547FF19A170E2_OFFSET))(this);
		}

		::System::Void Method_3_CCA935C4A7F00103(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_CCA935C4A7F00103_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F2C856547889ED8F(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_F2C856547889ED8F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9954EB12B009C18B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9954EB12B009C18B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_3_A88235E1D2DF9859(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_A88235E1D2DF9859_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_82B203EB251785F9(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_82B203EB251785F9_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_3_4D62F5E8AD5F82ED(::RPG::Client::ImportanceSamplingMode a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ImportanceSamplingMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_4D62F5E8AD5F82ED_OFFSET))(this, a1);
		}

		::System::Void Method_3_90EBEDF1FD14D40C(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_90EBEDF1FD14D40C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_97D0729C9861D94F(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_219A2BF3D10728EC* a4, ::UnityEngine::ComputeBuffer* a5, ::UnityEngine::ComputeBuffer* a6, ::UnityEngine::RenderTexture* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::Class_1_219A2BF3D10728EC*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_97D0729C9861D94F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_3_5869EE4C6C231E27(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_219A2BF3D10728EC* a4, ::UnityEngine::RenderTexture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::Class_1_219A2BF3D10728EC*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_5869EE4C6C231E27_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_34E61BA4443450C9(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_34E61BA4443450C9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9E950696EDC955E2(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_219A2BF3D10728EC* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::Class_1_219A2BF3D10728EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9E950696EDC955E2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_121DBC5AF71EFB5C(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_219A2BF3D10728EC* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::Class_1_219A2BF3D10728EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_121DBC5AF71EFB5C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_8CDAB3CD02444FD5(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_8CDAB3CD02444FD5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_D499C9AE13CD6811(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D499C9AE13CD6811_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_D68547FF19A170E2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_D68547FF19A170E2_1_OFFSET))(this);
		}

		::System::Void Method_3_0558E0A14AC93F07(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_0558E0A14AC93F07_OFFSET))(this, a1, a2);
		}

		::UnityEngine::RenderTexture* Method_3_506F4A99418671DA(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_506F4A99418671DA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_AE0B725AB77F7E6F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
		}

		::System::Void Method_3_1DABFF6E9BF0807C(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_1DABFF6E9BF0807C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_031F97FA6D7165E4(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_031F97FA6D7165E4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_9B682E90D47788BA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_9B682E90D47788BA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
		}

		::System::Void Method_3_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_3_B76CD5CB3E297DF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* Method_3_6AEE5638B8A8FEA7()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_6AEE5638B8A8FEA7_OFFSET))(this);
		}

		::System::Void Method_3_361C06486F56B4E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_361C06486F56B4E7_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_3_45C57755BD05C4F5()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_45C57755BD05C4F5_OFFSET))(this);
		}

		::System::Void Method_3_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_METHOD_3_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::RPG::Client::SDFRayTraceSystemMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SDFRayTraceSystemMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}

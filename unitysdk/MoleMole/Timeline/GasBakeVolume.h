#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/GasBakeVolume_Struct_2_69E606C7FA677E19.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEEXISTINGVOLUME_OFFSET UNITYSDK_OFFSET(0x152BA7A0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEVOLUME_OFFSET UNITYSDK_OFFSET(0x152B8F00)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_BLURSCATTERLEVEL_OFFSET UNITYSDK_OFFSET(0x152B7AC0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_CALCULATESPOTDIRECTIONPOINTLIGHTS_OFFSET UNITYSDK_OFFSET(0x152B57C0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPOSEFINALCOLOR_OFFSET UNITYSDK_OFFSET(0x152B6200)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEBLURREDEMISSIONVOLUME_OFFSET UNITYSDK_OFFSET(0x152B85D0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEINITIALEMISSIONVOLUME_OFFSET UNITYSDK_OFFSET(0x152B7290)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_EVALSPOTDIRECTIONPOINTLIGHTS_OFFSET UNITYSDK_OFFSET(0x152B4730)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_GENERATEDENSITYLOD_OFFSET UNITYSDK_OFFSET(0x152B41E0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_INITKERNEL_OFFSET UNITYSDK_OFFSET(0x152B3530)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x152BB790)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_223FBB3600E44315_OFFSET UNITYSDK_OFFSET(0x152B4FB0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_50A895BC16CB300F_OFFSET UNITYSDK_OFFSET(0x152B9160)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_5C1D9CE9065DBC99_OFFSET UNITYSDK_OFFSET(0x152B3E40)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_66636C0942A3A511_OFFSET UNITYSDK_OFFSET(0x152BB2D0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_C90D87BC640003E6_OFFSET UNITYSDK_OFFSET(0x152B6E80)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_E00377DCD6A5DDE6_OFFSET UNITYSDK_OFFSET(0x152B6110)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x152B7740)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_ED75E4E7234FB470_OFFSET UNITYSDK_OFFSET(0x152BA9F0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_F1DDFF64125B0A1C_OFFSET UNITYSDK_OFFSET(0x152BB150)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x152BB370)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x152BB330)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x152BB3C0)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_RELEASE_OFFSET UNITYSDK_OFFSET(0x152BAA90)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_RESET_OFFSET UNITYSDK_OFFSET(0x152BB410)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETINPUTVOLUME_OFFSET UNITYSDK_OFFSET(0x152B3800)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETMATERIALTEXTURE_OFFSET UNITYSDK_OFFSET(0x152B9F60)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x152BBB00)
#define MOLEMOLE_TIMELINE_GASBAKEVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x152BB7E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GasBakeVolume_TypeDefinitionIndex = 71008;

	class GasBakeVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_39()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GasBakeVolume_TypeDefinitionIndex)->GetStaticField(0x112D0);
		}
		::UnityEngine::Rendering::CommandBuffer* Field_5_0; // 0x18
		::UnityEngine::ComputeShader* bakeVolumeShader; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* lights; // 0x28
		::System::Boolean useDisabledLight; // 0x30
		::UnityEngine::Vector3 pointLightFalloff; // 0x34
		::System::Single densityScale; // 0x40
		::UnityEngine::Color smokeColor; // 0x44
		::System::Boolean smokeColorByDensity; // 0x54
		::UnityEngine::Gradient* densityColorRamp; // 0x58
		::UnityEngine::Texture2D* Field_5_9; // 0x60
		::UnityEngine::Vector2 densityColorMinMax; // 0x68
		::UnityEngine::Color shadowColor; // 0x70
		::System::Single shadowDensity; // 0x80
		::System::Single ambientLightScale; // 0x84
		::System::Single ambientShadowScale; // 0x88
		::UnityEngine::Cubemap* ambientSkyBox; // 0x90
		::System::Boolean enableScatter; // 0x98
		::System::Single scatterIntensity; // 0x9C
		::UnityEngine::Gradient* scatterColorRamp; // 0xA0
		::UnityEngine::Texture2D* Field_5_19; // 0xA8
		::UnityEngine::Vector2 scatterRampMinMax; // 0xB0
		::System::Boolean enableScatterBlur; // 0xB8
		::System::Int32 scatterBlurSteps; // 0xBC
		::System::Single scatterBlurFallOff; // 0xC0
		::System::Int32 scatterBlurVoxels; // 0xC4
		::System::Boolean enableScatterMask; // 0xC8
		::System::Single scatterMaskCenter; // 0xCC
		::System::Single scatterMaskWidth; // 0xD0
		::System::Boolean enableFire; // 0xD4
		::System::Single fireIntensity; // 0xD8
		::UnityEngine::Gradient* fireColorRamp; // 0xE0
		::UnityEngine::Texture2D* Field_5_31; // 0xE8
		::UnityEngine::Vector2 fireRampMinMax; // 0xF0
		::System::Boolean enableFireMask; // 0xF8
		::System::Single fireMaskCenter; // 0xFC
		::System::Single fireMaskWidth; // 0x100
		::System::Boolean smoothShade; // 0x104
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Light*>* Field_5_37; // 0x108
		::UnityEngine::RenderTexture* Field_5_38; // 0x110
		::Il2CppArray<::UnityEngine::RenderTexture*>* Field_5_40; // 0x118
		::UnityEngine::RenderTexture* Field_5_41; // 0x120
		::UnityEngine::RenderTexture* Field_5_42; // 0x128
		::Il2CppArray<::UnityEngine::RenderTexture*>* Field_5_43; // 0x130
		::Il2CppArray<::UnityEngine::RenderTexture*>* Field_5_44; // 0x138
		::Il2CppArray<::System::Single>* Field_5_45; // 0x140
		::Il2CppArray<::System::Single>* Field_5_46; // 0x148
		::Il2CppArray<::UnityEngine::Vector3Int>* Field_5_47; // 0x150
		::UnityEngine::ComputeBuffer* Field_5_48; // 0x158
		::System::Int32 Field_5_49; // 0x160
		::System::Int32 Field_5_50; // 0x164
		::System::Int32 Field_5_51; // 0x168
		::System::Int32 Field_5_52; // 0x16C
		::System::Int32 Field_5_53; // 0x170
		::System::Int32 Field_5_54; // 0x174
		::System::Int32 Field_5_55; // 0x178
		::System::Int32 Field_5_56; // 0x17C
		::System::Int32 Field_5_57; // 0x180
		::System::Int32 Field_5_58; // 0x184
		::UnityEngine::MaterialPropertyBlock* Field_5_59; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME__CCTOR_OFFSET))();
		}

		::System::Void InitKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_INITKERNEL_OFFSET))(this);
		}

		::System::Void SetInputVolume(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETINPUTVOLUME_OFFSET))(this, a1);
		}

		::System::Void GenerateDensityLOD(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_GENERATEDENSITYLOD_OFFSET))(this, a1);
		}

		::System::Void EvalSpotDirectionPointLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_EVALSPOTDIRECTIONPOINTLIGHTS_OFFSET))(this);
		}

		::System::Void CalculateSpotDirectionPointLights(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_CALCULATESPOTDIRECTIONPOINTLIGHTS_OFFSET))(this, a1);
		}

		::System::Void ComposeFinalColor(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPOSEFINALCOLOR_OFFSET))(this, a1);
		}

		::System::Void ComputeInitialEmissionVolume(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEINITIALEMISSIONVOLUME_OFFSET))(this, a1);
		}

		::System::Void BlurScatterLevel(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BLURSCATTERLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void ComputeBlurredEmissionVolume(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_COMPUTEBLURREDEMISSIONVOLUME_OFFSET))(this, a1);
		}

		::System::Void BakeVolume(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEVOLUME_OFFSET))(this, a1);
		}

		::System::Void BakeExistingVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_BAKEEXISTINGVOLUME_OFFSET))(this);
		}

		::System::Void SetMaterialTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_SETMATERIALTEXTURE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_RELEASE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_RESET_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_C90D87BC640003E6(::UnityEngine::Texture2D*& a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*&, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_C90D87BC640003E6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_50A895BC16CB300F(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_50A895BC16CB300F_OFFSET))(this, a1);
		}

		::System::Void Method_5_F1DDFF64125B0A1C(::UnityEngine::RenderTexture*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_F1DDFF64125B0A1C_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* Method_5_5C1D9CE9065DBC99(::UnityEngine::RenderTexture* a1, ::UnityEngine::Vector3Int a2, ::UnityEngine::RenderTextureFormat a3, ::UnityEngine::RenderTextureReadWrite a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3Int, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_5C1D9CE9065DBC99_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Single>* Method_5_E00377DCD6A5DDE6(::UnityEngine::Vector3 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_E00377DCD6A5DDE6_OFFSET))(this, a1);
		}

		::System::Void Method_5_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_ED65AE7582736594_OFFSET))(this);
		}

		::MoleMole::Timeline::GasBakeVolume_Struct_2_69E606C7FA677E19 Method_5_223FBB3600E44315(::UnityEngine::Light* a1)
		{
			return ((::MoleMole::Timeline::GasBakeVolume_Struct_2_69E606C7FA677E19(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_223FBB3600E44315_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_5_ED75E4E7234FB470(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_ED75E4E7234FB470_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_66636C0942A3A511(::UnityEngine::ComputeBuffer*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GASBAKEVOLUME_METHOD_5_66636C0942A3A511_OFFSET))(this, a1);
		}
	};
}

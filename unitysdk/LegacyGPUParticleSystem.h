#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LegacyGPUParticleSystem_DeltaTimeMode.h"
#include "unitysdk/LegacyGPUParticleSystem_EmitterShape.h"
#include "unitysdk/LegacyGPUParticleSystem_ParticleType.h"
#include "unitysdk/LegacyGPUParticleSystem_ScalingMode.h"
#include "unitysdk/LegacyGPUParticleSystem_SkinMeshDataType.h"
#include "unitysdk/LegacyGPUParticleSystem_VertexInputType.h"
#include "unitysdk/RefGPUParticleSystem_CollisionType.h"
#include "unitysdk/RefGPUParticleSystem_CurveMode.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleBlendMode.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleSystemState.h"
#include "unitysdk/RefGPUParticleSystem_GPUSimulationSpace.h"
#include "unitysdk/RefGPUParticleSystem_MeshBakeType.h"
#include "unitysdk/RefGPUParticleSystem_RenderTexturePrecision.h"
#include "unitysdk/RefGPUParticleSystem_TextureSheetMode.h"
#include "unitysdk/RefGPUParticleSystem_TurbulenceType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Attractor;
class ColorGradientBundle;
class FloatCurveBundle;
class RefGPUParticleSystemBuffer;
class RefGPUParticleSystemBurst;
class ShaderCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class BezierCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define LEGACYGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1ABD0280)
#define LEGACYGPUPARTICLESYSTEM_ADDBURST_OFFSET UNITYSDK_OFFSET(0x1ABCEF60)
#define LEGACYGPUPARTICLESYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ABC2BA0)
#define LEGACYGPUPARTICLESYSTEM_BAKEBEZIERCURVE_OFFSET UNITYSDK_OFFSET(0x1ABC5450)
#define LEGACYGPUPARTICLESYSTEM_CALCULATEROTATEEXTENTS_OFFSET UNITYSDK_OFFSET(0x1ABCAAD0)
#define LEGACYGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1ABC2590)
#define LEGACYGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET UNITYSDK_OFFSET(0x1ABCD1A0)
#define LEGACYGPUPARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0x1ABCD190)
#define LEGACYGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1ABCEB00)
#define LEGACYGPUPARTICLESYSTEM_GETWSBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ABD33D0)
#define LEGACYGPUPARTICLESYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ABC6410)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1ABC6B90)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_1_OFFSET UNITYSDK_OFFSET(0x1ABD2FC0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_2_OFFSET UNITYSDK_OFFSET(0x1ABD3180)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x1ABD2E10)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x1ABC1F70)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x1ABC6C40)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1ABC6A00)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x1ABC3270)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1ABC6DC0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1ABC37B0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x1ABC7250)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x1ABC3970)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1ABC9820)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_A9DAF3FE2888211B_1_OFFSET UNITYSDK_OFFSET(0x1ABC3AF0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1ABC3BD0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_AC7828729159F6C6_OFFSET UNITYSDK_OFFSET(0x1ABC2980)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x1ABC1860)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x1ABC6EA0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_C1275094A3E8D145_OFFSET UNITYSDK_OFFSET(0x1ABC65C0)
#define LEGACYGPUPARTICLESYSTEM_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x1ABC6930)
#define LEGACYGPUPARTICLESYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ABC31E0)
#define LEGACYGPUPARTICLESYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ABC2500)
#define LEGACYGPUPARTICLESYSTEM_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1ABD3A30)
#define LEGACYGPUPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ABC1370)
#define LEGACYGPUPARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x1ABC6F50)
#define LEGACYGPUPARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1ABC2460)
#define LEGACYGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1ABC1610)
#define LEGACYGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1ABC4BC0)
#define LEGACYGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1ABD01E0)
#define LEGACYGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1ABD04D0)
#define LEGACYGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET UNITYSDK_OFFSET(0x1ABCF040)
#define LEGACYGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1ABC9AF0)
#define LEGACYGPUPARTICLESYSTEM_RESEED_OFFSET UNITYSDK_OFFSET(0x1ABC2ED0)
#define LEGACYGPUPARTICLESYSTEM_RESETSEED_OFFSET UNITYSDK_OFFSET(0x1ABCEB30)
#define LEGACYGPUPARTICLESYSTEM_RESTART_OFFSET UNITYSDK_OFFSET(0x1ABC71E0)
#define LEGACYGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD0370)
#define LEGACYGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1ABD1290)
#define LEGACYGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET UNITYSDK_OFFSET(0x1ABC3F00)
#define LEGACYGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET UNITYSDK_OFFSET(0x1ABD0CC0)
#define LEGACYGPUPARTICLESYSTEM_SETCURVEPOINTDATA_OFFSET UNITYSDK_OFFSET(0x1ABD36B0)
#define LEGACYGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD2350)
#define LEGACYGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD2200)
#define LEGACYGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET UNITYSDK_OFFSET(0x1ABD28A0)
#define LEGACYGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET UNITYSDK_OFFSET(0x1ABD2790)
#define LEGACYGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABC5A60)
#define LEGACYGPUPARTICLESYSTEM_SETLAYER_OFFSET UNITYSDK_OFFSET(0x1ABD3340)
#define LEGACYGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x1ABC3CB0)
#define LEGACYGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET UNITYSDK_OFFSET(0x1ABCFE60)
#define LEGACYGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD1760)
#define LEGACYGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABC37C0)
#define LEGACYGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD23D0)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD1E80)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD1D30)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET UNITYSDK_OFFSET(0x1ABD1C70)
#define LEGACYGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD2180)
#define LEGACYGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD2030)
#define LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABC5B00)
#define LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABCDA50)
#define LEGACYGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD19F0)
#define LEGACYGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD1F00)
#define LEGACYGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1ABC2430)
#define LEGACYGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABCF0C0)
#define LEGACYGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABCFB80)
#define LEGACYGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1ABC5D70)
#define LEGACYGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABCF4D0)
#define LEGACYGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABD17E0)
#define LEGACYGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ABC3D50)
#define LEGACYGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET UNITYSDK_OFFSET(0x1ABD29B0)
#define LEGACYGPUPARTICLESYSTEM_SETWAVEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ABC62A0)
#define LEGACYGPUPARTICLESYSTEM_SETZBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABD11F0)
#define LEGACYGPUPARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0x1ABC2550)
#define LEGACYGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET UNITYSDK_OFFSET(0x1ABC96B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1ABC9190)
#define LEGACYGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1ABC9A20)
#define LEGACYGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC97E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET UNITYSDK_OFFSET(0x1ABD0E40)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1ABC90A0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC3FA0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATASTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1ABCD930)
#define LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1ABC8950)
#define LEGACYGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET UNITYSDK_OFFSET(0x1ABD0EB0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET UNITYSDK_OFFSET(0x1ABC8300)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABC40E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET UNITYSDK_OFFSET(0x1ABC8120)
#define LEGACYGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC9AB0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1ABC9430)
#define LEGACYGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1ABC8890)
#define LEGACYGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET UNITYSDK_OFFSET(0x1ABD1FA0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC99E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ABD0B30)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD0550)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1ABD1BE0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD1B30)
#define LEGACYGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1ABC95C0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1ABD1000)
#define LEGACYGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1ABD1140)
#define LEGACYGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABCF640)
#define LEGACYGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC8A20)
#define LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABD2C50)
#define LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERTEXTURES_OFFSET UNITYSDK_OFFSET(0x1ABCB540)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET UNITYSDK_OFFSET(0x1ABC85E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET UNITYSDK_OFFSET(0x1ABCD8B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET UNITYSDK_OFFSET(0x1ABC85A0)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1ABD2520)
#define LEGACYGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1ABD1A70)
#define LEGACYGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1ABC9510)
#define LEGACYGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET UNITYSDK_OFFSET(0x1ABD2600)
#define LEGACYGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET UNITYSDK_OFFSET(0x1ABC3E60)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET UNITYSDK_OFFSET(0x1ABD01B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET UNITYSDK_OFFSET(0x1ABC58F0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1ABC5850)
#define LEGACYGPUPARTICLESYSTEM_UPDATEWAVESIM_OFFSET UNITYSDK_OFFSET(0x1ABCE410)
#define LEGACYGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1ABC6650)
#define LEGACYGPUPARTICLESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABD60C0)
#define LEGACYGPUPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD3CC0)

inline static constexpr unsigned int LegacyGPUParticleSystem_TypeDefinitionIndex = 40527;

class LegacyGPUParticleSystem : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Shader** StaticGet_gpuPResetMetaBuffer()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F770);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPResetPosBuffer()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F778);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPSkinMeshPosPoint()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F780);
	}
	static ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>** StaticGet_instanceList()
	{
		return (::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F788);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPDefault()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F790);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPSkinMeshPos()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F798);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPMeta()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F7A0);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPVelocity()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F7A8);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPPosition()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F7B0);
	}
	static ::UnityEngine::Shader** StaticGet_gpuPSpawner()
	{
		return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0x4F7B8);
	}
	static ::System::Int32* StaticGet_Field_5_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF750);
	}
	static ::System::Int32* StaticGet_Field_5_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF754);
	}
	static ::System::Int32* StaticGet_Field_5_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF758);
	}
	static ::System::Int32* StaticGet_Field_5_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF75C);
	}
	static ::System::Int32* StaticGet_Field_5_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF760);
	}
	static ::System::Int32* StaticGet_Field_5_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF764);
	}
	static ::System::Single* StaticGet_maxNormalRatio()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF768);
	}
	static ::System::Int32* StaticGet_Field_5_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF76C);
	}
	static ::System::Int32* StaticGet_Field_5_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF770);
	}
	static ::System::Int32* StaticGet_Field_5_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF774);
	}
	static ::System::Int32* StaticGet_Field_5_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF778);
	}
	static ::System::Int32* StaticGet_Field_5_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF77C);
	}
	static ::System::Int32* StaticGet_Field_5_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF780);
	}
	static ::System::Int32* StaticGet_Field_5_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF784);
	}
	static ::System::Int32* StaticGet_Field_5_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF788);
	}
	static ::System::Int32* StaticGet_Field_5_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF78C);
	}
	static ::System::Int32* StaticGet_Field_5_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF790);
	}
	static ::System::Int32* StaticGet_Field_5_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF794);
	}
	static ::System::Int32* StaticGet_Field_5_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF798);
	}
	static ::System::Int32* StaticGet_Field_5_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF79C);
	}
	static ::System::Int32* StaticGet_Field_5_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7A0);
	}
	static ::System::Int32* StaticGet_Field_5_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7A4);
	}
	static ::System::Int32* StaticGet_Field_5_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7A8);
	}
	static ::System::Int32* StaticGet_Field_5_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7AC);
	}
	static ::System::Int32* StaticGet_Field_5_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7B0);
	}
	static ::System::Int32* StaticGet_Field_5_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7B4);
	}
	static ::System::Int32* StaticGet_Field_5_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7B8);
	}
	static ::System::Int32* StaticGet_Field_5_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7BC);
	}
	static ::System::Int32* StaticGet_Field_5_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7C0);
	}
	static ::System::Int32* StaticGet_Field_5_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7C4);
	}
	static ::System::Int32* StaticGet_Field_5_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7C8);
	}
	static ::System::Int32* StaticGet_Field_5_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7CC);
	}
	static ::System::Int32* StaticGet_Field_5_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7D0);
	}
	static ::System::Int32* StaticGet_Field_5_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7D4);
	}
	static ::System::Int32* StaticGet_Field_5_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7D8);
	}
	static ::System::Int32* StaticGet_Field_5_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7DC);
	}
	static ::System::Int32* StaticGet_Field_5_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7E0);
	}
	static ::System::Int32* StaticGet_Field_5_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7E4);
	}
	static ::System::Int32* StaticGet_Field_5_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7E8);
	}
	static ::System::UInt32* StaticGet_instanceNum()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7EC);
	}
	static ::System::Int32* StaticGet_Field_5_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7F0);
	}
	static ::System::Int32* StaticGet_Field_5_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7F4);
	}
	static ::System::Int32* StaticGet_Field_5_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LegacyGPUParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF7F8);
	}
	// static const ::System::String* Field_5_53; // 0x0
	// static const ::System::Int32 Field_5_54 = 0x100; // 0x0
	::UnityEngine::Shader* pDefault; // 0x18
	::UnityEngine::Shader* pSkinMeshPosPoint; // 0x20
	::UnityEngine::Shader* pSkinMeshPos; // 0x28
	::UnityEngine::Shader* pVelocity; // 0x30
	::UnityEngine::Shader* pPosition; // 0x38
	::UnityEngine::Shader* pResetPosBuffer; // 0x40
	::UnityEngine::Shader* pResetMetaBuffer; // 0x48
	::UnityEngine::Shader* pSpawner; // 0x50
	::UnityEngine::Shader* pMeta; // 0x58
	::UnityEngine::GameObject* Field_5_64; // 0x60
	::System::Single maxMemberRatio; // 0x68
	::System::Boolean positionAlongNormal; // 0x6C
	::System::Int32 maxParticles; // 0x70
	::System::Int32 meshEmitterResolution; // 0x74
	::RefGPUParticleSystem_MeshBakeType meshBakeType; // 0x78
	::UnityEngine::SkinnedMeshRenderer* meshEmitterBakeSource; // 0x80
	::UnityEngine::Mesh* meshEmitter; // 0x88
	::UnityEngine::Mesh* meshParticle; // 0x90
	::LegacyGPUParticleSystem_EmitterShape emitterShape; // 0x98
	::System::Int32 renderQueue; // 0x9C
	::System::Int32 bufferWidth; // 0xA0
	::System::Int32 bufferHeight; // 0xA4
	::LegacyGPUParticleSystem_ParticleType particleType; // 0xA8
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem_VertexInputType>* vertexStreamList; // 0xB0
	::UnityEngine::Material* particleMaterial; // 0xB8
	::RefGPUParticleSystemBuffer* particleData; // 0xC0
	::RefGPUParticleSystem_GPUSimulationSpace simulationSpace; // 0xC8
	::System::Single simulationSpeed; // 0xCC
	::UnityEngine::Vector3 center; // 0xD0
	::UnityEngine::Vector3 extents; // 0xDC
	::UnityEngine::Vector3 transformExtents; // 0xE8
	::System::Boolean optimizeUpdate; // 0xF4
	::System::Int32 OrderLayerID; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_88; // 0x100
	::RefGPUParticleSystem_RenderTexturePrecision precision; // 0x108
	::System::Boolean autoRandomSeed; // 0x10C
	::System::Int32 seed; // 0x110
	::System::Boolean waveInteraction; // 0x114
	::LegacyGPUParticleSystem_DeltaTimeMode deltaTimeMode; // 0x118
	::LegacyGPUParticleSystem_ScalingMode scalingMode; // 0x11C
	::System::Boolean useFixedDeltaTime; // 0x120
	::System::Single fixedDeltaTime; // 0x124
	::System::Single timeScale; // 0x128
	::RefGPUParticleSystem_GPUParticleSystemState state; // 0x12C
	::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* Field_5_99; // 0x130
	::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* bursts; // 0x138
	::System::Single progress; // 0x140
	::System::Single Field_5_102; // 0x144
	::System::Single effectLength; // 0x148
	::System::Boolean loop; // 0x14C
	::ColorGradientBundle* startColorBundle; // 0x150
	::ColorGradientBundle* colorOverLifetime; // 0x158
	::UnityEngine::Texture2D* Field_5_107; // 0x160
	::System::Boolean emit; // 0x168
	::UnityEngine::Vector4 metaBufConfig; // 0x16C
	::System::Boolean startRotation3D; // 0x17C
	::System::Single startDelay; // 0x180
	::UnityEngine::Color startColor; // 0x184
	::FloatCurveBundle* emissionRate; // 0x198
	::FloatCurveBundle* startLifetime; // 0x1A0
	::FloatCurveBundle* startSize; // 0x1A8
	::FloatCurveBundle* startSize2; // 0x1B0
	::FloatCurveBundle* startSize3; // 0x1B8
	::FloatCurveBundle* customData1x; // 0x1C0
	::FloatCurveBundle* customData1y; // 0x1C8
	::FloatCurveBundle* customData1z; // 0x1D0
	::FloatCurveBundle* customData1w; // 0x1D8
	::FloatCurveBundle* customData2x; // 0x1E0
	::FloatCurveBundle* customData2y; // 0x1E8
	::FloatCurveBundle* customData2z; // 0x1F0
	::FloatCurveBundle* customData2w; // 0x1F8
	::FloatCurveBundle* startSpeed; // 0x200
	::FloatCurveBundle* startRotation; // 0x208
	::FloatCurveBundle* gravityModifier; // 0x210
	::System::Single Field_5_129; // 0x218
	::System::Single Field_5_130; // 0x21C
	::System::Int32 Field_5_131; // 0x220
	::System::Single customTime; // 0x224
	::System::Single absCustomTime; // 0x228
	::System::Single Field_5_134; // 0x22C
	::System::Single Field_5_135; // 0x230
	::System::Single Field_5_136; // 0x234
	::UnityEngine::GameObject* Field_5_137; // 0x238
	::UnityEngine::Bounds Field_5_138; // 0x240
	::Il2CppArray<::UnityEngine::GameObject*>* Field_5_139; // 0x258
	::Il2CppArray<::UnityEngine::MeshFilter*>* Field_5_140; // 0x260
	::Il2CppArray<::UnityEngine::MeshRenderer*>* Field_5_141; // 0x268
	::UnityEngine::Texture2D* meshEmitterPositionTexture; // 0x270
	::UnityEngine::Texture2D* meshEmitterNormalTexture; // 0x278
	::UnityEngine::MeshFilter* meshFilterEmitter; // 0x280
	::UnityEngine::Transform* skinnedMeshEmitterTransform; // 0x288
	::SingleFloatCurveBundle* gravity; // 0x290
	::RefGPUParticleSystem_TurbulenceType noiseType; // 0x298
	::UnityEngine::TextAsset* fgaFile; // 0x2A0
	::UnityEngine::Texture3D* vectorField; // 0x2A8
	::UnityEngine::Texture2D* vectorNoise; // 0x2B0
	::System::Single Tightness; // 0x2B8
	::System::Boolean noiseAmplitudeAlongNormal; // 0x2BC
	::Vector3CurveBundle* turbulenceAmplitude; // 0x2C0
	::Vector3CurveBundle* turbulenceFrequency; // 0x2C8
	::Vector3CurveBundle* turbulenceOffset; // 0x2D0
	::Vector3CurveBundle* turbulenceRotation; // 0x2D8
	::UnityEngine::Transform* vectorFieldObject; // 0x2E0
	::System::Boolean useRotation; // 0x2E8
	::ShaderCurveBundle* sizeOverLifetime; // 0x2F0
	::ShaderCurveBundle* rotationOverLifetime; // 0x2F8
	::SingleFloatCurveBundle* colorIntensityOverLifetime; // 0x300
	::SingleFloatCurveBundle* maxVelocity; // 0x308
	::SingleFloatCurveBundle* airResistance; // 0x310
	::Vector3CurveBundle* forceOverLifetime; // 0x318
	::System::Boolean useMaxVelocity; // 0x320
	::System::Boolean useCircularForce; // 0x321
	::Vector3CurveBundle* circularForce; // 0x328
	::System::Collections::Generic::List_1<::Attractor*>* attractors; // 0x330
	::SingleFloatCurveBundle* inheritVelocityMultiplyer; // 0x338
	::SingleFloatCurveBundle* meshTargetStrength; // 0x340
	::SingleFloatCurveBundle* onTarget; // 0x348
	::System::Boolean useMeshTarget; // 0x350
	::System::Boolean useMeshFilter; // 0x351
	::System::Boolean targetIsSameMeshAsEmitter; // 0x352
	::UnityEngine::Mesh* meshTarget; // 0x358
	::UnityEngine::MeshFilter* meshFilterTarget; // 0x360
	::UnityEngine::Texture2D* meshTargetPositionTexture; // 0x368
	::System::Int32 meshTargetResolution; // 0x370
	::RefGPUParticleSystem_MeshBakeType targetBakeType; // 0x374
	::UnityEngine::Camera* collisionCamera; // 0x378
	::RefGPUParticleSystem_CollisionType collisionType; // 0x380
	::UnityEngine::Transform* collisionCameraTransform; // 0x388
	::System::Single depthCollisionDamping; // 0x390
	::System::Single dampingRandomness; // 0x394
	::System::Single depthCollisionDistance; // 0x398
	::UnityEngine::Vector3 offset; // 0x39C
	::System::Boolean useZbuffer; // 0x3A8
	::RefGPUParticleSystem_GPUParticleBlendMode blendMode; // 0x3AC
	::UnityEngine::Texture2D* mainTexture; // 0x3B0
	::UnityEngine::Texture2D* mainTexture2; // 0x3B8
	::UnityEngine::Texture2D* motionVectors; // 0x3C0
	::System::Single aspectRatio; // 0x3C8
	::System::Single metallic; // 0x3CC
	::System::Single smoothness; // 0x3D0
	::UnityEngine::Texture2D* normalMap; // 0x3D8
	::UnityEngine::Texture2D* emissionMap; // 0x3E0
	::UnityEngine::Texture2D* metallicSmoothness; // 0x3E8
	::UnityEngine::Texture2D* refractionNormals; // 0x3F0
	::System::Single motionVectorStrength; // 0x3F8
	::System::Single indexOfRefraction; // 0x3FC
	::System::Single stretchMultiplier; // 0x400
	::UnityEngine::Vector2 minMaxStretch; // 0x404
	::System::Boolean receiveShadows; // 0x40C
	::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x410
	::System::Single followSpeed; // 0x414
	::System::Int32 skinnedMeshEmitterResolution; // 0x418
	::UnityEngine::SkinnedMeshRenderer* skinnedMeshEmitter; // 0x420
	::RPG::Client::BezierCurve* bezierCurve; // 0x428
	::BansheeGz::BGSpline::Curve::BGCurve* bgCurve; // 0x430
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* curvePointList; // 0x438
	::System::Int32 posUVRandom; // 0x440
	::System::Int32 posUVReverse; // 0x444
	::System::Single debugPointSize; // 0x448
	::UnityEngine::Texture2D* Field_5_214; // 0x450
	::UnityEngine::SkinnedMeshRenderer* Field_5_215; // 0x458
	::UnityEngine::Camera* skinnedMeshEmitterCam; // 0x460
	::UnityEngine::Transform* skinnedMeshEmitterCamTransform; // 0x468
	::LegacyGPUParticleSystem_SkinMeshDataType skinMeshDataType; // 0x470
	::UnityEngine::Material* Field_5_219; // 0x478
	::UnityEngine::RenderTexture* Field_5_220; // 0x480
	::UnityEngine::RenderTexture* Field_5_221; // 0x488
	::UnityEngine::RenderTexture* Field_5_222; // 0x490
	::UnityEngine::RenderTexture* Field_5_223; // 0x498
	::UnityEngine::Mesh* skinnedMeshEmitterConvertedMesh; // 0x4A0
	::System::Boolean playOnAwake; // 0x4A8
	::System::Single param2; // 0x4AC
	::System::Single param3; // 0x4B0
	::System::Single param4; // 0x4B4
	::System::Single randomness; // 0x4B8
	::System::Boolean emitFromShell; // 0x4BC
	::System::Boolean emitFromBase; // 0x4BD
	::UnityEngine::Transform* circularForceCenter; // 0x4C0
	::System::Boolean useInheritVelocity; // 0x4C8
	::System::Single inheritVelocity; // 0x4CC
	::RefGPUParticleSystem_TextureSheetMode textureSheetMode; // 0x4D0
	::System::Boolean textureSheetRandomIndex; // 0x4D4
	::System::Int32 rows; // 0x4D8
	::System::Int32 columns; // 0x4DC
	::Il2CppArray<::UnityEngine::Vector4>* planePositions; // 0x4E0
	::Il2CppArray<::UnityEngine::Vector4>* planeNormals; // 0x4E8
	::Il2CppArray<::UnityEngine::Transform*>* planes; // 0x4F0
	::Il2CppArray<::System::Single>* collisionDamping; // 0x4F8
	::UnityEngine::Vector3 forwardVector; // 0x500
	::UnityEngine::Vector3 Field_5_244; // 0x50C
	::System::Boolean ForcesTab; // 0x518
	::System::Boolean timeOffset; // 0x519
	::System::Boolean Field_5_247; // 0x51A
	::System::Single param1; // 0x51C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_5_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_672D56D99D734395_OFFSET))(this);
	}

	::System::Void Method_5_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_5_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_LATEUPDATE_OFFSET))(this);
	}

	::System::Void ReSeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESEED_OFFSET))(this);
	}

	::System::Void Play()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PLAY_OFFSET))(this);
	}

	::System::Void Pause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PAUSE_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_STOP_OFFSET))(this);
	}

	::System::Void Restart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESTART_OFFSET))(this);
	}

	::System::Void Method_5_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_5_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void SetWaveInteraction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETWAVEINTERACTION_OFFSET))(this);
	}

	::System::Void UpdateStartSpeedAndLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET))(this);
	}

	::System::Void Method_5_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_5_AC7828729159F6C6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_AC7828729159F6C6_OFFSET))(this);
	}

	::System::Void SetRenderQueue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET))(this);
	}

	::System::Void SetSimulationSpace()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET))(this);
	}

	::System::Void UpdateEmitterTexture(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET))(this, a1);
	}

	::System::Void SetLightMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET))(this);
	}

	::System::Void PrepareParticleData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET))(this);
	}

	::System::Void ClearParticleData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET))(this);
	}

	::System::Void Method_5_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_5_A9DAF3FE2888211B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_A9DAF3FE2888211B_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_5_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_5_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_5_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_5_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_64F3965CE4C4DB47_OFFSET))(this);
	}

	::System::Void Emit(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EMIT_OFFSET))(this, a1);
	}

	::System::Void EmitNumParticles(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET))(this, a1);
	}

	::System::Void Method_5_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void SetEmitterShapeKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET))(this);
	}

	::System::Void UpdateStartSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET))(this);
	}

	::System::Void UpdateCustomDataStartValue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATASTARTVALUE_OFFSET))(this);
	}

	::System::Void SetParticleTypeKeyword(::LegacyGPUParticleSystem_ParticleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetParticleTypeVector(::LegacyGPUParticleSystem_ParticleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEVECTOR_OFFSET))(this, a1);
	}

	::System::Void UpdateEmitterMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET))(this);
	}

	::System::Void UpdateGravity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET))(this);
	}

	::System::Void UpdateColorOverLifeTime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET))(this);
	}

	::System::Void SetTurbulenceKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET))(this);
	}

	::System::Void UpdateTurbulenceTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET))(this);
	}

	::System::Void UpdateVectorField()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET))(this);
	}

	::System::Void UpdateVectorFieldMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET))(this);
	}

	::System::Void UpdateAmplitude()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET))(this);
	}

	::System::Void UpdateFrequency()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET))(this);
	}

	::System::Void UpdateWaveSim(::UnityEngine::Texture* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector4 a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEWAVESIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void UpdateTightness()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET))(this);
	}

	::System::Void UpdateOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET))(this);
	}

	::System::Void ForceRecreateParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET))(this);
	}

	::System::Void ResetSeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESETSEED_OFFSET))(this);
	}

	::System::Void AddBurst()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ADDBURST_OFFSET))(this);
	}

	::System::Void RemoveLastBurst()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET))(this);
	}

	::System::Void SetRotationKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET))(this);
	}

	::System::Void UpdateStartSizeAndRotation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET))(this);
	}

	::System::Void UpdateCustomData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATA_OFFSET))(this);
	}

	::System::Void UpdateSizeOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void SetSizeOverLifetimeKeyword(::RefGPUParticleSystem_CurveMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void UpdateRotationOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET))(this);
	}

	::System::Void SetRotationOverLifetimeKeyword(::RefGPUParticleSystem_CurveMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void UpdateColorIntensity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET))(this);
	}

	::System::Void UpdateAirResistance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET))(this);
	}

	::System::Void UpdateForceOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void SetLimitVelocity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET))(this);
	}

	::System::Void UpdateMaxVelocityOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET))(this);
	}

	::System::Void SetCircularForce()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET))(this);
	}

	::System::Void UpdateCircularForceOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateVectorfieldFile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET))(this);
	}

	::System::Void RemoveAttractor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET))(this, a1);
	}

	::System::Void AddAttractor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET))(this);
	}

	::System::Void SetAttractorKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET))(this);
	}

	::System::Void RemoveLastAttractor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET))(this);
	}

	::System::Void UpdateMeshTargetTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET))(this);
	}

	::System::Void UpdateMeshTargetParameters()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET))(this);
	}

	::System::Void SetCollisionType()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET))(this);
	}

	::System::Void UpdateCollisionCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET))(this);
	}

	::System::Void UpdateDepthCollisionValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET))(this);
	}

	::System::Void UpdateParticleTypeKeywords()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET))(this);
	}

	::System::Void UpdatePositionOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET))(this);
	}

	::System::Void SetZBuffer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETZBUFFER_OFFSET))(this);
	}

	::System::Void SetBlendMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET))(this);
	}

	::System::Void SetMainTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET))(this);
	}

	::System::Void SetMainTextureKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET))(this, a1);
	}

	::System::Void UpdateAspectRatio()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET))(this);
	}

	::System::Void SetTextureSheetKeyword(::RefGPUParticleSystem_TextureSheetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_TextureSheetMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetRandomIndexKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET))(this, a1);
	}

	::System::Void UpdateTextureSheetDimensions(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateMotionVectorTexture(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET))(this, a1);
	}

	::System::Void UpdateMotionVectorStrength()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET))(this);
	}

	::System::Void SetMetallicSmoothnessValue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET))(this);
	}

	::System::Void SetMetallicSmoothnessMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetMetallicSmoothnessKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetRefractionMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET))(this);
	}

	::System::Void UpdateIndexOfRefraction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET))(this);
	}

	::System::Void SetNormalMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetNormalKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetEmissionMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetEmissionKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetMeshTargetKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET))(this);
	}

	::System::Void UpdateStretchMultiplier()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET))(this);
	}

	::System::Void UpdateTrailValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET))(this);
	}

	::System::Void SetEmitFromShell(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET))(this, a1);
	}

	::System::Void SetEmitFromBase(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET))(this, a1);
	}

	::System::Void PrepareSkinnedMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET))(this);
	}

	::System::Void SetupSkinnedMeshEmitterCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET))(this);
	}

	::System::Void Method_5_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void UpdateskinnedMeshEmitterPositionTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET))(this);
	}

	::System::Void Method_5_0C88AB06D46E777A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_1_OFFSET))(this);
	}

	::System::Void Method_5_0C88AB06D46E777A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_0C88AB06D46E777A_2_OFFSET))(this);
	}

	::System::Void UpdateskinnedMeshEmitterTextures()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERTEXTURES_OFFSET))(this);
	}

	::System::Void SetLayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLAYER_OFFSET))(this);
	}

	::UnityEngine::Bounds GetWSBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_GETWSBOUNDS_OFFSET))(this);
	}

	::System::Void UpdateEmitter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET))(this);
	}

	::System::Void RenderSkinnedMeshEmitterPositions()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET))(this);
	}

	::System::Void Method_5_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
	}

	::UnityEngine::Vector3 CalculateRotateExtents(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CALCULATEROTATEEXTENTS_OFFSET))(this, a1);
	}

	::System::Void UpdateWorldSpaceBoundingBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET))(this);
	}

	::System::Void BakeBezierCurve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_BAKEBEZIERCURVE_OFFSET))(this);
	}

	::System::Void SetCurvePointData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCURVEPOINTDATA_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::Boolean Method_5_C1275094A3E8D145()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_METHOD_5_C1275094A3E8D145_OFFSET))(this);
	}
};

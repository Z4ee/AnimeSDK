#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_CollisionType.h"
#include "unitysdk/RefGPUParticleSystem_CurveMode.h"
#include "unitysdk/RefGPUParticleSystem_EmitterShape.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleBlendMode.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleSystemState.h"
#include "unitysdk/RefGPUParticleSystem_GPUSimulationSpace.h"
#include "unitysdk/RefGPUParticleSystem_LightMode.h"
#include "unitysdk/RefGPUParticleSystem_MeshBakeType.h"
#include "unitysdk/RefGPUParticleSystem_ParticleType.h"
#include "unitysdk/RefGPUParticleSystem_RenderTexturePrecision.h"
#include "unitysdk/RefGPUParticleSystem_TextureSheetMode.h"
#include "unitysdk/RefGPUParticleSystem_TurbulenceType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class ShaderVariantCollection; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Transform; }

#define REFGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET UNITYSDK_OFFSET(0x18304FB0)
#define REFGPUPARTICLESYSTEM_ADDBURST_1_OFFSET UNITYSDK_OFFSET(0x18304F40)
#define REFGPUPARTICLESYSTEM_ADDBURST_OFFSET UNITYSDK_OFFSET(0x18304EA0)
#define REFGPUPARTICLESYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x18304250)
#define REFGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x18304080)
#define REFGPUPARTICLESYSTEM_DEACTIVATESKINNEDMESHEMITTER_OFFSET UNITYSDK_OFFSET(0x18309DF0)
#define REFGPUPARTICLESYSTEM_DEBUGOFF_OFFSET UNITYSDK_OFFSET(0x1830F010)
#define REFGPUPARTICLESYSTEM_DEBUGON_OFFSET UNITYSDK_OFFSET(0x1830EF60)
#define REFGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET UNITYSDK_OFFSET(0x18304B60)
#define REFGPUPARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0x18304B50)
#define REFGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x183089E0)
#define REFGPUPARTICLESYSTEM_METHOD_5_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x18307940)
#define REFGPUPARTICLESYSTEM_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x183047F0)
#define REFGPUPARTICLESYSTEM_METHOD_5_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x18303C30)
#define REFGPUPARTICLESYSTEM_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18304480)
#define REFGPUPARTICLESYSTEM_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x18306170)
#define REFGPUPARTICLESYSTEM_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18308020)
#define REFGPUPARTICLESYSTEM_METHOD_5_925162CF519D5A91_OFFSET UNITYSDK_OFFSET(0x18303720)
#define REFGPUPARTICLESYSTEM_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1830BAF0)
#define REFGPUPARTICLESYSTEM_METHOD_5_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x18304680)
#define REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x18309510)
#define REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_2_OFFSET UNITYSDK_OFFSET(0x18306630)
#define REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x183065B0)
#define REFGPUPARTICLESYSTEM_METHOD_5_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x18304610)
#define REFGPUPARTICLESYSTEM_METHOD_5_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0x18304160)
#define REFGPUPARTICLESYSTEM_METHOD_5_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x18304960)
#define REFGPUPARTICLESYSTEM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18309590)
#define REFGPUPARTICLESYSTEM_METHOD_5_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x18304520)
#define REFGPUPARTICLESYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18304210)
#define REFGPUPARTICLESYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18303F60)
#define REFGPUPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x183035C0)
#define REFGPUPARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x18304A70)
#define REFGPUPARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0x183049D0)
#define REFGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x18303650)
#define REFGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x18309F00)
#define REFGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET UNITYSDK_OFFSET(0x18305050)
#define REFGPUPARTICLESYSTEM_REMOVEBURST_OFFSET UNITYSDK_OFFSET(0x18305130)
#define REFGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET UNITYSDK_OFFSET(0x183050D0)
#define REFGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET UNITYSDK_OFFSET(0x183051B0)
#define REFGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18309E70)
#define REFGPUPARTICLESYSTEM_RESEED_OFFSET UNITYSDK_OFFSET(0x18304D40)
#define REFGPUPARTICLESYSTEM_RESETSEED_OFFSET UNITYSDK_OFFSET(0x1830A8B0)
#define REFGPUPARTICLESYSTEM_RESTART_OFFSET UNITYSDK_OFFSET(0x18304A80)
#define REFGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830EE90)
#define REFGPUPARTICLESYSTEM_SETBLENDMODE_1_OFFSET UNITYSDK_OFFSET(0x1830E6A0)
#define REFGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1830E0B0)
#define REFGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET UNITYSDK_OFFSET(0x1830E020)
#define REFGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET UNITYSDK_OFFSET(0x1830D530)
#define REFGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x18309490)
#define REFGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x183093B0)
#define REFGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET UNITYSDK_OFFSET(0x1830EE00)
#define REFGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET UNITYSDK_OFFSET(0x1830ED70)
#define REFGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x183068D0)
#define REFGPUPARTICLESYSTEM_SETLAYER_OFFSET UNITYSDK_OFFSET(0x1830EC10)
#define REFGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x18306040)
#define REFGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET UNITYSDK_OFFSET(0x1830DF90)
#define REFGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET UNITYSDK_OFFSET(0x18308F60)
#define REFGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18308E80)
#define REFGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D460)
#define REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET UNITYSDK_OFFSET(0x183090F0)
#define REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18308FE0)
#define REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET UNITYSDK_OFFSET(0x18309170)
#define REFGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET UNITYSDK_OFFSET(0x18309330)
#define REFGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18309220)
#define REFGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x18306940)
#define REFGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D910)
#define REFGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18307170)
#define REFGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x18303F30)
#define REFGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D630)
#define REFGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1830C890)
#define REFGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D6B0)
#define REFGPUPARTICLESYSTEM_SETSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x18306F60)
#define REFGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x18306BA0)
#define REFGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830C250)
#define REFGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D730)
#define REFGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1830D560)
#define REFGPUPARTICLESYSTEM_SETUPDATATEXTURES_OFFSET UNITYSDK_OFFSET(0x1830B790)
#define REFGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET UNITYSDK_OFFSET(0x183098C0)
#define REFGPUPARTICLESYSTEM_SETZBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1830ED10)
#define REFGPUPARTICLESYSTEM_SETZBUFFER_OFFSET UNITYSDK_OFFSET(0x1830ECA0)
#define REFGPUPARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0x18304040)
#define REFGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET UNITYSDK_OFFSET(0x18307F30)
#define REFGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1830CB30)
#define REFGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x18308E00)
#define REFGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1830BA10)
#define REFGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET UNITYSDK_OFFSET(0x18307340)
#define REFGPUPARTICLESYSTEM_UPDATECOLLISIONMATRICES_OFFSET UNITYSDK_OFFSET(0x183081A0)
#define REFGPUPARTICLESYSTEM_UPDATECOLLISIONPLANES_OFFSET UNITYSDK_OFFSET(0x1830A990)
#define REFGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1830B920)
#define REFGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1830B640)
#define REFGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET UNITYSDK_OFFSET(0x183073B0)
#define REFGPUPARTICLESYSTEM_UPDATEDISTRIBUTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x18309DE0)
#define REFGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET UNITYSDK_OFFSET(0x18307430)
#define REFGPUPARTICLESYSTEM_UPDATEEMITTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1830B400)
#define REFGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET UNITYSDK_OFFSET(0x183066B0)
#define REFGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET UNITYSDK_OFFSET(0x18304B70)
#define REFGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x183080C0)
#define REFGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1830CC00)
#define REFGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x18307510)
#define REFGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET UNITYSDK_OFFSET(0x183072C0)
#define REFGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1830B9E0)
#define REFGPUPARTICLESYSTEM_UPDATEMESHTARGETMATRIX_OFFSET UNITYSDK_OFFSET(0x183076E0)
#define REFGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x183076A0)
#define REFGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1830A3C0)
#define REFGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1830B220)
#define REFGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1830B2A0)
#define REFGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1830CD80)
#define REFGPUPARTICLESYSTEM_UPDATEPARTICLECOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1830B5B0)
#define REFGPUPARTICLESYSTEM_UPDATEPARTICLEMAINTEX_OFFSET UNITYSDK_OFFSET(0x1830B0B0)
#define REFGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET UNITYSDK_OFFSET(0x18308A90)
#define REFGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x18308D60)
#define REFGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1830C3B0)
#define REFGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1830BCA0)
#define REFGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERCAMERALAYER_OFFSET UNITYSDK_OFFSET(0x18309BA0)
#define REFGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x18309BD0)
#define REFGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET UNITYSDK_OFFSET(0x1830B340)
#define REFGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET UNITYSDK_OFFSET(0x1830DF50)
#define REFGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET UNITYSDK_OFFSET(0x183073F0)
#define REFGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x183071F0)
#define REFGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1830D3C0)
#define REFGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1830CCE0)
#define REFGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET UNITYSDK_OFFSET(0x18308C90)
#define REFGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET UNITYSDK_OFFSET(0x1830C9F0)
#define REFGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET UNITYSDK_OFFSET(0x1830CE70)
#define REFGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET UNITYSDK_OFFSET(0x18307DC0)
#define REFGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1830CA90)
#define REFGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18307B90)
#define REFGPUPARTICLESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x18304260)
#define REFGPUPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1830F090)

inline static constexpr unsigned int RefGPUParticleSystem_TypeDefinitionIndex = 33910;

class RefGPUParticleSystem : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 Field_5_0 = 0x100; // 0x0
	::UnityEngine::Vector3 Field_5_1; // 0x18
	::RefGPUParticleSystemBuffer* particleData; // 0x28
	::UnityEngine::Vector4 metaBufConfig; // 0x30
	::UnityEngine::Material* particleMaterial; // 0x40
	::System::Int32 renderQueue; // 0x48
	::Il2CppArray<::UnityEngine::GameObject*>* Field_5_6; // 0x50
	::Il2CppArray<::UnityEngine::MeshFilter*>* Field_5_7; // 0x58
	::System::Int32 bufferWidth; // 0x60
	::System::Int32 bufferHeight; // 0x64
	::System::Single Field_5_10; // 0x68
	::System::Single Field_5_11; // 0x6C
	::System::Single Field_5_12; // 0x70
	::RefGPUParticleSystem_RenderTexturePrecision precision; // 0x74
	::System::Boolean useFixedDeltaTime; // 0x78
	::System::Single fixedDeltaTime; // 0x7C
	::System::Int32 Field_5_16; // 0x80
	::UnityEngine::ShaderVariantCollection* shaderVariantCollection; // 0x88
	::System::Int32 seed; // 0x90
	::System::Single Field_5_19; // 0x94
	::System::Single Field_5_20; // 0x98
	::RefGPUParticleSystem_GPUParticleSystemState state; // 0x9C
	::System::Boolean playOnAwake; // 0xA0
	::System::Boolean loop; // 0xA1
	::System::Boolean emit; // 0xA2
	::System::Single Field_5_25; // 0xA4
	::System::Single effectLength; // 0xA8
	::System::Single progress; // 0xAC
	::System::Single timeScale; // 0xB0
	::RefGPUParticleSystem_EmitterShape emitterShape; // 0xB4
	::System::Single param1; // 0xB8
	::System::Single param2; // 0xBC
	::System::Single param3; // 0xC0
	::System::Single param4; // 0xC4
	::System::Single randomness; // 0xC8
	::System::Boolean emitFromShell; // 0xCC
	::System::Boolean emitFromBase; // 0xCD
	::RefGPUParticleSystem_GPUSimulationSpace simulationSpace; // 0xD0
	::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* bursts; // 0xD8
	::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* Field_5_39; // 0xE0
	::System::Int32 Field_5_40; // 0xE8
	::UnityEngine::Mesh* meshEmitter; // 0xF0
	::UnityEngine::Vector3 center; // 0xF8
	::UnityEngine::Vector3 extents; // 0x104
	::UnityEngine::Bounds Field_5_44; // 0x110
	::UnityEngine::MeshFilter* meshFilterEmitter; // 0x128
	::System::Int32 meshEmitterResolution; // 0x130
	::RefGPUParticleSystem_MeshBakeType meshBakeType; // 0x134
	::UnityEngine::Texture2D* meshEmitterPositionTexture; // 0x138
	::UnityEngine::Texture2D* meshEmitterNormalTexture; // 0x140
	::System::Single Field_5_50; // 0x148
	::System::Int32 smeLayer; // 0x14C
	::System::Int32 skinnedMeshEmitterResolution; // 0x150
	::UnityEngine::SkinnedMeshRenderer* skinnedMeshEmitter; // 0x158
	::UnityEngine::SkinnedMeshRenderer* Field_5_54; // 0x160
	::UnityEngine::GameObject* Field_5_55; // 0x168
	::UnityEngine::Transform* skinnedMeshEmitterTransform; // 0x170
	::UnityEngine::Camera* skinnedMeshEmitterCam; // 0x178
	::UnityEngine::Transform* skinnedMeshEmitterCamTransform; // 0x180
	::UnityEngine::Material* Field_5_59; // 0x188
	::UnityEngine::RenderTexture* Field_5_60; // 0x190
	::UnityEngine::Mesh* skinnedMeshEmitterConvertedMesh; // 0x198
	::FloatCurveBundle* emissionRate; // 0x1A0
	::System::Int32 maxParticles; // 0x1A8
	::FloatCurveBundle* startLifetime; // 0x1B0
	::FloatCurveBundle* startSize; // 0x1B8
	::FloatCurveBundle* startSpeed; // 0x1C0
	::FloatCurveBundle* startRotation; // 0x1C8
	::System::Boolean useRotation; // 0x1D0
	::ShaderCurveBundle* sizeOverLifetime; // 0x1D8
	::ShaderCurveBundle* rotationOverLifetime; // 0x1E0
	::ColorGradientBundle* colorOverLifetime; // 0x1E8
	::SingleFloatCurveBundle* colorIntensityOverLifetime; // 0x1F0
	::SingleFloatCurveBundle* maxVelocity; // 0x1F8
	::System::Boolean useMaxVelocity; // 0x200
	::UnityEngine::Texture2D* Field_5_75; // 0x208
	::RefGPUParticleSystem_ParticleType particleType; // 0x210
	::UnityEngine::Mesh* meshParticle; // 0x218
	::System::Single followSpeed; // 0x220
	::SingleFloatCurveBundle* gravity; // 0x228
	::UnityEngine::Vector3 Field_5_80; // 0x230
	::UnityEngine::Vector3 Field_5_81; // 0x23C
	::SingleFloatCurveBundle* inheritVelocityMultiplyer; // 0x248
	::System::Boolean useInheritVelocity; // 0x250
	::SingleFloatCurveBundle* airResistance; // 0x258
	::Vector3CurveBundle* forceOverLifetime; // 0x260
	::System::Boolean useCircularForce; // 0x268
	::Vector3CurveBundle* circularForce; // 0x270
	::UnityEngine::Transform* circularForceCenter; // 0x278
	::RefGPUParticleSystem_TurbulenceType turbulenceType; // 0x280
	::UnityEngine::TextAsset* fgaFile; // 0x288
	::UnityEngine::Texture3D* vectorField; // 0x290
	::UnityEngine::Texture2D* vectorNoise; // 0x298
	::System::Single Tightness; // 0x2A0
	::Vector3CurveBundle* turbulenceAmplitude; // 0x2A8
	::Vector3CurveBundle* turbulenceFrequency; // 0x2B0
	::Vector3CurveBundle* turbulenceOffset; // 0x2B8
	::Vector3CurveBundle* turbulenceRotation; // 0x2C0
	::UnityEngine::Transform* vectorFieldObject; // 0x2C8
	::System::Collections::Generic::List_1<::Attractor*>* attractors; // 0x2D0
	::System::Boolean useMeshTarget; // 0x2D8
	::System::Boolean useMeshFilter; // 0x2D9
	::System::Boolean targetIsSameMeshAsEmitter; // 0x2DA
	::SingleFloatCurveBundle* meshTargetStrength; // 0x2E0
	::SingleFloatCurveBundle* onTarget; // 0x2E8
	::UnityEngine::Mesh* meshTarget; // 0x2F0
	::UnityEngine::MeshFilter* meshFilterTarget; // 0x2F8
	::System::Int32 meshTargetResolution; // 0x300
	::RefGPUParticleSystem_MeshBakeType targetBakeType; // 0x304
	::UnityEngine::Texture2D* meshTargetPositionTexture; // 0x308
	::System::Single Field_5_110; // 0x310
	::RefGPUParticleSystem_CollisionType collisionType; // 0x314
	::Il2CppArray<::UnityEngine::Vector4>* planePositions; // 0x318
	::Il2CppArray<::UnityEngine::Vector4>* planeNormals; // 0x320
	::Il2CppArray<::UnityEngine::Transform*>* planes; // 0x328
	::Il2CppArray<::System::Single>* collisionDamping; // 0x330
	::UnityEngine::Camera* collisionCamera; // 0x338
	::UnityEngine::Transform* collisionCameraTransform; // 0x340
	::UnityEngine::Matrix4x4 Field_5_118; // 0x348
	::System::Single depthCollisionDamping; // 0x388
	::System::Single dampingRandomness; // 0x38C
	::System::Single depthCollisionDistance; // 0x390
	::System::Single aspectRatio; // 0x394
	::UnityEngine::Vector3 forwardVector; // 0x398
	::UnityEngine::Vector3 offset; // 0x3A4
	::UnityEngine::Texture2D* mainTexture; // 0x3B0
	::UnityEngine::Texture2D* motionVectors; // 0x3B8
	::RefGPUParticleSystem_TextureSheetMode textureSheetMode; // 0x3C0
	::System::Single motionVectorStrength; // 0x3C4
	::System::Boolean textureSheetRandomIndex; // 0x3C8
	::System::Int32 rows; // 0x3CC
	::System::Int32 columns; // 0x3D0
	::RefGPUParticleSystem_GPUParticleBlendMode blendMode; // 0x3D4
	::System::Boolean useZbuffer; // 0x3D8
	::System::Single stretchMultiplier; // 0x3DC
	::UnityEngine::Vector2 minMaxStretch; // 0x3E0
	::RefGPUParticleSystem_LightMode lightMode; // 0x3E8
	::System::Single metallic; // 0x3EC
	::System::Single smoothness; // 0x3F0
	::UnityEngine::Texture2D* metallicSmoothness; // 0x3F8
	::UnityEngine::Texture2D* normalMap; // 0x400
	::UnityEngine::Texture2D* emissionMap; // 0x408
	::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x410
	::System::Boolean receiveShadows; // 0x414
	::UnityEngine::Texture2D* refractionNormals; // 0x418
	::System::Single indexOfRefraction; // 0x420

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ONDESTROY_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_5_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void SetRenderQueue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET))(this);
	}

	::System::Void Play()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_PLAY_OFFSET))(this);
	}

	::System::Void Pause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_PAUSE_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_STOP_OFFSET))(this);
	}

	::System::Void Restart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_RESTART_OFFSET))(this);
	}

	::System::Void Emit(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_EMIT_OFFSET))(this, a1);
	}

	::System::Void UpdateEmitter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET))(this);
	}

	::System::Void ReSeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_RESEED_OFFSET))(this);
	}

	::System::Void AddBurst(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ADDBURST_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void AddBurst_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ADDBURST_1_OFFSET))(this);
	}

	::System::Void AddAttractor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET))(this);
	}

	::System::Void RemoveAttractor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET))(this, a1);
	}

	::System::Void RemoveLastAttractor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET))(this);
	}

	::System::Void RemoveBurst(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_REMOVEBURST_OFFSET))(this, a1);
	}

	::System::Void RemoveLastBurst()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET))(this);
	}

	::System::Void PrepareParticleData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET))(this);
	}

	::System::Void ClearParticleData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET))(this);
	}

	::System::Void Method_5_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_5_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_5_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_5_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_5_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void EmitNumParticles(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET))(this, a1);
	}

	::System::Void ForceRecreateParticles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET))(this);
	}

	::System::Void Method_5_925162CF519D5A91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_925162CF519D5A91_OFFSET))(this);
	}

	::System::Void Method_5_B50CA01B5EDC1228()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_B50CA01B5EDC1228_OFFSET))(this);
	}

	::System::Void SetShadowSettings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETSHADOWSETTINGS_OFFSET))(this);
	}

	::System::Void UpdateParticleTypeKeywords()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET))(this);
	}

	::System::Void UpdateTrailValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET))(this);
	}

	::System::Void UpdatePositionOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET))(this);
	}

	::System::Void UpdateAspectRatio()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET))(this);
	}

	::System::Void Method_5_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void SetMainTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET))(this);
	}

	::System::Void SetMetallicSmoothnessMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetMetallicSmoothnessValue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET))(this);
	}

	::System::Void SetNormalMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetRefractionMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET))(this);
	}

	::System::Void SetEmissionMapTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_A239DF324AF4215D_2_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void UpdateDepthCollisionValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET))(this);
	}

	::System::Void UpdateCollisionCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET))(this);
	}

	::System::Void UpdateCollisionMatrices()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECOLLISIONMATRICES_OFFSET))(this);
	}

	::System::Void UpdateWorldSpaceBoundingBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET))(this);
	}

	::System::Void SetupSkinnedMeshEmitterCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET))(this);
	}

	::System::Void UpdateDistributionMatrices()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEDISTRIBUTIONMATRICES_OFFSET))(this);
	}

	::System::Void DeactivateSkinnedMeshEmitter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_DEACTIVATESKINNEDMESHEMITTER_OFFSET))(this);
	}

	::System::Void UpdateSkinnedMeshEmitterCameraLayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERCAMERALAYER_OFFSET))(this);
	}

	::System::Void UpdateskinnedMeshEmitterPositionTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET))(this);
	}

	::System::Void RenderSkinnedMeshEmitterPositions()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET))(this);
	}

	::System::Void PrepareSkinnedMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET))(this);
	}

	::System::Void UpdateMeshTargetTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET))(this);
	}

	::System::Void ResetSeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_RESETSEED_OFFSET))(this);
	}

	::System::Void UpdateMeshTargetParameters()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET))(this);
	}

	::System::Void UpdateMeshTargetMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMESHTARGETMATRIX_OFFSET))(this);
	}

	::System::Void UpdateCollisionPlanes()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECOLLISIONPLANES_OFFSET))(this);
	}

	::System::Void UpdateParticleMainTex(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEPARTICLEMAINTEX_OFFSET))(this, a1);
	}

	::System::Void UpdateMotionVectorStrength()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET))(this);
	}

	::System::Void UpdateMotionVectorTexture(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET))(this, a1);
	}

	::System::Void UpdateStartSpeedAndLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateStartSizeAndRotation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET))(this);
	}

	::System::Void UpdateEmitterParameters()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEEMITTERPARAMETERS_OFFSET))(this);
	}

	::System::Void UpdateEmitterMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET))(this);
	}

	::System::Void UpdateParticleColorIntensity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEPARTICLECOLORINTENSITY_OFFSET))(this);
	}

	::System::Void UpdateStretchMultiplier()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET))(this);
	}

	::System::Void UpdateColorOverLifeTime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateColorIntensity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET))(this);
	}

	::System::Void UpdateMaxVelocityOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateCircularForceOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void Method_5_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void UpdateSizeOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateRotationOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateGravity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET))(this);
	}

	::System::Void UpdateAirResistance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET))(this);
	}

	::System::Void UpdateTurbulenceTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET))(this);
	}

	::System::Void UpdateVectorField()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET))(this);
	}

	::System::Void UpdateAmplitude()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET))(this);
	}

	::System::Void UpdateFrequency()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET))(this);
	}

	::System::Void UpdateTightness()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET))(this);
	}

	::System::Void UpdateOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET))(this);
	}

	::System::Void UpdateVectorfieldFile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET))(this);
	}

	::System::Void UpdateVectorFieldMatrix()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET))(this);
	}

	::System::Void UpdateEmitterTexture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET))(this);
	}

	::System::Void Method_5_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Method_5_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void UpdateForceOverLifetime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET))(this);
	}

	::System::Void UpdateTextureSheetDimensions(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateIndexOfRefraction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET))(this);
	}

	::System::Void SetMeshTargetKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET))(this);
	}

	::System::Void SetCollisionType()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET))(this);
	}

	::System::Void SetMainTextureKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetMetallicSmoothnessKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetNormalKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetEmissionKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetTurbulenceKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET))(this);
	}

	::System::Void SetRotationKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET))(this);
	}

	::System::Void SetRotationOverLifetimeKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetParticleTypeKeyword(::RefGPUParticleSystem_ParticleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetTextureSheetKeyword(::RefGPUParticleSystem_TextureSheetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_TextureSheetMode))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetRandomIndexKeyword(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetSizeOverLifetimeKeyword(::RefGPUParticleSystem_CurveMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
	}

	::System::Void SetRotationOverLifetimeKeyword_1(::RefGPUParticleSystem_CurveMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_1_OFFSET))(this, a1);
	}

	::System::Void SetSimulationSpace()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET))(this);
	}

	::System::Void SetEmitterShapeKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET))(this);
	}

	::System::Void UpdateStartSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET))(this);
	}

	::System::Void SetLimitVelocity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET))(this);
	}

	::System::Void SetCircularForce()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET))(this);
	}

	::System::Void SetLightMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET))(this);
	}

	::System::Void SetBlendMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET))(this);
	}

	::System::Void SetBlendMode_1(::RefGPUParticleSystem_GPUParticleBlendMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_GPUParticleBlendMode))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETBLENDMODE_1_OFFSET))(this, a1);
	}

	::System::Void SetLayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETLAYER_OFFSET))(this);
	}

	::System::Void SetZBuffer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETZBUFFER_OFFSET))(this);
	}

	::System::Void SetZBuffer_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETZBUFFER_1_OFFSET))(this, a1);
	}

	::System::Void SetEmitFromShell(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET))(this, a1);
	}

	::System::Void SetEmitFromBase(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET))(this, a1);
	}

	::System::Void SetAttractorKeyword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET))(this);
	}

	::System::Void SetUpDataTextures()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_SETUPDATATEXTURES_OFFSET))(this);
	}

	::System::Void DebugOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_DEBUGON_OFFSET))(this);
	}

	::System::Void DebugOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEM_DEBUGOFF_OFFSET))(this);
	}
};

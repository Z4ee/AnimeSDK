#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LegacyGPUParticleSystem_EmitterShape.h"
#include "unitysdk/LegacyGPUParticleSystem_ParticleType.h"
#include "unitysdk/RefGPUParticleSystem_CollisionType.h"
#include "unitysdk/RefGPUParticleSystem_EmitterShape.h"
#include "unitysdk/RefGPUParticleSystem_GPUSimulationSpace.h"
#include "unitysdk/RefGPUParticleSystem_ParticleType.h"
#include "unitysdk/RefGPUParticleSystem_TurbulenceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Attractor;
class FloatCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_0924591D59A29346_OFFSET UNITYSDK_OFFSET(0x19D4F570)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1061B425553C70AD_OFFSET UNITYSDK_OFFSET(0x19D507B0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19D65B70)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x19D49600)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1B827C9E79C42E4D_1_OFFSET UNITYSDK_OFFSET(0x19D52650)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1B827C9E79C42E4D_OFFSET UNITYSDK_OFFSET(0x19D529A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_26F5329D663D1E39_OFFSET UNITYSDK_OFFSET(0x19D538F0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2D116600DE0F1F15_OFFSET UNITYSDK_OFFSET(0x19D65A70)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2DF7DD70F3426B64_1_OFFSET UNITYSDK_OFFSET(0x19D51A90)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2DF7DD70F3426B64_OFFSET UNITYSDK_OFFSET(0x19D519E0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_348EC4C80D0A9011_OFFSET UNITYSDK_OFFSET(0x19D66130)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_356261D3BF6E4A2F_OFFSET UNITYSDK_OFFSET(0x19D66050)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_38317C3EB9517511_1_OFFSET UNITYSDK_OFFSET(0x19D50C30)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_38317C3EB9517511_OFFSET UNITYSDK_OFFSET(0x19D50B20)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_3B899891800169B0_OFFSET UNITYSDK_OFFSET(0x19D60420)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_3C5D45D0FBCDCB47_OFFSET UNITYSDK_OFFSET(0x19D4D1C0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x19D55450)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_478275B65B78A883_OFFSET UNITYSDK_OFFSET(0x19D4FC20)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x19D525C0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_2_OFFSET UNITYSDK_OFFSET(0x19D512D0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x19D505B0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5288AD3A76FF1F90_OFFSET UNITYSDK_OFFSET(0x19D50640)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5953F1356AD2DDEE_OFFSET UNITYSDK_OFFSET(0x19D66260)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_1_OFFSET UNITYSDK_OFFSET(0x19D55220)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_2_OFFSET UNITYSDK_OFFSET(0x19D527C0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_3_OFFSET UNITYSDK_OFFSET(0x19D555A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_4_OFFSET UNITYSDK_OFFSET(0x19D556B0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_5_OFFSET UNITYSDK_OFFSET(0x19D52920)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x19D531F0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5D77CB506648C3FE_OFFSET UNITYSDK_OFFSET(0x19D50C80)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5EF450E64ED0407E_OFFSET UNITYSDK_OFFSET(0x19D65900)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0x19D563A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x19D629B0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6798292CB9627705_OFFSET UNITYSDK_OFFSET(0x19D56270)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_690254C4B3C33267_OFFSET UNITYSDK_OFFSET(0x19D53C70)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6ABC05C71D0DE941_OFFSET UNITYSDK_OFFSET(0x19D634A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_778933EA3857A9C7_OFFSET UNITYSDK_OFFSET(0x19D659C0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_7B3E91D44E1B56C4_1_OFFSET UNITYSDK_OFFSET(0x19D53820)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_7B3E91D44E1B56C4_OFFSET UNITYSDK_OFFSET(0x19D50720)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_825CE5C00F84B850_OFFSET UNITYSDK_OFFSET(0x19D4F800)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_83961D23712DE6B1_OFFSET UNITYSDK_OFFSET(0x19D56730)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_857B00FCB2FEA73D_OFFSET UNITYSDK_OFFSET(0x19D53E20)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_8C6E66D260CC37AD_1_OFFSET UNITYSDK_OFFSET(0x19D4A5A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x19D4A380)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_92CCC91F69044DF3_1_OFFSET UNITYSDK_OFFSET(0x19D51360)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_92CCC91F69044DF3_OFFSET UNITYSDK_OFFSET(0x19D50B70)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_943F2B81940D2E4F_OFFSET UNITYSDK_OFFSET(0x19D49E40)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_9CF45FA43B435E65_OFFSET UNITYSDK_OFFSET(0x19D60B00)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x19D4D040)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A0F3F90A42DD6D56_OFFSET UNITYSDK_OFFSET(0x19D504A0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x19D65FC0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A2B56E60C6E1E002_OFFSET UNITYSDK_OFFSET(0x19D5F120)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A307B09C839C8E05_OFFSET UNITYSDK_OFFSET(0x19D50840)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_B5F51E3F68D62B25_OFFSET UNITYSDK_OFFSET(0x19D50E30)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BAAD46B6E866F171_OFFSET UNITYSDK_OFFSET(0x19D65C80)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_1_OFFSET UNITYSDK_OFFSET(0x19D4DE20)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_2_OFFSET UNITYSDK_OFFSET(0x19D4DEB0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_OFFSET UNITYSDK_OFFSET(0x19D4DD90)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19D4F490)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_CF9FA0A38E03E2AB_OFFSET UNITYSDK_OFFSET(0x19D51520)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_D8F7CB789BFEC9C7_OFFSET UNITYSDK_OFFSET(0x19D5E600)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_DAC75E5D007B2739_OFFSET UNITYSDK_OFFSET(0x19D65E20)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E7BDFCF441D66B0C_OFFSET UNITYSDK_OFFSET(0x19D4DC80)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E9F96114DE456040_1_OFFSET UNITYSDK_OFFSET(0x19D664C0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E9F96114DE456040_OFFSET UNITYSDK_OFFSET(0x19D66490)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_EA9E584A2A3F0ED7_OFFSET UNITYSDK_OFFSET(0x19D53A70)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x19D4D110)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F0940A84A4CE54F7_1_OFFSET UNITYSDK_OFFSET(0x19D51C50)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F0940A84A4CE54F7_OFFSET UNITYSDK_OFFSET(0x19D51B40)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F14CCE4A035E01BB_OFFSET UNITYSDK_OFFSET(0x19D52840)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F22E1545DBE08A2A_OFFSET UNITYSDK_OFFSET(0x19D62A60)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F2708A6D3DD46105_OFFSET UNITYSDK_OFFSET(0x19D66390)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F552CBD036D44B0E_OFFSET UNITYSDK_OFFSET(0x19D4FAE0)
#define REFGPUPARTICLESYSTEMBUFFER_METHOD_1_FD0BC648CFD0F096_OFFSET UNITYSDK_OFFSET(0x19D4DBC0)
#define REFGPUPARTICLESYSTEMBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D664F0)
#define REFGPUPARTICLESYSTEMBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D4DF40)
#define REFGPUPARTICLESYSTEMBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5AD50)

inline static constexpr unsigned int RefGPUParticleSystemBuffer_TypeDefinitionIndex = 39727;

class RefGPUParticleSystemBuffer : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__CircularForceCenterID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8890);
	}
	static ::System::Int32* StaticGet__OffsetID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8894);
	}
	static ::System::Int32* StaticGet__TurbulenceMatrixID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8898);
	}
	static ::System::Int32* StaticGet__EmitterVelocityID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x889C);
	}
	static ::System::Int32* StaticGet__MaxVelocityID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88A0);
	}
	static ::System::Int32* StaticGet__TurbulenceID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88A4);
	}
	static ::System::Int32* StaticGet__EndIDID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88A8);
	}
	static ::System::Int32* StaticGet__MeshTargetID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88AC);
	}
	static ::System::Int32* StaticGet__PosUVRandomID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88B0);
	}
	static ::System::Int32* StaticGet__EmitterPositionID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88B4);
	}
	static ::System::Int32* StaticGet__CurvePointPositionsID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88B8);
	}
	static ::System::Int32* StaticGet__MeshTargetStrengthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88BC);
	}
	static ::System::Int32* StaticGet__MeshEmitterTangentsID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88C0);
	}
	static ::System::Int32* StaticGet__CustomDeltaTimeID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88C4);
	}
	static ::System::Int32* StaticGet__TargetMatrixID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88C8);
	}
	static ::System::Int32* StaticGet__ForceOverLifetimeID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88CC);
	}
	static ::System::Int32* StaticGet__CustomData1XYID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88D0);
	}
	static ::System::Int32* StaticGet__MetaID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88D4);
	}
	static ::System::Int32* StaticGet__TurbulenceDDDID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88D8);
	}
	static ::System::Int32* StaticGet__MapHeightID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88DC);
	}
	static ::System::Int32* StaticGet__StrengthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88E0);
	}
	static ::System::Int32* StaticGet__StartSize23ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88E4);
	}
	static ::System::Int32* StaticGet__RandomValuesID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88E8);
	}
	static ::System::Int32* StaticGet__GravityID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88EC);
	}
	static ::System::Int32* StaticGet__PosUVReverseID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88F0);
	}
	static ::System::Int32* StaticGet__StartLifeTimeSpeedID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88F4);
	}
	static ::System::Int32* StaticGet__OnTargetID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88F8);
	}
	static ::System::Int32* StaticGet__EmitterMatrixID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x88FC);
	}
	static ::System::Int32* StaticGet__Meta4ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8900);
	}
	static ::System::Int32* StaticGet__Meta2ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8904);
	}
	static ::System::Int32* StaticGet__FollowSpeedID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8908);
	}
	static ::System::Int32* StaticGet__CustomData1ZWID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x890C);
	}
	static ::System::Int32* StaticGet__VelocityID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8910);
	}
	static ::System::Int32* StaticGet__EmitterParamID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8914);
	}
	static ::System::Int32* StaticGet__PlanePositionID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8918);
	}
	static ::System::Int32* StaticGet__AmplitudeID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x891C);
	}
	static ::System::Int32* StaticGet__PositionID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8920);
	}
	static ::System::Int32* StaticGet__CustomData2ZWID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8924);
	}
	static ::System::Int32* StaticGet__CustomTimeID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8928);
	}
	static ::System::Int32* StaticGet__FrequencyID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x892C);
	}
	static ::System::Int32* StaticGet__MapWidthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8930);
	}
	static ::System::Int32* StaticGet__Meta3ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8934);
	}
	static ::System::Int32* StaticGet__EffectLengthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8938);
	}
	static ::System::Int32* StaticGet__MeshEmitterNormalsID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x893C);
	}
	static ::System::Int32* StaticGet__StartSizeRotID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8940);
	}
	static ::System::Int32* StaticGet__NewParticleID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8944);
	}
	static ::System::Int32* StaticGet__CustomData2XYID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8948);
	}
	static ::System::Int32* StaticGet__TightnessID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x894C);
	}
	static ::System::Int32* StaticGet__CircularForceOverLifetimeID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8950);
	}
	static ::System::Int32* StaticGet__MeshEmitterPositionsID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8954);
	}
	static ::System::Int32* StaticGet__PlaneNormalID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8958);
	}
	static ::System::Int32* StaticGet__AirResistanceID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x895C);
	}
	static ::System::Int32* StaticGet__FollowSegmentID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8960);
	}
	static ::System::Int32* StaticGet__AttractorID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8964);
	}
	static ::System::Int32* StaticGet__StartIDID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RefGPUParticleSystemBuffer_TypeDefinitionIndex)->GetStaticField(0x8968);
	}
	::UnityEngine::RenderTexture* newParticleBuffer; // 0x10
	::UnityEngine::RenderTexture* metaBuffer_11; // 0x18
	::UnityEngine::RenderTexture* metaBuffer_21; // 0x20
	::UnityEngine::RenderTexture* metaBuffer_31; // 0x28
	::UnityEngine::RenderTexture* metaBuffer_41; // 0x30
	::UnityEngine::RenderTexture* positionBuffer_1; // 0x38
	::UnityEngine::RenderTexture* velocityBuffer_1; // 0x40
	::UnityEngine::RenderTexture* metaBuffer_12; // 0x48
	::UnityEngine::RenderTexture* metaBuffer_22; // 0x50
	::UnityEngine::RenderTexture* metaBuffer_32; // 0x58
	::UnityEngine::RenderTexture* metaBuffer_42; // 0x60
	::UnityEngine::RenderTexture* positionBuffer_2; // 0x68
	::UnityEngine::RenderTexture* velocityBuffer_2; // 0x70
	::UnityEngine::Texture2D* randomBuffer; // 0x78
	::UnityEngine::Vector4 vector; // 0x80
	::Il2CppArray<::UnityEngine::Vector4>* vec; // 0x90
	::Il2CppArray<::System::Single>* stren; // 0x98
	::UnityEngine::Material* calculateSpawn; // 0xA0
	::UnityEngine::Material* calculateMeta; // 0xA8
	::UnityEngine::Material* calculateVelocity; // 0xB0
	::UnityEngine::Material* calculatePosition; // 0xB8
	::UnityEngine::Material* resetMeta; // 0xC0
	::UnityEngine::Material* resetPosition; // 0xC8

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTextureFormat a3, ::RefGPUParticleSystem_ParticleType a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTextureFormat a3, ::LegacyGPUParticleSystem_ParticleType a4, ::System::Int32 a5, ::UnityEngine::Vector4 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B5F51E3F68D62B25(::UnityEngine::Texture* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector4 a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_B5F51E3F68D62B25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_1_CF9FA0A38E03E2AB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_CF9FA0A38E03E2AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5EF450E64ED0407E(::System::Int32 a1, ::System::Int32 a2, ::RefGPUParticleSystem_ParticleType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RefGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5EF450E64ED0407E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_778933EA3857A9C7(::System::Int32 a1, ::System::Int32 a2, ::LegacyGPUParticleSystem_ParticleType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_778933EA3857A9C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2D116600DE0F1F15(::System::Int32 a1, ::System::Int32 a2, ::RefGPUParticleSystem_ParticleType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RefGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2D116600DE0F1F15_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_356261D3BF6E4A2F(::System::Int32 a1, ::System::Int32 a2, ::LegacyGPUParticleSystem_ParticleType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_356261D3BF6E4A2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_BAAD46B6E866F171(::RefGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BAAD46B6E866F171_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_348EC4C80D0A9011(::LegacyGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_348EC4C80D0A9011_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAC75E5D007B2739(::RefGPUParticleSystem_ParticleType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_DAC75E5D007B2739_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5953F1356AD2DDEE(::LegacyGPUParticleSystem_ParticleType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5953F1356AD2DDEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_D8F7CB789BFEC9C7(::RefGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_D8F7CB789BFEC9C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_857B00FCB2FEA73D(::LegacyGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_857B00FCB2FEA73D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_690254C4B3C33267(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_690254C4B3C33267_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A2B56E60C6E1E002(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector4 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A2B56E60C6E1E002_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_825CE5C00F84B850(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_825CE5C00F84B850_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6798292CB9627705(::UnityEngine::Vector3 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6798292CB9627705_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A0F3F90A42DD6D56(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A0F3F90A42DD6D56_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C5D45D0FBCDCB47(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_3C5D45D0FBCDCB47_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2DF7DD70F3426B64(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2DF7DD70F3426B64_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2DF7DD70F3426B64_1(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_2DF7DD70F3426B64_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F0940A84A4CE54F7(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::FloatCurveBundle* a3, ::FloatCurveBundle* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F0940A84A4CE54F7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F0940A84A4CE54F7_1(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::FloatCurveBundle* a3, ::FloatCurveBundle* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F0940A84A4CE54F7_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F552CBD036D44B0E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F552CBD036D44B0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_943F2B81940D2E4F(::UnityEngine::Vector4 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_943F2B81940D2E4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0924591D59A29346(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_0924591D59A29346_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_8C6E66D260CC37AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F14CCE4A035E01BB(::SingleFloatCurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F14CCE4A035E01BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B827C9E79C42E4D(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1B827C9E79C42E4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6105334A729F22E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B3E91D44E1B56C4(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_7B3E91D44E1B56C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1061B425553C70AD(::UnityEngine::Texture3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1061B425553C70AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_38317C3EB9517511(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_38317C3EB9517511_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_38317C3EB9517511_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_38317C3EB9517511_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_92CCC91F69044DF3(::Vector3CurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_92CCC91F69044DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D77CB506648C3FE(::Vector3CurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5D77CB506648C3FE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_479759059E440327_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_92CCC91F69044DF3_1(::Vector3CurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_92CCC91F69044DF3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A307B09C839C8E05(::UnityEngine::Transform* a1, ::Vector3CurveBundle* a2, ::Vector3CurveBundle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Vector3CurveBundle*, ::Vector3CurveBundle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_A307B09C839C8E05_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F22E1545DBE08A2A(::System::Collections::Generic::List_1<::Attractor*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Attractor*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F22E1545DBE08A2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9CF45FA43B435E65(::Il2CppArray<::UnityEngine::Vector4>* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_9CF45FA43B435E65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B827C9E79C42E4D_1(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_1B827C9E79C42E4D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F2708A6D3DD46105(::UnityEngine::RenderTexture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_F2708A6D3DD46105_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BD45C3FBD199F6FA(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD45C3FBD199F6FA_1(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD45C3FBD199F6FA_2(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_BD45C3FBD199F6FA_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7BDFCF441D66B0C(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E7BDFCF441D66B0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_83961D23712DE6B1(::UnityEngine::Texture2D* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_83961D23712DE6B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B3E91D44E1B56C4_1(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_7B3E91D44E1B56C4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B899891800169B0(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_3B899891800169B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_26F5329D663D1E39(::SingleFloatCurveBundle* a1, ::SingleFloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::SingleFloatCurveBundle*, ::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_26F5329D663D1E39_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::String*>* Method_1_E9F96114DE456040()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E9F96114DE456040_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_E9F96114DE456040_1()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_E9F96114DE456040_1_OFFSET))(this);
	}

	::System::Void Method_1_EA9E584A2A3F0ED7(::RefGPUParticleSystem_CollisionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CollisionType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_EA9E584A2A3F0ED7_OFFSET))(this, a1);
	}

	::System::Void Method_1_478275B65B78A883(::LegacyGPUParticleSystem_EmitterShape a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_EmitterShape))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_478275B65B78A883_OFFSET))(this, a1);
	}

	::System::Void Method_1_6ABC05C71D0DE941(::RefGPUParticleSystem_EmitterShape a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_EmitterShape))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_6ABC05C71D0DE941_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD0BC648CFD0F096(::RefGPUParticleSystem_GPUSimulationSpace a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_GPUSimulationSpace))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_FD0BC648CFD0F096_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5288AD3A76FF1F90(::RefGPUParticleSystem_TurbulenceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_TurbulenceType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5288AD3A76FF1F90_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_5C549BF7442375BC_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

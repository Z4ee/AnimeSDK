#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_CullingMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_DynamicCenterUpdateMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_NoiseQualityMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_Vector3Curve.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERERANI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDF15C0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCDF2170)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_FLASHING_OFFSET UNITYSDK_OFFSET(0xCDF4110)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_080E1913036F2D7A_OFFSET UNITYSDK_OFFSET(0xCDF64B0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xCDF49F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xCDF1E90)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0FA0DC1A5F2C9A46_OFFSET UNITYSDK_OFFSET(0xCDF6660)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_1436F01296AE7E9E_OFFSET UNITYSDK_OFFSET(0xCDF7FF0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0xCDF5D20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xCDF2330)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_28DCFAC6E561ABF3_OFFSET UNITYSDK_OFFSET(0xCDF2890)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_2BD6AADC2D336214_OFFSET UNITYSDK_OFFSET(0xCDF63F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0xCDF4FA0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_35DC9B290E018EE0_OFFSET UNITYSDK_OFFSET(0xCDF6570)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCDF22D0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCDF1D20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0xCDF4E10)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4BA714DB3EE28969_OFFSET UNITYSDK_OFFSET(0xCDF5FB0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xCDF5DC0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_68D158D7FBF6D878_OFFSET UNITYSDK_OFFSET(0xCDF5E40)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xCDF42D0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_7B3D7D2FB25B3ABB_OFFSET UNITYSDK_OFFSET(0xCDF59A0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xCDF2690)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_885ED44B3EB205AE_OFFSET UNITYSDK_OFFSET(0xCDF6090)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_8FD9A03125C62E27_OFFSET UNITYSDK_OFFSET(0xCDF6D20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_9001FEB11D17FB84_OFFSET UNITYSDK_OFFSET(0xCDF7950)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xCDF1750)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0xCDF1DC0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xCDF56B0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_A3CE3797867F0E52_OFFSET UNITYSDK_OFFSET(0xCDF5380)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xCDF5520)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCDF1520)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_BC91D3156F9FBFB8_OFFSET UNITYSDK_OFFSET(0xCDF6860)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_C9170D17EFDB195F_OFFSET UNITYSDK_OFFSET(0xCDF80A0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xCDF5430)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D437D090E63BE8A7_1_OFFSET UNITYSDK_OFFSET(0xCDF62D0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xCDF6200)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xCDF13E0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_DA92A6D4B0CCB4D9_OFFSET UNITYSDK_OFFSET(0xCDF4D80)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0xCDF5BB0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_F96B1C7229DF29DF_OFFSET UNITYSDK_OFFSET(0xCDF4570)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCDF1AB0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCDF1600)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_RESET_OFFSET UNITYSDK_OFFSET(0xCDF1470)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_UPDATE_OFFSET UNITYSDK_OFFSET(0xCDF1BD0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDF8800)
#define RPG_CLIENT_EFFECT_LINERENDERERANI__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF8430)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererAni_TypeDefinitionIndex = 70463;

	class Effect_LineRendererAni : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_IEOEMHDOLMD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x5EA40);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GBOFOONMIFB()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x5EA48);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_AFCBNPOGMPI()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x5EA50);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_LNEBFEMHHAB()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x5EA58);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_GACDMFGMLLG()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x5EA60);
		}
		static ::System::Int32* StaticGet_RandomSeedShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x13600);
		}
		static ::System::Int32* StaticGet_QualitySetting()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererAni_TypeDefinitionIndex)->GetStaticField(0x13604);
		}
		// static const ::System::Single JCGBLOEMAPO; // 0x0
		// static const ::System::Boolean KPPEIPKFBLP; // 0x0
		// static const ::System::Int32 MADLEAMLGOL = 0x1; // 0x0
		// static const ::System::Single HKGIGHNENPK; // 0x0
		// static const ::System::Single JOEOFOLJCLE; // 0x0
		// static const ::System::Int32 PGIDIJKAFCE = 0xFF; // 0x0
		// static const ::System::Int32 JPPPKIFNNKP = 0x1; // 0x0
		// static const ::System::Int32 ANGIHJMACEO = 0x7; // 0x0
		// static const ::System::Int32 KCPOFDBDJPC = 0xF; // 0x0
		// static const ::System::Single NMIBFCHMFOH; // 0x0
		::System::Int32 LineLength; // 0x18
		::System::Single FollowSpeed; // 0x1C
		::UnityEngine::AnimationCurve* FollowCurve; // 0x20
		::UnityEngine::ParticleSystemSimulationSpace simulationSpace; // 0x28
		::UnityEngine::Transform* customSimulationSpace; // 0x30
		::System::Boolean UseTimeDelay; // 0x38
		::System::Single TimeDelay; // 0x3C
		::UnityEngine::AnimationCurve* TimeBlinkCurve; // 0x40
		::System::Boolean DOPLKAEJBBN; // 0x48
		::System::Single PHMCBNDJNIL; // 0x4C
		::System::Single JOLHIGLIPLF; // 0x50
		::UnityEngine::Vector3 LineTailOffset; // 0x54
		::System::Single LineTailOffsetLength; // 0x60
		::System::Boolean LineTailCurveOffsetEnable; // 0x64
		::RPG::Client::Effect_LineRendererAni_Vector3Curve LineTailOffsetCurve; // 0x68
		::System::Boolean LineTailCenterOffsetEnable; // 0x78
		::System::Single LineTailCenterOffsetRatio; // 0x7C
		::System::Boolean UseRatioSym; // 0x80
		::UnityEngine::Vector3 PointOffsetRandom; // 0x84
		::UnityEngine::Vector3 WaveOffset; // 0x90
		::System::Single WaveLength; // 0x9C
		::System::Single WaveSpeed; // 0xA0
		::System::Boolean UseLifeTimeScaling; // 0xA4
		::System::Single LifeTime; // 0xA8
		::UnityEngine::AnimationCurve* ScalingPosCurve; // 0xB0
		::UnityEngine::AnimationCurve* ScalingWidthCurve; // 0xB8
		::System::Boolean UseTransScale; // 0xC0
		::System::Single OriWidthMultiplier; // 0xC4
		::System::Boolean UseDynamicMode; // 0xC8
		::UnityEngine::Transform* CustomDynamicCenter; // 0xD0
		::RPG::Client::Effect_LineRendererAni_DynamicCenterUpdateMode CenterUpdateMode; // 0xD8
		::System::Single CenterForceScale; // 0xDC
		::System::Single DragForce; // 0xE0
		::System::Single DynamicForceBlend; // 0xE4
		::System::Boolean NoiseEnable; // 0xE8
		::System::Single NoiseStrength; // 0xEC
		::System::Single NoiseFrequency; // 0xF0
		::RPG::Client::Effect_LineRendererAni_NoiseQualityMode NoiseQuality; // 0xF4
		::System::Single ScrollSpeed; // 0xF8
		::UnityEngine::AnimationCurve* NoiseRatioCurve; // 0x100
		::System::Boolean _UseNoiseSetupRatioTime; // 0x108
		::System::Single _NoiseSetupRatioStartTime; // 0x10C
		::System::Single _NoiseSetupRatioEndTime; // 0x110
		::System::Single _NoiseWeight; // 0x114
		::System::UInt32 _fixedTickRate; // 0x118
		::System::Boolean _updatePointInLateTick; // 0x11C
		::System::Boolean BlinkSmooth; // 0x11D
		::System::Single BlinkSmoothMaxRange; // 0x120
		::System::Single BlinkSmoottFollowSpeedPow; // 0x124
		::System::Single FlashCommitMinDistance; // 0x128
		::System::Boolean FlashCommitManual; // 0x12C
		::System::Boolean EditorPreview; // 0x12D
		::System::Boolean UpdateDistanceEnable; // 0x12E
		::System::Single UpdateDistanceScale; // 0x130
		::System::Single UpdateBoundsSizeScale; // 0x134
		::System::Boolean ContinuousUpdateBounds; // 0x138
		::RPG::Client::Effect_LineRendererAni_CullingMode LineRenderCullingMode; // 0x13C
		::System::Boolean VisableState; // 0x140
		::System::Boolean UpdateState; // 0x141
		::System::Int32 TargetWaitCount; // 0x144
		::System::Int32 UpdateCount; // 0x148
		::UnityEngine::LineRenderer* MFAHAGLIOMK; // 0x150
		::Il2CppArray<::UnityEngine::Vector3>* NDLHIIGJMEL; // 0x158
		::Il2CppArray<::UnityEngine::Vector3>* PCFDMAPICLM; // 0x160
		::System::Nullable_1<::UnityEngine::Matrix4x4> LNHFKPFGJFG; // 0x168
		::System::Nullable_1<::UnityEngine::Matrix4x4> GKGPNHIDBMB; // 0x1AC
		::System::Boolean GGMBMBPBIPG; // 0x1F0
		::System::Boolean DODGGBONNPK; // 0x1F1
		::System::Boolean GCCOEINGCPH; // 0x1F2
		::UnityEngine::Vector3 OFOBKCMBBDP; // 0x1F4
		::UnityEngine::Matrix4x4 KPKAEPANNGD; // 0x200
		::System::Single APKGABOANPB; // 0x240
		::System::Boolean IMCNIMNDENN; // 0x244
		::UnityEngine::Vector3 BJOCBPFKJDP; // 0x248
		::UnityEngine::Vector3 BBMPPHGMLCH; // 0x254
		::UnityEngine::Bounds LEMEEBPKBJB; // 0x260
		::System::Boolean DNALBLMLCHM; // 0x278
		::UnityEngine::Vector3 ILGGJJHMJIC; // 0x27C
		::System::Single CIEOKMJDNEO; // 0x288
		::System::Single HKHFGIOJEPK; // 0x28C
		::System::Single LGDJALFABCL; // 0x290
		::System::Single HGAJKMDAOOL; // 0x294
		::System::Boolean BJMJLOKEEIB; // 0x298
		::UnityEngine::Vector2 PNLCJNLHHDN; // 0x29C
		::UnityEngine::Vector2 NHCDJGAFIOI; // 0x2A4
		::UnityEngine::Vector3 PADCEMKOHGM; // 0x2AC
		::UnityEngine::Vector2 KNGJMGMEFLG; // 0x2B8
		::UnityEngine::Vector2 PFFINHHHDHB; // 0x2C0
		::UnityEngine::Vector2 EKDKKIIEGGK; // 0x2C8
		::UnityEngine::Vector2 EJCEHDBOFAM; // 0x2D0
		::UnityEngine::Vector2 NCOFCKHEAFF; // 0x2D8
		::UnityEngine::Vector2 IDFLDDNOOMK; // 0x2E0
		::UnityEngine::Vector2 AAPLOECJNJN; // 0x2E8
		::UnityEngine::Vector2 JGDIJAKHOFB; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI__CCTOR_OFFSET))();
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_UPDATE_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_5_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_5_F96B1C7229DF29DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_F96B1C7229DF29DF_OFFSET))(this);
		}

		::System::Void Method_5_4A13BD8A67015544()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4A13BD8A67015544_OFFSET))(this);
		}

		::System::Void Method_5_DA92A6D4B0CCB4D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_DA92A6D4B0CCB4D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_28DCFAC6E561ABF3(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_28DCFAC6E561ABF3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_35942D7A8A374AB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_35942D7A8A374AB0_OFFSET))(this);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Single Method_5_A3CE3797867F0E52(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_A3CE3797867F0E52_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Flashing(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_FLASHING_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_9F84D1FF74319152()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_9F84D1FF74319152_OFFSET))(this);
		}

		::System::Boolean Method_5_7B3D7D2FB25B3ABB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_7B3D7D2FB25B3ABB_OFFSET))(this);
		}

		::System::Single Method_5_DAC9219D09D338F5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_DAC9219D09D338F5_OFFSET))(this);
		}

		::System::Boolean Method_5_A0433AB55CC45192()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_A0433AB55CC45192_OFFSET))(this);
		}

		::System::Boolean Method_5_ABFE6A357B89C69A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_ABFE6A357B89C69A_OFFSET))(this);
		}

		::System::Void Method_5_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Int32 Method_5_1A425C083DDF2BB1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_1A425C083DDF2BB1_OFFSET))(this, a1);
		}

		::System::Single Method_5_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 Method_5_68D158D7FBF6D878(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_68D158D7FBF6D878_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_4BA714DB3EE28969(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_4BA714DB3EE28969_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_885ED44B3EB205AE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_885ED44B3EB205AE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_5_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D437D090E63BE8A7_OFFSET))(this, a1);
		}

		::System::Single Method_5_D437D090E63BE8A7_1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_D437D090E63BE8A7_1_OFFSET))(this, a1);
		}

		::System::Single Method_5_2BD6AADC2D336214(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_2BD6AADC2D336214_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_5_080E1913036F2D7A(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_080E1913036F2D7A_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_35DC9B290E018EE0(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_35DC9B290E018EE0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_5_0FA0DC1A5F2C9A46(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0FA0DC1A5F2C9A46_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_BC91D3156F9FBFB8(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_BC91D3156F9FBFB8_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_8FD9A03125C62E27(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_8FD9A03125C62E27_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_5_9001FEB11D17FB84(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_9001FEB11D17FB84_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_5_C9170D17EFDB195F(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_C9170D17EFDB195F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 Method_5_1436F01296AE7E9E(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_1436F01296AE7E9E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_METHOD_5_0D372435D9CAE4BC_OFFSET))(this);
		}
	};
}

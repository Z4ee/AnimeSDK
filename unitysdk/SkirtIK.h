#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SkirtIK_HeadDirEnum.h"
#include "unitysdk/SkirtIK_LookDirection.h"
#include "unitysdk/SkirtIK_Struct_2_BFC2D3C77623B9F7.h"
#include "unitysdk/Struct_2_05A67A9E2D5889AA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_298;
class SkirtIK_HairBoneDataClass;
class SkirtIK_HairIKClass;
class SkirtIK_HairIKFreeAxisClass;
class SkirtIK_SkirtIKClass;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class SkirtIKConfig_Runtime; }
namespace RPG::Client { class SkirtIKConfig_TransformLUT; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SKIRTIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xB93F810)
#define SKIRTIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xB93C830)
#define SKIRTIK_DISABLEHAIRCUSTOMCURVEOFFSET_OFFSET UNITYSDK_OFFSET(0xB93F770)
#define SKIRTIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0xB93EDC0)
#define SKIRTIK_GETCURVEEVALUATEVALUE_OFFSET UNITYSDK_OFFSET(0xB942100)
#define SKIRTIK_GETPERFORMANCERUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0xB93C3B0)
#define SKIRTIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB93C4B0)
#define SKIRTIK_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0xB942000)
#define SKIRTIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xB93EE90)
#define SKIRTIK_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB93FA30)
#define SKIRTIK_METHOD_5_1F16A901C7196AE0_OFFSET UNITYSDK_OFFSET(0xB9424F0)
#define SKIRTIK_METHOD_5_22D0ADB352880F38_OFFSET UNITYSDK_OFFSET(0xB942280)
#define SKIRTIK_METHOD_5_2D95DBC40C7D5B7C_OFFSET UNITYSDK_OFFSET(0xB943480)
#define SKIRTIK_METHOD_5_34AB4F926DABC1DA_OFFSET UNITYSDK_OFFSET(0xB93FCA0)
#define SKIRTIK_METHOD_5_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0xB93F3F0)
#define SKIRTIK_METHOD_5_50C6F82CE7A6278C_OFFSET UNITYSDK_OFFSET(0xB943EF0)
#define SKIRTIK_METHOD_5_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0xB943FD0)
#define SKIRTIK_METHOD_5_6068163BEEE00EFE_OFFSET UNITYSDK_OFFSET(0xB944120)
#define SKIRTIK_METHOD_5_8295FA3648427122_OFFSET UNITYSDK_OFFSET(0xB9421E0)
#define SKIRTIK_METHOD_5_8AEAC92E3736F3D4_OFFSET UNITYSDK_OFFSET(0xB941130)
#define SKIRTIK_METHOD_5_96F4DD40F689F030_OFFSET UNITYSDK_OFFSET(0xB941F30)
#define SKIRTIK_METHOD_5_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0xB945080)
#define SKIRTIK_METHOD_5_99CF361B540397A6_OFFSET UNITYSDK_OFFSET(0xB944080)
#define SKIRTIK_METHOD_5_A08017A2F974EDA8_OFFSET UNITYSDK_OFFSET(0xB942310)
#define SKIRTIK_METHOD_5_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xB945740)
#define SKIRTIK_METHOD_5_C5F9823D509784CD_1_OFFSET UNITYSDK_OFFSET(0xB941E50)
#define SKIRTIK_METHOD_5_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0xB941D70)
#define SKIRTIK_METHOD_5_DFA27085F7A73D0B_OFFSET UNITYSDK_OFFSET(0xB943E00)
#define SKIRTIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xB93F060)
#define SKIRTIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xB93F330)
#define SKIRTIK_RECORDBEFOREIK_OFFSET UNITYSDK_OFFSET(0xB93F470)
#define SKIRTIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xB93EF30)
#define SKIRTIK_SETHAIRCUSTOMCURVEOFFSET_OFFSET UNITYSDK_OFFSET(0xB93F6C0)
#define SKIRTIK_START_OFFSET UNITYSDK_OFFSET(0xB93F880)
#define SKIRTIK_UPDATESKIRTIKSERIALIZEDATAFROMASSET_OFFSET UNITYSDK_OFFSET(0xB93F220)
#define SKIRTIK_UPDATESKIRTIKSERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0xB93F7C0)
#define SKIRTIK__CTOR_OFFSET UNITYSDK_OFFSET(0xB945790)

inline static constexpr unsigned int SkirtIK_TypeDefinitionIndex = 44042;

class SkirtIK : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* Field_5_99; // 0x0
	// static const ::System::String* Field_5_100; // 0x0
	// static const ::System::String* Field_5_101; // 0x0
	// static const ::System::String* Field_5_102; // 0x0
	// static const ::System::Single Field_5_110; // 0x0
	::System::Boolean UseConfigData; // 0x18
	::RPG::Client::SkirtIKConfig_Runtime* ConfigData; // 0x20
	::RPG::Client::SkirtIKConfig_TransformLUT* TransformLUT; // 0x28
	::System::Boolean DisableSkirtIk; // 0x30
	::System::Boolean DisableHairIk; // 0x31
	::System::Single SkirtEndDecayRate; // 0x34
	::System::Single SkirtStartDecayRate; // 0x38
	::UnityEngine::Transform* left_HipL; // 0x40
	::UnityEngine::Transform* left_KneeL; // 0x48
	::System::Single fLOriWeight; // 0x50
	::UnityEngine::Quaternion minL; // 0x54
	::UnityEngine::Quaternion maxL; // 0x64
	::System::Boolean LMaxWeightAdjust; // 0x74
	::UnityEngine::AnimationCurve* LWeightCurve; // 0x78
	::System::Single lLerp; // 0x80
	::Il2CppArray<::SkirtIK_SkirtIKClass*>* LSkirtIK; // 0x88
	::UnityEngine::Transform* right_HipR; // 0x90
	::UnityEngine::Transform* right_KneeR; // 0x98
	::System::Single fROriWeight; // 0xA0
	::UnityEngine::Quaternion minR; // 0xA4
	::UnityEngine::Quaternion maxR; // 0xB4
	::System::Boolean RMaxWeightAdjust; // 0xC4
	::UnityEngine::AnimationCurve* RWeightCurve; // 0xC8
	::System::Single rLerp; // 0xD0
	::Il2CppArray<::SkirtIK_SkirtIKClass*>* RSkirtIK; // 0xD8
	::System::Boolean Field_5_25; // 0xE0
	::System::Single MoveX; // 0xE4
	::System::Single MoveY; // 0xE8
	::UnityEngine::AnimationCurve* UDRatioCurve; // 0xF0
	::UnityEngine::AnimationCurve* LRRatioCurve; // 0xF8
	::System::Single UDWeight; // 0x100
	::System::Single LRWeight; // 0x104
	::UnityEngine::Vector2 vCorrect; // 0x108
	::System::Single HairErrTolerRate; // 0x110
	::System::Single HairDecayRate; // 0x114
	::System::Single HairStartDecayRate; // 0x118
	::System::Boolean UseNewRotationEvaluateMode; // 0x11C
	::System::Boolean UseDirectionPosition; // 0x11D
	::System::Boolean AccurateAngleEnable; // 0x11E
	::UnityEngine::Vector3 SpecialUpAngle; // 0x120
	::UnityEngine::Vector3 SpecialDownAngle; // 0x12C
	::UnityEngine::Vector4 SpecialLeftAngle; // 0x138
	::UnityEngine::Vector4 SpecialRightAngle; // 0x148
	::UnityEngine::Vector4 DebugValue; // 0x158
	::UnityEngine::Vector2 HairIKUDAngle; // 0x168
	::UnityEngine::Vector2 HairIKCentre; // 0x170
	::UnityEngine::Vector2 HairIKLRAngle; // 0x178
	::System::Int32 From; // 0x180
	::System::Int32 To; // 0x184
	::System::Int32 BoneNum; // 0x188
	::Il2CppArray<::SkirtIK_HairBoneDataClass*>* HairBoneData; // 0x190
	::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKUp; // 0x198
	::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKLeft; // 0x1A0
	::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKRight; // 0x1A8
	::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKDown; // 0x1B0
	::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKCustom; // 0x1B8
	::System::Collections::Generic::List_1<::SkirtIK_HairIKFreeAxisClass*>* HairIKFreeAxisData; // 0x1C0
	::System::Boolean DisableHairRestrict; // 0x1C8
	::System::Single HairMaxRestrict; // 0x1CC
	::System::Single accuracy; // 0x1D0
	::UnityEngine::Quaternion minL_Knee; // 0x1D4
	::UnityEngine::Quaternion maxL_Knee; // 0x1E4
	::UnityEngine::Quaternion minR_Knee; // 0x1F4
	::UnityEngine::Quaternion maxR_Knee; // 0x204
	::UnityEngine::Quaternion Field_5_64; // 0x214
	::UnityEngine::Quaternion Field_5_65; // 0x224
	::System::Single Field_5_66; // 0x234
	::System::Single Field_5_67; // 0x238
	::System::Single Field_5_68; // 0x23C
	::System::Single Field_5_69; // 0x240
	::UnityEngine::GameObject* Field_5_70; // 0x248
	::UnityEngine::GameObject* Field_5_71; // 0x250
	::RootMotion::FinalIK::GrounderIK* Field_5_72; // 0x258
	::RPG::Client::LookAtIK* Field_5_73; // 0x260
	::UnityEngine::Transform* Field_5_74; // 0x268
	::RPG::Client::AttachPointMapping* Field_5_75; // 0x270
	::RPG::Client::CharacterMonoAvatar* Field_5_76; // 0x278
	::System::Boolean Field_5_77; // 0x280
	::UnityEngine::Vector3 Field_5_78; // 0x284
	::System::Boolean Field_5_79; // 0x290
	::UnityEngine::Animator* Field_5_80; // 0x298
	::System::Boolean Field_5_81; // 0x2A0
	::System::Boolean Field_5_82; // 0x2A1
	::System::Boolean Field_5_83; // 0x2A2
	::System::Boolean Field_5_84; // 0x2A3
	::System::Boolean Field_5_85; // 0x2A4
	::System::Boolean Field_5_86; // 0x2A5
	::System::Boolean Field_5_87; // 0x2A6
	::System::Boolean Field_5_88; // 0x2A7
	::System::Boolean Field_5_89; // 0x2A8
	::System::Boolean Field_5_90; // 0x2A9
	::System::Boolean Field_5_91; // 0x2AA
	::System::Boolean Field_5_92; // 0x2AB
	::System::Boolean Field_5_93; // 0x2AC
	::System::Single Field_5_94; // 0x2B0
	::System::Single Field_5_95; // 0x2B4
	::System::Single Field_5_96; // 0x2B8
	::System::Single Field_5_97; // 0x2BC
	::System::Single Field_5_98; // 0x2C0
	::System::Single Field_5_103; // 0x2C4
	::System::Single Field_5_104; // 0x2C8
	::System::Boolean Field_5_105; // 0x2CC
	::Il2CppArray<::SkirtIK_HairIKClass*>* Field_5_106; // 0x2D0
	::Il2CppArray<::UnityEngine::Vector2>* Field_5_107; // 0x2D8
	::Il2CppArray<::SkirtIK_Struct_2_BFC2D3C77623B9F7>* Field_5_108; // 0x2E0
	::SkirtIK_HairIKFreeAxisClass* Field_5_109; // 0x2E8
	::System::Boolean Field_5_111; // 0x2F0
	::UnityEngine::Vector3 Field_5_112; // 0x2F4
	::SkirtIK_LookDirection Field_5_113; // 0x300
	::System::Boolean Field_5_114; // 0x304
	::System::Single Field_5_115; // 0x308
	::System::Single Field_5_116; // 0x30C
	::System::Single Field_5_117; // 0x310
	::System::Single Field_5_118; // 0x314
	::UnityEngine::AnimationCurve* Field_5_119; // 0x318
	::System::Boolean Field_5_120; // 0x320
	::System::Single Field_5_121; // 0x324
	::System::Single Field_5_122; // 0x328
	::System::Single Field_5_123; // 0x32C
	::System::Single Field_5_124; // 0x330
	::Il2CppArray<::UnityEngine::Transform*>* _HairBone; // 0x338
	::Il2CppArray<::UnityEngine::Transform*>* _LeftSkirtBone; // 0x340
	::Il2CppArray<::UnityEngine::Transform*>* _RightSkirtBone; // 0x348

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK__CTOR_OFFSET))(this);
	}

	::System::Boolean GetPerformanceRuntimeCache(::System::String*& a1, ::Class_0_16E4307DCC419505_298*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::Class_0_16E4307DCC419505_298*&))((::PBYTE)hIl2Cpp + SKIRTIK_GETPERFORMANCERUNTIMECACHE_OFFSET))(this, a1, a2);
	}

	::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + SKIRTIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
	}

	::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_05A67A9E2D5889AA& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_05A67A9E2D5889AA&))((::PBYTE)hIl2Cpp + SKIRTIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
	}

	::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_05A67A9E2D5889AA& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_05A67A9E2D5889AA&))((::PBYTE)hIl2Cpp + SKIRTIK_FLUSHTHREADDATA_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsProcessable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_GET_ISPROCESSABLE_OFFSET))(this);
	}

	::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + SKIRTIK_SAFEINIT_OFFSET))(this, a1);
	}

	::System::Void PreProcess()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_PREPROCESS_OFFSET))(this);
	}

	::System::Boolean Process(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_PROCESS_OFFSET))(this, a1);
	}

	::System::Void RecordBeforeIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_RECORDBEFOREIK_OFFSET))(this);
	}

	::System::Void SetHairCustomCurveOffset(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + SKIRTIK_SETHAIRCUSTOMCURVEOFFSET_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void DisableHairCustomCurveOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_DISABLEHAIRCUSTOMCURVEOFFSET_OFFSET))(this);
	}

	::System::Void UpdateSkirtIKSerializeData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_UPDATESKIRTIKSERIALIZEDATA_OFFSET))(this);
	}

	::System::Void UpdateSkirtIKSerializeDataFromAsset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_UPDATESKIRTIKSERIALIZEDATAFROMASSET_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_START_OFFSET))(this);
	}

	::System::Void Method_5_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_5_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Single Method_5_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Single Method_5_C5F9823D509784CD_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_C5F9823D509784CD_1_OFFSET))(this, a1);
	}

	::System::Single Method_5_96F4DD40F689F030(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_96F4DD40F689F030_OFFSET))(this, a1, a2);
	}

	static ::System::Single GetWeight(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_GETWEIGHT_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single GetCurveEvaluateValue(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_GETCURVEEVALUATEVALUE_OFFSET))(a1, a2, a3);
	}

	::System::Single Method_5_8295FA3648427122(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_8295FA3648427122_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_22D0ADB352880F38(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_22D0ADB352880F38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_34AB4F926DABC1DA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_34AB4F926DABC1DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_8AEAC92E3736F3D4(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_8AEAC92E3736F3D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_1F16A901C7196AE0(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_1F16A901C7196AE0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_DFA27085F7A73D0B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_DFA27085F7A73D0B_OFFSET))(this, a1);
	}

	static ::SkirtIK_Struct_2_BFC2D3C77623B9F7 Method_5_50C6F82CE7A6278C(::SkirtIK_HairIKFreeAxisClass* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::SkirtIK_Struct_2_BFC2D3C77623B9F7(*)(::SkirtIK_HairIKFreeAxisClass*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_50C6F82CE7A6278C_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_5_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_2D95DBC40C7D5B7C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_2D95DBC40C7D5B7C_OFFSET))(this, a1, a2);
	}

	::SkirtIK_HeadDirEnum Method_5_99CF361B540397A6(::UnityEngine::Vector2 a1)
	{
		return ((::SkirtIK_HeadDirEnum(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_99CF361B540397A6_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_5_A08017A2F974EDA8(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_A08017A2F974EDA8_OFFSET))(this, a1);
	}

	::System::Void Method_5_6068163BEEE00EFE(::SkirtIK_LookDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::SkirtIK_LookDirection))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_6068163BEEE00EFE_OFFSET))(this, a1);
	}

	::System::Void Method_5_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_5_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_METHOD_5_B9A97467188E4B69_OFFSET))(this);
	}
};

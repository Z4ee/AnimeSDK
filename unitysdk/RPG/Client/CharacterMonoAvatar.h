#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECharacterMovementParamsMode.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_456;
class Class_0_16E4307DCC419505_965;
class Class_1_411C76A6422C8F62;
class SkirtIK;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class AttachmentSolver; }
namespace RPG::Client { class AvatarAimController; }
namespace RPG::Client { class FitToGroundIK; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class MonoBodyBlendShapesController; }
namespace RPG::Client { class MonoBodyControlIK; }
namespace RPG::Client { class MonoCharacterRootDamper; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPG::Client { class MonoFourFeetSimpleIK; }
namespace RPG::Client { class MonoFullBodyIK; }
namespace RPG::Client { class TiltCommonConfig; }
namespace RPG::Client { class UpStairFootIK; }
namespace RPG::Client::FullBody { class GrounderQuadruped; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterFootIKConfig; }
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class LimbIK; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERMONOAVATAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1920B450)
#define RPG_CLIENT_CHARACTERMONOAVATAR_COLLECTIKTHREADDATA_OFFSET UNITYSDK_OFFSET(0x1961D4F0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_DISABLEFOOTIK_OFFSET UNITYSDK_OFFSET(0x1961F820)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ENABLEATTACHMENTSOLVERPOINT_OFFSET UNITYSDK_OFFSET(0x1961FE10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ENABLEFOOTIK_OFFSET UNITYSDK_OFFSET(0x1961F6F0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_FINDATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1961E020)
#define RPG_CLIENT_CHARACTERMONOAVATAR_FLUSHIKTHREADDATA_OFFSET UNITYSDK_OFFSET(0x1961D8D0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_FORBIDFOOTIK_OFFSET UNITYSDK_OFFSET(0x1961E660)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GETIKREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1920B950)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620D20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_BODYBLENDSHAPESCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620E60)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_BODYCONTROLIK_OFFSET UNITYSDK_OFFSET(0x19620DC0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_EMOBLENDSHAPESCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620E80)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FITTOGROUNDIK_OFFSET UNITYSDK_OFFSET(0x19620E00)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTIKENABLED_OFFSET UNITYSDK_OFFSET(0x19620B70)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTIKSOLVEDPELVISOFFSET_OFFSET UNITYSDK_OFFSET(0x19620BE0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTL_OFFSET UNITYSDK_OFFSET(0x19620A80)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTR_OFFSET UNITYSDK_OFFSET(0x19620AD0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOURFEETSIMPLEIK_OFFSET UNITYSDK_OFFSET(0x19620D80)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0x19620DE0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0x19620BD0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_GROUNDERQUADRUPED_OFFSET UNITYSDK_OFFSET(0x19620DA0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x19620B20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISFORBIDFOOTIK_OFFSET UNITYSDK_OFFSET(0x19620EA0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISIKLOD_OFFSET UNITYSDK_OFFSET(0x19620CA0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISIKLOWLOD_OFFSET UNITYSDK_OFFSET(0x19620CC0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISLOD0_OFFSET UNITYSDK_OFFSET(0x19620CE0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISMODELLOADED_OFFSET UNITYSDK_OFFSET(0x1920A9E0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0x19620D00)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x19620A20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1920AA00)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_ROOTDAMPER_OFFSET UNITYSDK_OFFSET(0x19620E20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_SKIRTIK_OFFSET UNITYSDK_OFFSET(0x19620D60)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x19620E40)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_TILTROOT_OFFSET UNITYSDK_OFFSET(0x19620A30)
#define RPG_CLIENT_CHARACTERMONOAVATAR_GET_UPSTAIRFOOTIK_OFFSET UNITYSDK_OFFSET(0x19620D40)
#define RPG_CLIENT_CHARACTERMONOAVATAR_HEADLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1961E200)
#define RPG_CLIENT_CHARACTERMONOAVATAR_HEADLOOKAT_OFFSET UNITYSDK_OFFSET(0x1961E170)
#define RPG_CLIENT_CHARACTERMONOAVATAR_HEADSTOPLOOKAT_OFFSET UNITYSDK_OFFSET(0x1961E100)
#define RPG_CLIENT_CHARACTERMONOAVATAR_INITFOOTIK_OFFSET UNITYSDK_OFFSET(0x1961E8A0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ISLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0x1961E290)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ISLOOKATFULLWEIGHT_OFFSET UNITYSDK_OFFSET(0x1961E2F0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1920B500)
#define RPG_CLIENT_CHARACTERMONOAVATAR_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1920B8D0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1920AF10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_2DFEE8820CF51969_OFFSET UNITYSDK_OFFSET(0x1961EDD0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_30699FBD73ED5A97_OFFSET UNITYSDK_OFFSET(0x1920B6A0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x1920B7E0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_6286C6E6E1522088_OFFSET UNITYSDK_OFFSET(0x1961E6C0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_8CB3ABD41F954D02_OFFSET UNITYSDK_OFFSET(0x19620140)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_A7F5E6D57ED9E0FE_OFFSET UNITYSDK_OFFSET(0x1961F3E0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x196208A0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x1920B340)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_D6F1CA1CE793B7CC_OFFSET UNITYSDK_OFFSET(0x196208E0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1961FF90)
#define RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x1920B560)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x1920AA20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_ONMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0x1920B0C0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0x1961E4A0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1961E410)
#define RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATSPEED_OFFSET UNITYSDK_OFFSET(0x1961E380)
#define RPG_CLIENT_CHARACTERMONOAVATAR_POSTPROCESSIK_OFFSET UNITYSDK_OFFSET(0x1961DC50)
#define RPG_CLIENT_CHARACTERMONOAVATAR_PREPROCESSIK_OFFSET UNITYSDK_OFFSET(0x1961DA80)
#define RPG_CLIENT_CHARACTERMONOAVATAR_RESETFOOTIKSOLVERPOSITIONONPLATFORMMOVED_OFFSET UNITYSDK_OFFSET(0x1961FD60)
#define RPG_CLIENT_CHARACTERMONOAVATAR_RESETFOOTIKSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x1961FCA0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKLOCK_1_OFFSET UNITYSDK_OFFSET(0x1961FA10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKLOCK_OFFSET UNITYSDK_OFFSET(0x1961F990)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKMODE_OFFSET UNITYSDK_OFFSET(0x1961FB30)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKPHYSICS_OFFSET UNITYSDK_OFFSET(0x1961FAA0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1961FC20)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETLOOKATDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0x1961E5E0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0x1961E530)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SETUPMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1920B840)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620D30)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_BODYBLENDSHAPESCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620E70)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_BODYCONTROLIK_OFFSET UNITYSDK_OFFSET(0x19620DD0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_EMOBLENDSHAPESCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19620E90)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_FITTOGROUNDIK_OFFSET UNITYSDK_OFFSET(0x19620E10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_FOURFEETSIMPLEIK_OFFSET UNITYSDK_OFFSET(0x19620D90)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_FULLBODYIK_OFFSET UNITYSDK_OFFSET(0x19620DF0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_GROUNDERQUADRUPED_OFFSET UNITYSDK_OFFSET(0x19620DB0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISIKLOD_OFFSET UNITYSDK_OFFSET(0x19620CB0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISIKLOWLOD_OFFSET UNITYSDK_OFFSET(0x19620CD0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISLOD0_OFFSET UNITYSDK_OFFSET(0x19620CF0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISMODELLOADED_OFFSET UNITYSDK_OFFSET(0x1920A9F0)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0x19620D10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x1920AA10)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_ROOTDAMPER_OFFSET UNITYSDK_OFFSET(0x19620E30)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_SKIRTIK_OFFSET UNITYSDK_OFFSET(0x19620D70)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x19620E50)
#define RPG_CLIENT_CHARACTERMONOAVATAR_SET_UPSTAIRFOOTIK_OFFSET UNITYSDK_OFFSET(0x19620D50)
#define RPG_CLIENT_CHARACTERMONOAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19620FC0)
#define RPG_CLIENT_CHARACTERMONOAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19620EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterMonoAvatar_TypeDefinitionIndex = 65340;

	class CharacterMonoAvatar : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RootMotion::FinalIK::LimbIK*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::RootMotion::FinalIK::LimbIK*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterMonoAvatar_TypeDefinitionIndex)->GetStaticField(0x64090);
		}
		// static const ::System::String* PointRoot; // 0x0
		// static const ::System::String* PointFootL; // 0x0
		// static const ::System::String* PointFootR; // 0x0
		// static const ::System::String* PointHead; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		// static const ::System::String* Field_5_6; // 0x0
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::String* Field_5_8; // 0x0
		// static const ::System::String* Field_5_9; // 0x0
		// static const ::System::String* Field_5_10; // 0x0
		// static const ::System::Int32 Field_5_11 = 0x2; // 0x0
		::System::Boolean _IsModelLoaded_k__BackingField; // 0x18
		::UnityEngine::Transform* _Model_k__BackingField; // 0x20
		::RPG::Client::ECharacterMovementParamsMode MovementParamsMode; // 0x28
		::System::Single MaxMoveSpeed; // 0x2C
		::System::Single IdleTurnSpeed; // 0x30
		::System::Single NormalTurnSpeed; // 0x34
		::System::Single MaxTurnSpeed; // 0x38
		::System::Boolean ScaleTurnSpeedWithMoveSpeedRatio; // 0x3C
		::System::Boolean UseTurnBackAnim; // 0x3D
		::System::Boolean UseIdleTurn; // 0x3E
		::System::Single TurnBackStartMoveSpeed; // 0x40
		::System::Single TurnBackStartDeltaAngle; // 0x44
		::System::Single TurnBackTurnSpeed; // 0x48
		::System::Single BrakeDistance; // 0x4C
		::System::Single BodyFowardSizeScale; // 0x50
		::UnityEngine::Vector3 Field_5_27; // 0x54
		::UnityEngine::AnimationCurve* TurnAddRatioCurve; // 0x60
		::System::Boolean EnableMonsterTurnDesiredTimeCurve; // 0x68
		::UnityEngine::AnimationCurve* MonsterTurnDesiredTimeCurve; // 0x70
		::RPG::Client::TiltCommonConfig* TiltOverrideConfig; // 0x78
		::RPG::Client::AttachmentSolver* AttachmentSolver; // 0x80
		::UnityEngine::AnimatorUpdateMode UpdateMode; // 0x88
		::System::Boolean ForceUpdateIKOnLod2; // 0x8C
		::System::Single MaxFootIKStep; // 0x90
		::System::Boolean _IsIKLod_k__BackingField; // 0x94
		::System::Boolean _IsIKLowLod_k__BackingField; // 0x95
		::System::Boolean _IsLod0_k__BackingField; // 0x96
		::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x98
		::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0xA0
		::RPG::Client::UpStairFootIK* _UpStairFootIK_k__BackingField; // 0xA8
		::SkirtIK* _SkirtIK_k__BackingField; // 0xB0
		::RPG::Client::MonoFourFeetSimpleIK* _FourFeetSimpleIK_k__BackingField; // 0xB8
		::RPG::Client::FullBody::GrounderQuadruped* _GrounderQuadruped_k__BackingField; // 0xC0
		::RPG::Client::MonoBodyControlIK* _BodyControlIK_k__BackingField; // 0xC8
		::RPG::Client::MonoFullBodyIK* _FullBodyIK_k__BackingField; // 0xD0
		::RPG::Client::FitToGroundIK* _FitToGroundIK_k__BackingField; // 0xD8
		::RPG::Client::MonoCharacterRootDamper* _RootDamper_k__BackingField; // 0xE0
		::UnityChan::SpringManager* _SpringManager_k__BackingField; // 0xE8
		::RPG::Client::MonoBodyBlendShapesController* _BodyBlendShapesController_k__BackingField; // 0xF0
		::RPG::Client::MonoEmoBlendShapesController* _EmoBlendShapesController_k__BackingField; // 0xF8
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_456*>* AnimIKDependents; // 0x100
		::System::Boolean Field_5_53; // 0x108
		::RPG::GameCore::AdventureCharacterController* Field_5_54; // 0x110
		::RPG::Client::AttachPointMapping* Field_5_55; // 0x118
		::System::Single Field_5_56; // 0x120
		::UnityEngine::Transform* Field_5_57; // 0x128
		::RootMotion::FinalIK::GrounderIK* Field_5_58; // 0x130
		::RootMotion::FinalIK::LimbIK* Field_5_59; // 0x138
		::RootMotion::FinalIK::LimbIK* Field_5_60; // 0x140
		::System::Boolean Field_5_61; // 0x148
		::System::Boolean Field_5_62; // 0x149
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_965*>* Field_5_63; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsModelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISMODELLOADED_OFFSET))(this);
		}

		::System::Void set_IsModelLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISMODELLOADED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Model()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_MODEL_OFFSET))(this, a1);
		}

		::System::Void OnModelLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ONMODELLOADED_OFFSET))(this, a1);
		}

		::System::Void OnModelUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ONMODELUNLOAD_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_FE327FD0760E1514(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_FE327FD0760E1514_OFFSET))(this, a1);
		}

		::System::Void Method_5_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_5_CD8EB704BDED69B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_CD8EB704BDED69B6_OFFSET))(this);
		}

		::System::Void Method_5_30699FBD73ED5A97(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_30699FBD73ED5A97_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_414C8F92528E4746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_414C8F92528E4746_OFFSET))(this);
		}

		::System::Void SetupManualUpdate(::System::Boolean a1, ::RPG::GameCore::AdventureCharacterController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETUPMANUALUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void ManualLateUpdate(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_MANUALLATEUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void GetIKReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GETIKREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectIKThreadData(::Class_1_411C76A6422C8F62* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_411C76A6422C8F62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_COLLECTIKTHREADDATA_OFFSET))(this, a1);
		}

		::System::Void FlushIKThreadData(::Class_1_411C76A6422C8F62* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_411C76A6422C8F62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_FLUSHIKTHREADDATA_OFFSET))(this, a1);
		}

		::System::Void PreProcessIK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_PREPROCESSIK_OFFSET))(this, a1);
		}

		::System::Void PostProcessIK(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_POSTPROCESSIK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* FindAttachPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_FINDATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void HeadStopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_HEADSTOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void HeadLookAt(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_HEADLOOKAT_OFFSET))(this, a1);
		}

		::System::Void HeadLookAt_1(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::GameCore::CharacterHeadConstraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_HEADLOOKAT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsLookAtActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ISLOOKATACTIVE_OFFSET))(this);
		}

		::System::Boolean IsLookAtFullWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ISLOOKATFULLWEIGHT_OFFSET))(this);
		}

		::System::Void OverrideLookAtSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATSPEED_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATFADEOUTTIME_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_OVERRIDELOOKATFADEINTIME_OFFSET))(this, a1);
		}

		::System::Void SetupCurveBlender(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETUPCURVEBLENDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetLookAtDisableWithCause(::RPG::Client::LookAtDisableCause a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETLOOKATDISABLEWITHCAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ForbidFootIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_FORBIDFOOTIK_OFFSET))(this, a1);
		}

		::System::Void InitFootIK(::UnityEngine::GameObject* a1, ::RPG::GameCore::AdventureCharacterFootIKConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::AdventureCharacterFootIKConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_INITFOOTIK_OFFSET))(this, a1, a2);
		}

		::System::Void EnableFootIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ENABLEFOOTIK_OFFSET))(this);
		}

		::System::Void DisableFootIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_DISABLEFOOTIK_OFFSET))(this);
		}

		::System::Void SetFootIKLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKLOCK_OFFSET))(this, a1);
		}

		::System::Void SetFootIKLock_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKLOCK_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFootIKPhysics(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKPHYSICS_OFFSET))(this, a1, a2);
		}

		::System::Void SetFootIKMode(::RPG::GameCore::EFootIKMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EFootIKMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKMODE_OFFSET))(this, a1);
		}

		::System::Void SetFootIKSolverUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SETFOOTIKSOLVERUPDATE_OFFSET))(this, a1);
		}

		::System::Void ResetFootIKSolverPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_RESETFOOTIKSOLVERPOSITION_OFFSET))(this, a1);
		}

		::System::Void ResetFootIKSolverPositionOnPlatformMoved(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_RESETFOOTIKSOLVERPOSITIONONPLATFORMMOVED_OFFSET))(this, a1);
		}

		::System::Void EnableAttachmentSolverPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_ENABLEATTACHMENTSOLVERPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2DFEE8820CF51969(::RPG::GameCore::AdventureCharacterFootIKConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterFootIKConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_2DFEE8820CF51969_OFFSET))(this, a1);
		}

		::System::Void Method_5_A7F5E6D57ED9E0FE(::RPG::GameCore::AdventureCharacterFootIKConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterFootIKConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_A7F5E6D57ED9E0FE_OFFSET))(this, a1);
		}

		::System::Void Method_5_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_DA37DFE3A5BDA9F4_OFFSET))(this);
		}

		::System::Void Method_5_8CB3ABD41F954D02(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_8CB3ABD41F954D02_OFFSET))(this, a1);
		}

		::System::Void Method_5_6286C6E6E1522088(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_6286C6E6E1522088_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* Method_5_D6F1CA1CE793B7CC()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_METHOD_5_D6F1CA1CE793B7CC_OFFSET))(this);
		}

		::System::Boolean get_ManualUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_MANUALUPDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TiltRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_TILTROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_FootL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTL_OFFSET))(this);
		}

		::UnityEngine::Transform* get_FootR()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Head()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_HEAD_OFFSET))(this);
		}

		::System::Boolean get_FootIKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTIKENABLED_OFFSET))(this);
		}

		::RootMotion::FinalIK::GrounderIK* get_GrounderIK()
		{
			return ((::RootMotion::FinalIK::GrounderIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_GROUNDERIK_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FootIKSolvedPelvisOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOOTIKSOLVEDPELVISOFFSET_OFFSET))(this);
		}

		::System::Boolean get_IsIKLod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISIKLOD_OFFSET))(this);
		}

		::System::Void set_IsIKLod(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISIKLOD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIKLowLod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISIKLOWLOD_OFFSET))(this);
		}

		::System::Void set_IsIKLowLod(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISIKLOWLOD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLod0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISLOD0_OFFSET))(this);
		}

		::System::Void set_IsLod0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_ISLOD0_OFFSET))(this, a1);
		}

		::RPG::Client::LookAtIK* get_LookAtIK()
		{
			return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_LOOKATIK_OFFSET))(this);
		}

		::System::Void set_LookAtIK(::RPG::Client::LookAtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_LOOKATIK_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarAimController* get_AimController()
		{
			return ((::RPG::Client::AvatarAimController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_AIMCONTROLLER_OFFSET))(this);
		}

		::System::Void set_AimController(::RPG::Client::AvatarAimController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarAimController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_AIMCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::UpStairFootIK* get_UpStairFootIK()
		{
			return ((::RPG::Client::UpStairFootIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_UPSTAIRFOOTIK_OFFSET))(this);
		}

		::System::Void set_UpStairFootIK(::RPG::Client::UpStairFootIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UpStairFootIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_UPSTAIRFOOTIK_OFFSET))(this, a1);
		}

		::SkirtIK* get_SkirtIK()
		{
			return ((::SkirtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_SKIRTIK_OFFSET))(this);
		}

		::System::Void set_SkirtIK(::SkirtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SkirtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_SKIRTIK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoFourFeetSimpleIK* get_FourFeetSimpleIK()
		{
			return ((::RPG::Client::MonoFourFeetSimpleIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FOURFEETSIMPLEIK_OFFSET))(this);
		}

		::System::Void set_FourFeetSimpleIK(::RPG::Client::MonoFourFeetSimpleIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_FOURFEETSIMPLEIK_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::GrounderQuadruped* get_GrounderQuadruped()
		{
			return ((::RPG::Client::FullBody::GrounderQuadruped*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_GROUNDERQUADRUPED_OFFSET))(this);
		}

		::System::Void set_GrounderQuadruped(::RPG::Client::FullBody::GrounderQuadruped* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::GrounderQuadruped*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_GROUNDERQUADRUPED_OFFSET))(this, a1);
		}

		::RPG::Client::MonoBodyControlIK* get_BodyControlIK()
		{
			return ((::RPG::Client::MonoBodyControlIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_BODYCONTROLIK_OFFSET))(this);
		}

		::System::Void set_BodyControlIK(::RPG::Client::MonoBodyControlIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoBodyControlIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_BODYCONTROLIK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoFullBodyIK* get_FullBodyIK()
		{
			return ((::RPG::Client::MonoFullBodyIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FULLBODYIK_OFFSET))(this);
		}

		::System::Void set_FullBodyIK(::RPG::Client::MonoFullBodyIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFullBodyIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_FULLBODYIK_OFFSET))(this, a1);
		}

		::RPG::Client::FitToGroundIK* get_FitToGroundIK()
		{
			return ((::RPG::Client::FitToGroundIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_FITTOGROUNDIK_OFFSET))(this);
		}

		::System::Void set_FitToGroundIK(::RPG::Client::FitToGroundIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FitToGroundIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_FITTOGROUNDIK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCharacterRootDamper* get_RootDamper()
		{
			return ((::RPG::Client::MonoCharacterRootDamper*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ROOTDAMPER_OFFSET))(this);
		}

		::System::Void set_RootDamper(::RPG::Client::MonoCharacterRootDamper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCharacterRootDamper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_ROOTDAMPER_OFFSET))(this, a1);
		}

		::UnityChan::SpringManager* get_SpringManager()
		{
			return ((::UnityChan::SpringManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_SPRINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SpringManager(::UnityChan::SpringManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_SPRINGMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MonoBodyBlendShapesController* get_BodyBlendShapesController()
		{
			return ((::RPG::Client::MonoBodyBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_BODYBLENDSHAPESCONTROLLER_OFFSET))(this);
		}

		::System::Void set_BodyBlendShapesController(::RPG::Client::MonoBodyBlendShapesController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoBodyBlendShapesController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_BODYBLENDSHAPESCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoBlendShapesController* get_EmoBlendShapesController()
		{
			return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_EMOBLENDSHAPESCONTROLLER_OFFSET))(this);
		}

		::System::Void set_EmoBlendShapesController(::RPG::Client::MonoEmoBlendShapesController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_SET_EMOBLENDSHAPESCONTROLLER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidFootIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERMONOAVATAR_GET_ISFORBIDFOOTIK_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/RPG/Client/FullBodyIKBoneReferences.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_5197CFA03C4557BE;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class FullBodyIKBodyConfig; }
namespace RPG::Client { class FullBodyIKEffectorOffset; }
namespace RPG::Client { class FullBodyIKLimbConfig; }
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKSolverFullBodyBiped; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFULLBODYIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD831300)
#define RPG_CLIENT_MONOFULLBODYIK_CLOSEIDLESHOW_OFFSET UNITYSDK_OFFSET(0xD8312A0)
#define RPG_CLIENT_MONOFULLBODYIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xD830660)
#define RPG_CLIENT_MONOFULLBODYIK_INIT_OFFSET UNITYSDK_OFFSET(0xD8303D0)
#define RPG_CLIENT_MONOFULLBODYIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD831350)
#define RPG_CLIENT_MONOFULLBODYIK_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD831790)
#define RPG_CLIENT_MONOFULLBODYIK_METHOD_5_E6ACF41C29FA8932_OFFSET UNITYSDK_OFFSET(0xD8315C0)
#define RPG_CLIENT_MONOFULLBODYIK_METHOD_5_E949A493D26573BF_OFFSET UNITYSDK_OFFSET(0xD831430)
#define RPG_CLIENT_MONOFULLBODYIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8313B0)
#define RPG_CLIENT_MONOFULLBODYIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xD830670)
#define RPG_CLIENT_MONOFULLBODYIK_RESETLIMBCHAINEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD830C80)
#define RPG_CLIENT_MONOFULLBODYIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xD82FCB0)
#define RPG_CLIENT_MONOFULLBODYIK_SETFORCEUSELIMBCHAINEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD830740)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINBENDGOALWEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD831130)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINBENDGOAL_OFFSET UNITYSDK_OFFSET(0xD831220)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINEFFECTORBLEND_OFFSET UNITYSDK_OFFSET(0xD8309F0)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD830840)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINMAPPINGWEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD831050)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINPOSITIONWEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD830E90)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINROTATIONWEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD830F70)
#define RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINWEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD830DD0)
#define RPG_CLIENT_MONOFULLBODYIK_UNINIT_OFFSET UNITYSDK_OFFSET(0xD830370)
#define RPG_CLIENT_MONOFULLBODYIK__CTOR_OFFSET UNITYSDK_OFFSET(0xD831F60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFullBodyIK_TypeDefinitionIndex = 68566;

	class MonoFullBodyIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single BlendInTime; // 0x18
		::System::Single BlendOutTime; // 0x1C
		::Il2CppArray<::Class_1_5197CFA03C4557BE*>* DMPFADCPIPD; // 0x20
		::RPG::Client::FullBodyIKEffectorOffset* effectorOffset; // 0x28
		::RPG::Client::FullBodyIKBoneReferences boneReferences; // 0x30
		::RPG::Client::FullBodyIKBodyConfig* body; // 0xB0
		::RPG::Client::FullBodyIKLimbConfig* leftArm; // 0xB8
		::RPG::Client::FullBodyIKLimbConfig* rightArm; // 0xC0
		::RPG::Client::FullBodyIKLimbConfig* leftLeg; // 0xC8
		::RPG::Client::FullBodyIKLimbConfig* rightLeg; // 0xD0
		::RPG::Client::FullBody::IKSolverFullBodyBiped* solver; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK__CTOR_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void SetForceUseLimbChainEffector(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETFORCEUSELIMBCHAINEFFECTOR_OFFSET))(this, a1);
		}

		::System::Void SetupLimbChainEffector(::RPG::Client::FullBody::FullBodyBipedChain a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINEFFECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetupLimbChainEffectorBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINEFFECTORBLEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetLimbChainEffector(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_RESETLIMBCHAINEFFECTOR_OFFSET))(this, a1);
		}

		::System::Void SetupLimbChainWeightBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINWEIGHTBLEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetupLimbChainPositionWeightBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINPOSITIONWEIGHTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLimbChainRotationWeightBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINROTATIONWEIGHTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLimbChainMappingWeightBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINMAPPINGWEIGHTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLimbChainBendGoalWeightBlend(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINBENDGOALWEIGHTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupLimbChainBendGoal(::RPG::Client::FullBody::FullBodyBipedChain a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_SETUPLIMBCHAINBENDGOAL_OFFSET))(this, a1, a2);
		}

		static ::System::Void CloseIdleShow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_CLOSEIDLESHOW_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_E949A493D26573BF(::RPG::Client::FullBody::FBIKChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_METHOD_5_E949A493D26573BF_OFFSET))(this, a1);
		}

		::System::Void Method_5_E6ACF41C29FA8932(::RPG::Client::FullBodyIKLimbConfig* a1, ::RPG::Client::FullBody::FBIKChain* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBodyIKLimbConfig*, ::RPG::Client::FullBody::FBIKChain*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_METHOD_5_E6ACF41C29FA8932_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFULLBODYIK_UNINIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class StateRunBlendTree_Class_1_3B76E13757985C28_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_0F9F7473284990EE_OFFSET UNITYSDK_OFFSET(0xB1CF0A0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_253939E38255333C_OFFSET UNITYSDK_OFFSET(0xB1CF2E0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_316207AB65D83105_OFFSET UNITYSDK_OFFSET(0xB1CE5C0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xB1CDFD0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_41674EA405344719_OFFSET UNITYSDK_OFFSET(0xB1CFB60)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_5200FCB2A2AED1C2_OFFSET UNITYSDK_OFFSET(0xB1CF7F0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_66019C9C927A7F81_OFFSET UNITYSDK_OFFSET(0xB1CFED0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_7C39B552AC01A40C_OFFSET UNITYSDK_OFFSET(0xB1CE660)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_8B9FCF9FEE524950_OFFSET UNITYSDK_OFFSET(0xB1CF550)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_AF2A45B2392898DF_OFFSET UNITYSDK_OFFSET(0xB1CFCE0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BA29415E87DA466B_OFFSET UNITYSDK_OFFSET(0xB1CD930)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BAC72019BD607572_OFFSET UNITYSDK_OFFSET(0xB1CEAE0)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BC809936E0F4F009_OFFSET UNITYSDK_OFFSET(0xB1CE440)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_D1A394DDCA154DC3_OFFSET UNITYSDK_OFFSET(0xB1CE390)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_D806DABEADBC80D3_OFFSET UNITYSDK_OFFSET(0xB1CE850)
#define RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_DAB6E73F3199851E_OFFSET UNITYSDK_OFFSET(0xB1CE990)
#define RPG_CLIENT_STATERUNBLENDTREE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB1CD8C0)
#define RPG_CLIENT_STATERUNBLENDTREE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB1CD860)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1CDBC0)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1CF950)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1CEC50)
#define RPG_CLIENT_STATERUNBLENDTREE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CFF70)
#define RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1CFFE0)
#define RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1D0000)
#define RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1CFFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBlendTree_TypeDefinitionIndex = 63482;

	class StateRunBlendTree : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		// static const ::System::Single RUN_FORWARD_LIMIT_ANGLE; // 0x0
		// static const ::System::String* MOTION_GATE_RTPC; // 0x0
		::System::Single runGaitLerpTime; // 0x18
		::System::Single walkGaitLerpTime; // 0x1C
		::Il2CppArray<::System::String*>* walkStateNames; // 0x20
		::Il2CppArray<::System::String*>* runStateNames; // 0x28
		::Il2CppArray<::System::String*>* fastRunStateNames; // 0x30
		::Il2CppArray<::System::String*>* toFastRunStateNames; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* walkKeepRanges; // 0x40
		::Il2CppArray<::UnityEngine::Vector2>* runKeepRanges; // 0x48
		::Il2CppArray<::UnityEngine::Vector2>* fastRunKeepRanges; // 0x50
		::System::Single enterFastRunGaitLimit; // 0x58
		::System::String* onEnteredFastRunEvent; // 0x60
		::System::String* onEnteredRunEvent; // 0x68
		::System::Boolean useRunForwardTime; // 0x70
		::UnityEngine::AnimationCurve* leftFootUpStairWeightCurve; // 0x78
		::UnityEngine::AnimationCurve* rightFootUpStairWeightCurve; // 0x80
		::RPG::GameCore::CharacterMotionFlag _MotionFlag; // 0x88
		::System::Single _lastRunGaitValue; // 0x8C
		::System::Single _lastRunTargetGaitValue; // 0x90
		::Il2CppArray<::System::Int32>* _walkStateNameHashes; // 0x98
		::Il2CppArray<::System::Int32>* _runStateNameHashes; // 0xA0
		::Il2CppArray<::System::Int32>* _fastRunStateNameHashes; // 0xA8
		::Il2CppArray<::System::Int32>* _toFastRunStateNameHashes; // 0xB0
		::System::Int32 _lastStateNameHash; // 0xB8
		::UnityEngine::GameObject* _gameObject; // 0xC0
		::System::Nullable_1<::System::Single> _rtpcValue; // 0xC8
		::System::Nullable_1<::System::Boolean> _sendRTPC; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::StateRunBlendTree_Class_1_3B76E13757985C28_3*>* _poseLerpDatas; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_4_BA29415E87DA466B(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BA29415E87DA466B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_BC809936E0F4F009(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BC809936E0F4F009_OFFSET))(this, a1);
		}

		::System::Void Method_4_8B9FCF9FEE524950(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_8B9FCF9FEE524950_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_7C39B552AC01A40C(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_7C39B552AC01A40C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_D1A394DDCA154DC3(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_D1A394DDCA154DC3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_0F9F7473284990EE(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_0F9F7473284990EE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_D806DABEADBC80D3(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_D806DABEADBC80D3_OFFSET))(this, a1);
		}

		::System::Void Method_4_3FC863B885E15ED5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_3FC863B885E15ED5_OFFSET))(this);
		}

		::System::Single Method_4_DAB6E73F3199851E(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_DAB6E73F3199851E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_253939E38255333C(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_253939E38255333C_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_4_66019C9C927A7F81(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_66019C9C927A7F81_OFFSET))(a1, a2);
		}

		::System::Single Method_4_316207AB65D83105(::UnityEngine::Animator* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_316207AB65D83105_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag Method_4_BAC72019BD607572(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_BAC72019BD607572_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_5200FCB2A2AED1C2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_5200FCB2A2AED1C2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_4_41674EA405344719(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_41674EA405344719_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_4_AF2A45B2392898DF(::UnityEngine::Animator* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_METHOD_4_AF2A45B2392898DF_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}
	};
}

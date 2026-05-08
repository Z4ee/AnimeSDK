#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/MainCity/ESetCameraMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETCAMERA_GETENTITYPOS1_OFFSET UNITYSDK_OFFSET(0xEC9C720)
#define NODEGRAPH_MAINCITY_SETCAMERA_GETENTITYPOS2_OFFSET UNITYSDK_OFFSET(0xEC9C970)
#define NODEGRAPH_MAINCITY_SETCAMERA_GETFIXCAMERAPOSANDROT_OFFSET UNITYSDK_OFFSET(0xEC9DD40)
#define NODEGRAPH_MAINCITY_SETCAMERA_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEC9CBF0)
#define NODEGRAPH_MAINCITY_SETCAMERA_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xEC9E210)
#define NODEGRAPH_MAINCITY_SETCAMERA_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEC9BAA0)
#define NODEGRAPH_MAINCITY_SETCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xEC9B940)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_0_OFFSET UNITYSDK_OFFSET(0xEC9E4F0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_10_OFFSET UNITYSDK_OFFSET(0xEC9EBD0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_11_OFFSET UNITYSDK_OFFSET(0xEC9EC00)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_12_OFFSET UNITYSDK_OFFSET(0xEC9EC30)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_13_OFFSET UNITYSDK_OFFSET(0xEC9EC60)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_14_OFFSET UNITYSDK_OFFSET(0xEC9EC90)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_15_OFFSET UNITYSDK_OFFSET(0xEC9ECC0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_16_OFFSET UNITYSDK_OFFSET(0xEC9ECF0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_17_OFFSET UNITYSDK_OFFSET(0xEC9EEF0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_18_OFFSET UNITYSDK_OFFSET(0xEC9EF20)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_19_OFFSET UNITYSDK_OFFSET(0xEC9EF50)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_1_OFFSET UNITYSDK_OFFSET(0xEC9E520)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_20_OFFSET UNITYSDK_OFFSET(0xEC9EF80)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_21_OFFSET UNITYSDK_OFFSET(0xEC9EFB0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_22_OFFSET UNITYSDK_OFFSET(0xEC9EFE0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_23_OFFSET UNITYSDK_OFFSET(0xEC9F010)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_24_OFFSET UNITYSDK_OFFSET(0xEC9F040)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_25_OFFSET UNITYSDK_OFFSET(0xEC9F070)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_2_OFFSET UNITYSDK_OFFSET(0xEC9E550)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_3_OFFSET UNITYSDK_OFFSET(0xEC9E580)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_4_OFFSET UNITYSDK_OFFSET(0xEC9E5C0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_5_OFFSET UNITYSDK_OFFSET(0xEC9E5F0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_6_OFFSET UNITYSDK_OFFSET(0xEC9E7F0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_7_OFFSET UNITYSDK_OFFSET(0xEC9E9F0)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_8_OFFSET UNITYSDK_OFFSET(0xEC9EA20)
#define NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_9_OFFSET UNITYSDK_OFFSET(0xEC9EA50)
#define NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEC9F0A0)
#define NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xEC9F0B0)
#define NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEC9F140)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetCamera_TypeDefinitionIndex = 49883;

	class SetCamera : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::String* EntityPos1; // 0x58
		::System::String* BlendKey; // 0x60
		::System::String* CheckPosConfig; // 0x68
		::System::String* EntityPos2; // 0x70
		::NodeGraph::GraphInputValuePort* _centerHeightInput; // 0x78
		::System::Single CenterHeight; // 0x80
		::System::Single Radius; // 0x84
		::System::Int32 npcTag; // 0x88
		::UnityEngine::Vector3 FixEuler; // 0x8C
		::System::Single MinPatch; // 0x98
		::System::Single Fov; // 0x9C
		::UnityEngine::Vector3 Rotation; // 0xA0
		::System::Single entity1WaitTime; // 0xAC
		::System::Single MaxPatch; // 0xB0
		::System::Boolean EnableCheck; // 0xB4
		::System::Boolean DisableCheck; // 0xB5
		::System::Single entity2WaitTime; // 0xB8
		::System::Single BlendDuration; // 0xBC
		::System::Single ExitDuration; // 0xC0
		::System::Single CenterRate; // 0xC4
		::UnityEngine::Vector3 FixPos; // 0xC8
		::System::Single walkSpeed; // 0xD4
		::NodeGraph::MainCity::ESetCameraMode Mode; // 0xD8
		::System::Single MaxYaw; // 0xDC
		::System::Single MinYaw; // 0xE0
		::System::Single AddBlendDuration; // 0xE4
		::System::Single _centerHeightValue; // 0xE8

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::UnityEngine::Vector3 GetEntityPos1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_GETENTITYPOS1_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEntityPos2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_GETENTITYPOS2_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_ONNODECLEAR_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>> GetFixCameraPosAndRot()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>>(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA_GETFIXCAMERAPOSANDROT_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__28_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_4_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_5(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_5_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_6(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_6_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_7(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_7_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_8(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_8_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_9(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_9_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_10(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_10_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_11(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_11_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_12(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_12_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_13(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_13_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_14(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_14_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_15(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_15_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_16(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_16_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_17(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_17_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_18(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_18_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_19(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_19_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_20(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_20_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_21(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_21_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_22(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_22_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_23(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_23_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_24(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_24_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_25(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA__ONREGISTERPARAM_B__28_25_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETCAMERA___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}

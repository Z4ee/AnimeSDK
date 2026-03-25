#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/DeployBoardState.h"

class Class_1_8CF94E0F14A91ED3_4;
class Class_1_AA6FF9C9B64B58C9;
class Class_1_C3C5F5609FD74FF5;
class Class_1_DD6E273E77666B37;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client::Prop { class ConnectionInfo; }
namespace RPG::Client::Prop { class DeployPuzzleBasePoint; }
namespace RPG::Client::Prop { class DeployPuzzleHint; }
namespace RPG::Client::Prop { class DeployPuzzleStone; }
namespace RPG::Client::Prop { class HintConfigInfo; }
namespace RPG::Client::Prop { class StoneInfo; }
namespace RPG::Client::Prop { class StoneMoveAnimConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGELINERENDEREMISSION_OFFSET UNITYSDK_OFFSET(0xA078FE0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xA076200)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA075BF0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETANSWERBASEPOINTPROPIDLIST_OFFSET UNITYSDK_OFFSET(0xA073D10)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETBASEPOINT_OFFSET UNITYSDK_OFFSET(0xA0774C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETSTONE_OFFSET UNITYSDK_OFFSET(0xA0775A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTHOLDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0xA0798D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTPICKUPBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0xA0798F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYERHOLDINGSTONE_OFFSET UNITYSDK_OFFSET(0xA073A60)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYINGSTONEMOVEANIM_OFFSET UNITYSDK_OFFSET(0xA077690)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_PUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0xA079910)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GIVEBACKHOLDINGSTONE_OFFSET UNITYSDK_OFFSET(0xA078240)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA074010)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA0761B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_0F9BA4683D398D7A_OFFSET UNITYSDK_OFFSET(0xA074C80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_292F9610D63D1947_OFFSET UNITYSDK_OFFSET(0xA0783D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0xA078B90)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xA079690)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xA079D40)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xA0763C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xA074970)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA0790F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xA076F20)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_78DD1D9F31D0769E_OFFSET UNITYSDK_OFFSET(0xA076300)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0xA0751C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0xA078640)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8719F90BD885137A_OFFSET UNITYSDK_OFFSET(0xA0799D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_889C45DCDD74975A_OFFSET UNITYSDK_OFFSET(0xA076C00)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8A2905DAFB806E28_OFFSET UNITYSDK_OFFSET(0xA0789B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA078460)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xA075CA0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0xA0778B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0xA074F60)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0xA077070)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_EBBE08F2874773A2_OFFSET UNITYSDK_OFFSET(0xA0798A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0xA0758E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ONPUZZLEFINISHED_OFFSET UNITYSDK_OFFSET(0xA077E30)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PICKUPSTONE_OFFSET UNITYSDK_OFFSET(0xA0736A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLACESTONE_OFFSET UNITYSDK_OFFSET(0xA0734F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYEREFFECTATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA079930)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYSTONEMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0xA0776F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA075810)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTHOLDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0xA0798E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTPICKUPBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0xA079900)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_PUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0xA079920)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA074910)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SWAPSTONE_OFFSET UNITYSDK_OFFSET(0xA073850)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0785A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERHINTLINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0xA0794C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONEFADEOUT_OFFSET UNITYSDK_OFFSET(0xA079200)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONELINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0xA079380)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA07A150)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA079E00)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA07A280)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA07A1B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA07A290)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA07A220)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA07A1C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA07A330)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___SWITCHPLAYEREFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0xA07A1A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard_TypeDefinitionIndex = 63978;

	class DeployPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_37()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x48020);
		}
		static ::System::Int32* StaticGet_Field_6_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12C50);
		}
		::System::UInt32 PuzzleGroupID; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* BasePointProps; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::StoneInfo*>* StoneProps; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ConnectionInfo*>* StoneConnections; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ConnectionInfo*>* PuzzleHintConnections; // 0x68
		::UnityEngine::Transform* DrawLinePrefab; // 0x70
		::System::Single LineWidth; // 0x78
		::UnityEngine::Transform* HintLinePrefab; // 0x80
		::System::Single HintLineWidth; // 0x88
		::RPG::Client::Prop::HintConfigInfo* HintConfig; // 0x90
		::UnityEngine::Collider* ValidArea; // 0x98
		::System::String* PlayerLinkPoint; // 0xA0
		::System::String* PlayerHoldEffectPath; // 0xA8
		::System::Single PlayerHoldEffectFadeoutSpeed; // 0xB0
		::System::Single PlayerHoldEffectPlaceFadeoutSpeed; // 0xB4
		::RPG::Client::Prop::StoneMoveAnimConfig* StoneAnimConfig; // 0xB8
		::System::UInt32 _CurrentHoldStonePropID_k__BackingField; // 0xC0
		::System::UInt32 _CurrentPickupBasePointPropID_k__BackingField; // 0xC4
		::System::Boolean _PuzzleSolved_k__BackingField; // 0xC8
		::UnityEngine::Transform* Field_6_19; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::DeployPuzzleStone*>* Field_6_20; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::DeployPuzzleBasePoint*>* BasePointDatas; // 0xE0
		::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_4*>* Field_6_22; // 0xE8
		::RPG::Client::Prop::DeployPuzzleHint* Field_6_23; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* Field_6_24; // 0xF8
		::RPG::GameCore::DeployBoardState Field_6_26; // 0x100
		::System::Collections::Generic::Queue_1<::Class_1_AA6FF9C9B64B58C9*>* Field_6_27; // 0x108
		::System::Collections::Generic::List_1<::System::Single>* Field_6_28; // 0x110
		::System::Boolean Field_6_29; // 0x118
		::RPG::Client::MonoEffect* Field_6_30; // 0x120
		::System::Boolean Field_6_31; // 0x128
		::System::Collections::Generic::List_1<::Class_1_C3C5F5609FD74FF5*>* Field_6_32; // 0x130
		::System::Collections::Generic::List_1<::Class_1_DD6E273E77666B37*>* Field_6_33; // 0x138
		::System::Int32 Field_6_34; // 0x140
		::System::Int32 Field_6_35; // 0x144
		::System::Int32 Field_6_36; // 0x148
		::RPG::Client::RuntimeGroupManager* Field_6_38; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::GameCore::DeployBoardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeployBoardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGESTATE_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_0F9BA4683D398D7A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_0F9BA4683D398D7A_OFFSET))(this);
		}

		::System::Void Method_6_CB8E229BDF290D41()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_CB8E229BDF290D41_OFFSET))(this);
		}

		::System::Void Method_6_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Void Method_6_8080E22F79F246F0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8080E22F79F246F0_OFFSET))(this);
		}

		::RPG::Client::Prop::DeployPuzzleBasePoint* GetBasePoint(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::DeployPuzzleBasePoint*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETBASEPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::DeployPuzzleStone* GetStone(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::DeployPuzzleStone*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETSTONE_OFFSET))(this, a1);
		}

		::System::Void PlaceStone(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLACESTONE_OFFSET))(this, a1, a2);
		}

		::System::Void PickupStone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PICKUPSTONE_OFFSET))(this, a1, a2);
		}

		::System::Void SwapStone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SWAPSTONE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C1E0405EEC95DC65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_C1E0405EEC95DC65_OFFSET))(this);
		}

		::System::Void OnPuzzleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ONPUZZLEFINISHED_OFFSET))(this);
		}

		::System::Void GiveBackHoldingStone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GIVEBACKHOLDINGSTONE_OFFSET))(this);
		}

		::System::Void Method_6_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_7206DC8F66A4D2A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_7206DC8F66A4D2A8_OFFSET))(this);
		}

		::System::Void Method_6_E21AC6EE08DC160A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_E21AC6EE08DC160A_OFFSET))(this);
		}

		::System::Void Method_6_78DD1D9F31D0769E(::RPG::GameCore::DeployBoardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeployBoardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_78DD1D9F31D0769E_OFFSET))(this, a1);
		}

		::System::Void Method_6_889C45DCDD74975A(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_889C45DCDD74975A_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeLineRenderEmission(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGELINERENDEREMISSION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAnswerBasePointPropIDList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETANSWERBASEPOINTPROPIDLIST_OFFSET))(this);
		}

		::System::Void Method_6_8608350DFEDEE4FD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8608350DFEDEE4FD_OFFSET))(this, a1);
		}

		::System::Void Method_6_8A2905DAFB806E28(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8A2905DAFB806E28_OFFSET))(this, a1);
		}

		::System::Void Method_6_2DD8EB2A8AB21975(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_2DD8EB2A8AB21975_OFFSET))(this, a1);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void PlayStoneMoveAnimation(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYSTONEMOVEANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TriggerStoneFadeout(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONEFADEOUT_OFFSET))(this, a1);
		}

		::System::Void TriggerStoneLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONELINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerHintLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERHINTLINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_31B86CF031D1C6B2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_31B86CF031D1C6B2_OFFSET))(this, a1);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_292F9610D63D1947()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_292F9610D63D1947_OFFSET))(this);
		}

		::System::UInt32 get_CurrentHoldStonePropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTHOLDSTONEPROPID_OFFSET))(this);
		}

		::System::Void set_CurrentHoldStonePropID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTHOLDSTONEPROPID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentPickupBasePointPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTPICKUPBASEPOINTPROPID_OFFSET))(this);
		}

		::System::Void set_CurrentPickupBasePointPropID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTPICKUPBASEPOINTPROPID_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayerHoldingStone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYERHOLDINGSTONE_OFFSET))(this);
		}

		::System::Boolean get_PuzzleSolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_PUZZLESOLVED_OFFSET))(this);
		}

		::System::Void set_PuzzleSolved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_PUZZLESOLVED_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayingStoneMoveAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYINGSTONEMOVEANIM_OFFSET))(this);
		}

		::UnityEngine::Transform* PlayerEffectAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYEREFFECTATTACHPOINT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_EBBE08F2874773A2()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_EBBE08F2874773A2_OFFSET))(this);
		}

		::System::Void Method_6_8719F90BD885137A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8719F90BD885137A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_6_F63565EA57F495CC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_F63565EA57F495CC_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_6_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_37D0382D0C30A2DC_OFFSET))();
		}

		::System::Void __SwitchPlayerEffect_b__39_0(::RPG::Client::MonoEffect* pSpecialEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___SWITCHPLAYEREFFECT_B__39_0_OFFSET))(this, pSpecialEffect, extraParams);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
